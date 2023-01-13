# toy-car-using-arduino-and-bluetooth

This is a simple and easy project using arduino and bluetooth to make a RC car.
You can controlled it using smartphone, this project will be great for a
beginner to learn about arduino, serial connection and electronics.

## Requirements

- Arduino(Nano, UNO, Mini)
- Bluetooth module(HC-05/HC-06)
- Driver Motor L298N
- Motor DC(it'll depend with your budget)
- Car cased(it'll depend with your budget)

## Block Diagram

![Image of Block Diagram](https://github.com/Lmanangka/bluetooth-controlled-robot/blob/master/img/Block-Diagram.jpg?raw=true)

Arduino --------------> Driver Motor

- D3 --------------> IN1
- D9 --------------> IN2
- D10 ------------> IN3
- D11 ------------> IN4
- GND -----------> GND
- VIN -------------> 5V

Arduino -------------> Bluetooth(HC-05/HC-06)

- TX --------------> RX
- RX --------------> TX
- 5V --------------> VCC
- GND -----------> GND

This is serial connection between arduino and bluetooth module.

## Author

[**Leonardo Rudolf Manangka**](https://github.com/Lmanangka)

## Reference

- [analogWrite](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/)
- [Datasheet L298N](https://www.google.com/url?sa=t&source=web&rct=j&url=http://www.handsontec.com/dataspecs/L298N%2520Motor%2520Driver.pdf&ved=2ahUKEwjVpLyErMXuAhVO63MBHfWYCNIQFjABegQIARAB&usg=AOvVaw3RqKatlWCx_OOcg_CK8P5W&cshid=1612067959648)
