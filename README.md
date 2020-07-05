# Bluetooth Controlled Robot

Controlling robot using android devices

## Requirements

* Arduino(Nano, UNO, Mini)
* Bluetooth module(HC-05/HC-06)
* Driver Motor
* Cable jumper

## Block Diagram
![Image of Block Diagram](https://github.com/Lmanangka/bluetooth-controlled-robot/blob/master/img/Block-Diagram.png?raw=true)

Arduino -----------> Driver Motor
* D3 --------------> IN1
* D9 --------------> IN2
* D10 -------------> IN3
* D11 -------------> IN4

for arduino [analogWrite](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/) reference

## How To Use It
* Install **android-app**
* Upload **robot.ino** to Arduino
* Run app and connect to robot via Bluetooth

## Author
[**Leonardo Rudolf Manangka**](https://github.com/Lmanangka)
