#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#include "WiFi_Parameters.h"

const char* ssid = STASSID;
const char* password = STAPSK;

ESP8266WebServer server(80);

// See repo for clean HTML (not minified)
const String index_page = "<!doctypehtml>\
<meta content=\"width=device-width,initial-scale=1\"name=viewport>\
<style>html{font-family:sans-serif;text-align:center}h1{font-size:50px}.a{text-decoration:none}.button{color:#fff;border:none;padding:16px 40px;font-size:30px;cursor:pointer}\
.on{background-color:#00cd6c}.off{background-color:#ff1f5b}.source{background-color:#a0b1ba}.control{background-color:#f28522}.one-item-grid{grid-column:1/4}hr{background-color:gray}\
#button-container{margin-left:30%;margin-right:30%;display:grid;grid-template-columns:auto auto auto}</style>\<h1>Chill Beamer Control</h1><div id=button-container><div><p>Power on<p\
><a href=/on><button class=\"button on\">ON</button></a></div><div><p>Power off<p><a href=/off><button class=\"button off\">OFF</button></a></div><div></div><div class=one-item-grid>\
<hr></div><div><p>HDMI<p><a href=/hdmi><button class=\"button source\">HDMI</button></a></div><div><p>VGA<p><a href=/rgb><button class=\"button source\">VGA</button></a></div><div>\
<p>Source search<p><a href=/source><button class=\"button source\">Search</button></a></div><div><p>Hide<p><a href=/hide><button class=\"button control\">Toggle</button></a></div><div>\
<p>Freeze<p><a href=/freeze><button class=\"button control\">Toggle</button></a></div><div><p>Re-sync<p><a href=/re-sync><button class=\"button control\">Re-sync</button></a></div></div>";

void sendIndex() {
  server.send(200, "text/html", index_page);
}

void apiOn() {
  Serial.println("OKOKOKOKOK");
  Serial.flush();
  sendIndex();
}

void apiOff() {
  Serial.println("* 0 IR 002");
  Serial.flush();
  sendIndex();
}

void apiHDMI() {
  Serial.println("* 0 IR 050");
  Serial.flush();
  sendIndex();
}

void apiRGB() {
  Serial.println("* 0 IR 015");
  Serial.flush();
  sendIndex();
}

void apiSource() {
  Serial.println("* 0 IR 031");
  Serial.flush();
  sendIndex();
}

void apiHide() {
  Serial.println("* 0 IR 030");
  Serial.flush();
  sendIndex();
}

void apiFreeze() {
  Serial.println("* 0 IR 007");
  Serial.flush();
  sendIndex();
}

void apiResync() {
  Serial.println("* 0 IR 014");
  Serial.flush();
  sendIndex();
}

void sendNotFound() {
  server.send(404, "text/html", index_page);
}

void setup(void) {
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
  }

  server.on("/", sendIndex);
  server.on("/on", apiOn);
  server.on("/off", apiOff);
  server.on("/hdmi", apiHDMI);
  server.on("/rgb", apiRGB);
  server.on("/source", apiSource);
  server.on("/hide", apiHide);
  server.on("/freeze", apiFreeze);
  server.on("/re-sync", apiResync);
  server.onNotFound(sendNotFound);

  server.begin();
}

void loop(void) {
  server.handleClient();

  // empty serial "buffer"? idk if exists or needed
  if(Serial.available() > 0) {
    Serial.read();
  }
}