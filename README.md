# Ultrasonic Distance Alert System using Arduino

This project measures the distance of an object using an ultrasonic sensor and provides visual and audio alerts using an LCD display and a buzzer.

## 📌 Project Description
An Arduino-based distance monitoring system that calculates object distance in real time. The distance is displayed on a 16x2 LCD, and different buzzer tones are generated based on how close the object is.

## 🧰 Components Used
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD Display
- Buzzer
- Jumper Wires
- Breadboard

## ⚙️ Working Principle
1. The ultrasonic sensor sends a sound pulse.
2. The pulse reflects back from an object.
3. Arduino calculates the distance based on time taken.
4. Distance and pulse duration are shown on the LCD.
5. The buzzer sound frequency changes based on distance.

## 🔊 Distance vs Buzzer Tone
| Distance Range | Buzzer Frequency |
|--------------|-----------------|
| 0 – 20 cm | 261 Hz |
| 21 – 60 cm | 293 Hz |
| 61 – 80 cm | 329 Hz |
| 81 – 100 cm | 349 Hz |
| > 100 cm | 392 Hz |

## 🖥️ Output
- LCD displays:
  - Project name
  - Distance in centimeters
  - Echo pulse duration
- Buzzer gives audio alerts based on distance

## 🚀 Applications
- Obstacle detection
- Parking assistance
- Distance monitoring systems
- Beginner Arduino learning project

## 🧑‍💻 Author
Pranith Teja

## 📜 License
This project is open-source and free to use for educational purposes.
