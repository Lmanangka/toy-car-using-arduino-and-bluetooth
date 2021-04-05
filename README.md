# Bluetooth Controlled Robot

Controlling robot using android device

## Requirements

* Arduino(Nano, UNO, Mini)
* Bluetooth module(HC-05/HC-06)
* Driver Motor L298N

## Block Diagram
![Image of Block Diagram](https://github.com/Lmanangka/bluetooth-controlled-robot/blob/master/img/Block-Diagram.jpg?raw=true)

Arduino -----------> Driver Motor
* D3 --------------> IN1
* D9 --------------> IN2
* D10 -------------> IN3
* D11 -------------> IN4
* GND -------------> GND
* VIN -------------> 5V

for arduino [analogWrite](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/) reference

## How To Use It
* Install **android-app**
* Upload **robot.ino** to Arduino
* Run app and connect to robot via Bluetooth

## Author
[**Leonardo Rudolf Manangka**](https://github.com/Lmanangka)

## Reference
* [Datasheet L298N](https://www.google.com/url?sa=t&source=web&rct=j&url=http://www.handsontec.com/dataspecs/L298N%2520Motor%2520Driver.pdf&ved=2ahUKEwjVpLyErMXuAhVO63MBHfWYCNIQFjABegQIARAB&usg=AOvVaw3RqKatlWCx_OOcg_CK8P5W&cshid=1612067959648)
