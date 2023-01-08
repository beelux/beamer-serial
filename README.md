# Beamer-Serial
Control a projector through the web (on an ESP8266 which uses serial).

## Serial usage
For "testing", one can control the projector directly through the ESP8266 dev board.
To do this, one can use the ESP8266 with an empty program, which, for all intents and purposes, transforms the development board into a serial adapter.

## Serial codes
See [the code file](p1500-serial-codes.md) for the various serial codes.

## Web page
[beamer.html](beamer.html) contains the website that the ESP serves.
The usage of GET requests makes it not ideal but much simpler (no JS or hacky forms needed).
