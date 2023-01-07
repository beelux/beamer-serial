# Acer P1500 serial codes

Baudrate: 9600

Note that the asterisks are escaped to avoid rending bold.
It is also much easier to simply print the code as text than to bother with HEX on Arduino.

## Beamer Query

| Code (text)   | Code (HEX)                       | Function feature                      | Support     |
| ------------- | -------------------------------- | ------------------------------------- | ----------- |
| OKOKOKOKOK\r  | 4f 4b 4f 4b 4f 4b 4f 4b 4f 4b 0d | Power On                              | Supported   |
| \* 0 IR 001\r | 2a 20 30 20 49 52 20 30 30 31 0d | Power On                              | Supported   |
| \* 0 IR 002\r | 2a 20 30 20 49 52 20 30 30 32 0d | Power Off                             | Supported   |
| \* 0 IR 004\r | 2a 20 30 20 49 52 20 30 30 34 0d | Keystone                              | Supported   |
| \* 0 IR 006\r | 2a 20 30 20 49 52 20 30 30 36 0d | Mute                                  | Supported   |
| \* 0 IR 007\r | 2a 20 30 20 49 52 20 30 30 37 0d | Freeze                                | Supported   |
| \* 0 IR 008\r | 2a 20 30 20 49 52 20 30 30 38 0d | Menu                                  | Supported   |
| \* 0 IR 009\r | 2a 20 30 20 49 52 20 30 30 39 0d | Up                                    | Supported   |
| \* 0 IR 010\r | 2a 20 30 20 49 52 20 30 31 30 0d | Down                                  | Supported   |
| \* 0 IR 011\r | 2a 20 30 20 49 52 20 30 31 31 0d | Right                                 | Supported   |
| \* 0 IR 012\r | 2a 20 30 20 49 52 20 30 31 32 0d | Left                                  | Supported   |
| \* 0 IR 013\r | 2a 20 30 20 49 52 20 30 31 33 0d | Enter                                 | Unsupported |
| \* 0 IR 014\r | 2a 20 30 20 49 52 20 30 31 34 0d | Re-Sync                               | Supported   |
| \* 0 IR 015\r | 2a 20 30 20 49 52 20 30 31 35 0d | Source Analog RGB for D-sub           | Supported   |
| \* 0 IR 016\r | 2a 20 30 20 49 52 20 30 31 36 0d | Source Digital RGB(DVI)               | Unsupported |
| \* 0 IR 017\r | 2a 20 30 20 49 52 20 30 31 37 0d | Source PbPr for D-sub                 | Supported   |
| \* 0 IR 018\r | 2a 20 30 20 49 52 20 30 31 38 0d | Source S-Video                        | Supported   |
| \* 0 IR 019\r | 2a 20 30 20 49 52 20 30 31 39 0d | Source Composite Video                | Supported   |
| \* 0 IR 020\r | 2a 20 30 20 49 52 20 30 32 30 0d | Source Component Video                | Unsupported |
| \* 0 IR 021\r | 2a 20 30 20 49 52 20 30 32 31 0d | Aspect ratio 16:9                     | Supported   |
| \* 0 IR 022\r | 2a 20 30 20 49 52 20 30 32 32 0d | Aspect ratio 4:3                      | Supported   |
| \* 0 IR 023\r | 2a 20 30 20 49 52 20 30 32 33 0d | Volume +                              | Supported   |
| \* 0 IR 024\r | 2a 20 30 20 49 52 20 30 32 34 0d | Volume –                              | Supported   |
| \* 0 IR 025\r | 2a 20 30 20 49 52 20 30 32 35 0d | Brightness                            | Supported   |
| \* 0 IR 026\r | 2a 20 30 20 49 52 20 30 32 36 0d | Contrast                              | Supported   |
| \* 0 IR 027\r | 2a 20 30 20 49 52 20 30 32 37 0d | Color Temperature                     | Supported   |
| \* 0 IR 028\r | 2a 20 30 20 49 52 20 30 32 38 0d | Source Analog RGB for DVI Port(DVI-A) | Unsupported |
| \* 0 IR 029\r | 2a 20 30 20 49 52 20 30 32 39 0d | Source Analog YPbPr for DVI Port      | Unsupported |
| \* 0 IR 030\r | 2a 20 30 20 49 52 20 30 33 30 0d | Hide                                  | Supported   |
| \* 0 IR 031\r | 2a 20 30 20 49 52 20 30 33 31 0d | Source                                | Supported   |
| \* 0 IR 032\r | 2a 20 30 20 49 52 20 30 33 32 0d | Video: Color saturation adjustment    | Supported   |
| \* 0 IR 033\r | 2a 20 30 20 49 52 20 30 33 33 0d | Video: Hue adjustment                 | Supported   |
| \* 0 IR 034\r | 2a 20 30 20 49 52 20 30 33 34 0d | Video: Sharpness adjustment           | Supported   |
| \* 0 IR 035\r | 2a 20 30 20 49 52 20 30 33 35 0d | Query Model name                      | Supported   |
| \* 0 IR 036\r | 2a 20 30 20 49 52 20 30 33 36 0d | Query Native display resolution       | Supported   |
| \* 0 IR 037\r | 2a 20 30 20 49 52 20 30 33 37 0d | Query company name                    | Supported   |
| \* 0 IR 040\r | 2a 20 30 20 49 52 20 30 34 30 0d | Aspect ratioL.Box                     | Supported   |
| \* 0 IR 041\r | 2a 20 30 20 49 52 20 30 34 31 0d | Aspect ratio 1:1                      | Unsupported |
| \* 0 IR 042\r | 2a 20 30 20 49 52 20 30 34 32 0d | Keystone Up                           | Supported   |
| \* 0 IR 043\r | 2a 20 30 20 49 52 20 30 34 33 0d | Keystone Down                         | Supported   |
| \* 0 IR 044\r | 2a 20 30 20 49 52 20 30 34 34 0d | Keystone Left                         | Unsupported |
| \* 0 IR 045\r | 2a 20 30 20 49 52 20 30 34 35 0d | Keystone Right                        | Unsupported |
| \* 0 IR 046\r | 2a 20 30 20 49 52 20 30 34 36 0d | Zoom                                  | Supported   |
| \* 0 IR 047\r | 2a 20 30 20 49 52 20 30 34 37 0d | e-Key                                 | Supported   |
| \* 0 IR 048\r | 2a 20 30 20 49 52 20 30 34 38 0d | Color RGB                             | Supported   |
| \* 0 IR 049\r | 2a 20 30 20 49 52 20 30 34 39 0d | Language                              | Supported   |
| \* 0 IR 050\r | 2a 20 30 20 49 52 20 30 35 30 0d | Source HDMI                           | Supported   |
| \* 0 Lamp ?\r | 2a 20 30 20 4c 61 6d 70 20 3f 0d | Query the lamp ON/OFF                 | Supported   |
| \* 0 Lamp\r   | 2a 20 30 20 4c 61 6d 70 0d       | Query the lamp hours                  | Supported   |
| \* 0 Src ?\r  | 2a 20 30 20 53 72 63 20 3f 0d    | Query source input type               | Supported   |

## Beamer Answer

| Code (text)      | Code (HEX)                                   | Function feature                     | Support   |
| ---------------- | -------------------------------------------- | ------------------------------------ | --------- |
| Model XXXXXXXX\r | 4d 6f 64 65 6c 20 58 58 58 58 58 58 58 58 0d | Return the Model name                | Supported |
| Res XXXXX\r      | 52 65 73 20 58 58 58 58 58 0d                | Return the Native display resolution | Supported |
| Name XXXXXXXX\r  | 4e 61 6d 65 20 58 58 58 58 58 58 58 58 0d    | Return the company name              | Supported |
| Lamp 0\r         | 4c 61 6d 70 20 30 0d                         | Return Lamp OFF status               | Supported |
| Lamp 1\r         | 4c 61 6d 70 20 31 0d                         | Return Lamp ON status                | Supported |
| XXXX\r           | 58 58 58 58 0d                               | Return Lamp hours                    | Supported |
