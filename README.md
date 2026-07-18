# Servo Motor Control System using Arduino UNO R3

## Overview

This project demonstrates how to control an **SG90 Servo Motor** using an **Arduino UNO R3**. The servo rotates from **0° to 180° and back**, while the current angle is displayed on a **16×2 I2C LCD** in real time.

---

## Components Used

* Arduino UNO R3
* SG90 Servo Motor
* 16×2 I2C LCD
* Jumper Wires
* USB Cable

---

## Circuit Connections

### Servo Motor

| Servo Pin       | Arduino UNO |
| --------------- | ----------- |
| VCC (Red)       | 5V          |
| GND (Brown)     | GND         |
| Signal (Orange) | D9          |

### 16×2 I2C LCD

| LCD Pin | Arduino UNO |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

---

## Software

* Arduino IDE
* Servo Library
* LiquidCrystal_I2C Library

---

## Working Principle

1. Arduino sends PWM signals to the SG90 servo through pin **D9**.
2. The servo rotates from **0° to 180°** and then back to **0°**.
3. The current angle is displayed on the **16×2 I2C LCD**.
4. The cycle repeats continuously.

---

## Features

* Servo rotation from **0°–180°**
* Real-time angle display on LCD
* Simple wiring without external power supply
* Beginner-friendly Arduino project

---

## Output

<img width="1200" height="1600" alt="WhatsApp Image 2026-07-18 at 6 07 43 PM" src="https://github.com/user-attachments/assets/1e79520e-2084-431e-a443-8c05a8123ff1" />
<img width="1200" height="1600" alt="WhatsApp Image 2026-07-18 at 6 07 42 PM" src="https://github.com/user-attachments/assets/697c4bd3-ed54-4ffc-9872-6875f63f878d" />

## Applications

* Automatic Door Systems
* Robotic Arm Control
* Camera Pan Mechanism
* Smart Home Automation
* Educational Robotics

---

## Conclusion

This project demonstrates the basics of **servo motor control**, **PWM signal generation**, and **I2C LCD interfacing** using an Arduino UNO R3. It is a simple and practical project for beginners learning embedded systems.

---

### Technologies Used

* Arduino UNO R3
* Embedded C (Arduino)
* Servo Library
* I2C Communication
* PWM Control
