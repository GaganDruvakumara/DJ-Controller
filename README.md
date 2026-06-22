# DIY DJ CONTROLLER
<body1 align="center">
  <br>
<img width="707" height="1005" alt="image" src="https://github.com/GaganDruvakumara/DJ-Controller/blob/main/Zine.png" />
  <br>
  I’ve wanted to get into this hobby for a while, but the cost of entry was a major barrier. I looked through existing projects online, but I couldn’t find any open-source DJ controllers that really stood out. Many were small, limited, or designed more like experimental gadgets rather than something practical for real DJ use. There seemed to be a gap between expensive commercial controllers and accessible open-source alternatives, which inspired me to create this project.
  <br>
  <br>
  <i>This project is a fully open-source, 4-channel DIY DJ controller designed to be a functional and customizable alternative for anyone interested in building their own hardware.</i>
</body1>

# Key Features
* 4 Channel Deck
* XLR & 6.35MM Jack L&R master out + 3.5mm Jack L+R master out
* 3.5mm Jack headphone out
* 32-bit DAC for outputs
* 2 Neutrik Jack Mic Inputs
* 24-bit ADC for inputs
* 16 performance pad with mode selector
* 2 rotary encoders for menu navigation

# PCB
7x 2-layer PCBs (9 total including duplicates) designed in KiCad
### PCB Schematic
<img width="4405" height="6250" alt="PCB Schem" src="https://github.com/user-attachments/assets/d8b0280b-5260-4188-a191-f427778683ce" />

### PCB Front Layer
<img width="1924" height="1183" alt="image" src="https://github.com/user-attachments/assets/24da7260-8d2d-4f07-9fdc-adc682d3821a" />

### PCB Back Layer
<img width="1933" height="1193" alt="image" src="https://github.com/user-attachments/assets/8cbde8bb-6687-4730-a68b-903450adf983" />

### PCB 3D View
Component models from GrabCad
<img width="1858" height="1065" alt="image" src="https://github.com/user-attachments/assets/229a63f8-79de-44b6-982f-ff740e084a8f" />
<img width="1918" height="1031" alt="image" src="https://github.com/user-attachments/assets/93ebd054-454c-44da-93b6-e1a59ede00e3" />

## PCB Wiring Schematic
<img width="1254" height="946" alt="Screenshot 2026-06-20 173347" src="https://github.com/user-attachments/assets/e8e7bcca-c94e-482a-91c6-19a94c8c8aa7" />

# CAD Assembly
CAD models designed in [Onshape](https://cad.onshape.com/documents/7791953f15b9474113af6284/w/087eac69f09fbec4411ed0d8/e/f1a33f0f3682f52a7b10a5d9?renderMode=0&uiState=6a372b9190a847a714621490).
Assembly done with M3x5x5 threaded inserts & M3 screws
<img width="1635" height="1152" alt="Screenshot 2026-06-20 180953" src="https://github.com/user-attachments/assets/f53473d2-580c-41c4-88ab-67101a6b5464" />
<img width="1979" height="1005" alt="Screenshot 2026-06-20 180435" src="https://github.com/user-attachments/assets/907cff07-b0c1-4d6e-8d20-a15a9205020b" />

# Bill of Materials

|Part                                       |Min Qty.|Price Per Order|Approx. Cost|Link                                                |
|-------------------------------------------|--------|---------------|------------|----------------------------------------------------|
|                                           |        |               |            |                                                    |
|**Electronic Components**                      |        |               |            |                                                    |
|                                           |        |               |            |                                                    |
|Raspberry Pi Pico                          |1       |$3.00          |$3.00       |https://www.aliexpress.us/item/3256805941727857.html|
|MCP23017 I2C GPIO Expander                 |3       |$1.50          |$4.50       |https://www.aliexpress.us/item/3256809349179807.html|
|CD74HC4067M Multiplexer                    |2       |$4.00          |$4.00       |https://www.aliexpress.us/item/3256810617508863.html|
|PCM5012 Module                             |2       |$2.50          |$5.00       |https://www.aliexpress.us/item/3256806137563609.html|
|PCM1808 Module                             |1       |$2.00          |$2.00       |https://www.aliexpress.us/item/3256811975040160.html|
|EC11 Rotary Encoder Switch                 |2       |$2.50          |$5.00       |https://www.aliexpress.us/item/3256804936028561.html|
|4.7k THT Resistors                         |38      |$1.00          |$1.00       |https://www.aliexpress.us/item/3256802303553096.html|
|10k DOIT Rotary Potentiometers             |24      |$2.00          |$10.00      |https://www.aliexpress.us/item/3256809058182220.html|
|10K 60mm Slide Potentiometers (45mm travel)|7       |$2.00          |$14.00      |https://www.aliexpress.us/item/3256810149786178.html|
|600:600 Ohm Audio Transformers             |2       |$7.00          |$14.00      |https://www.aliexpress.us/item/3256811824890339.html|
|100 nF Ceramic Capacitors                  |6       |$1.00          |$1.00       |https://www.aliexpress.us/item/3256802104127109.html|
|100 uF Electrolytic Capacitors             |2       |$1.00          |$1.00       |https://www.aliexpress.us/item/3256807284223642.html|
|12mm Tacticle Switches                     |20      |$4.00          |$4.00       |https://www.aliexpress.us/item/2251832641145267.html|
|6mm Tacticle Switches                      |4       |$1.00          |$1.00       |https://www.aliexpress.us/item/2255800493650621.html|
|SPDT Slide Switch                          |2       |$2.00          |$2.00       |https://www.aliexpress.us/item/3256801114920515.html|
|WS2812B Individual RGB LEDs                |20      |$1.50          |$3.00       |https://www.aliexpress.us/item/2255801159561004.html|
|MT6701 Magnetic Rotary Encoder             |2       |$4.00          |$4.00       |https://www.aliexpress.us/item/3256810566166924.html|
|                                           |        |               |            |                                                    |
|                                           |        |               |            |                                                    |
|**IO Ports**                                   |        |               |            |                                                    |
|                                           |        |               |            |                                                    |
|XLR Male Panel Mount                       |2       |$1.00          |$2.00       |https://www.aliexpress.us/item/3256804030639653.html|
|6.35mm Jack Female Panel                   |2       |$2.00          |$4.00       |https://www.aliexpress.us/item/3256810292264986.html|
|Neutrik Combo Jack Panel                   |2       |$2.00          |$4.00       |https://www.aliexpress.us/item/3256801144687168.html|
|3.5mm Jack Female Panel                    |2       |$3.00          |$3.00       |https://www.aliexpress.us/item/3256804353386767.html|
|                                           |        |               |            |                                                    |
|                                           |        |               |            |                                                    |
|**Mechanical Components**                      |        |               |            |                                                    |
|                                           |        |               |            |                                                    |
|M3x5x5 Threaded inserts                    |32      |$4.00          |$4.00       |https://www.aliexpress.us/item/3256805892791659.html|
|M3x6 Pan Head Screws                       |18      |$2.00          |$2.00       |https://www.aliexpress.us/item/3256802178253461.html|
|M3x15(or 14) Pan Head Screws               |4       |$3.00          |$3.00       |https://www.aliexpress.us/item/3256802178253461.html|
|M3x6 Countersunk Screws                    |10      |$2.00          |$2.00       |https://www.aliexpress.us/item/3256808642166413.html|
|6x2mm Radial Magnet                        |2       |$6.00          |$6.00       |https://www.aliexpress.us/item/3256810512258917.html|
|608ZZ Bearing                              |2       |$2.00          |$2.00       |https://www.aliexpress.us/item/3256807356386819.html|
|                                           |        |               |            |                                                    |
|                                           |        |               |            |                                                    |
|**Total Estimated Cost**                       |        |               |$110.50     |                                                    |

# Firmware

WIP

### Libraries
* Raspberry Pi Pico SDK C/C++
* Raspberry Pi Pico VS Code Extension

# Credits
* [Onshape](https://www.onshape.com/en/)
* [KiCad](https://www.kicad.org)
* [GrabCad](https://grabcad.com)
