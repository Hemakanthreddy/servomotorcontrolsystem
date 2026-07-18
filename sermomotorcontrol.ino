#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);   // Change to 0x3F if needed
Servo myServo;

void setup() {
  myServo.attach(9);      // Servo signal pin
  lcd.init();
  lcd.backlight();
}

void loop() {

  // Rotate 0° to 180°
  for (int angle = 0; angle <= 180; angle += 10) {

    myServo.write(angle);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Servo Angle");

    lcd.setCursor(0, 1);
    lcd.print(angle);
    lcd.print((char)223);   // Degree symbol
    lcd.print(" ");

    delay(500);
  }

  // Rotate 180° to 0°
  for (int angle = 180; angle >= 0; angle -= 10) {

    myServo.write(angle);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Servo Angle");

    lcd.setCursor(0, 1);
    lcd.print(angle);
    lcd.print((char)223);
    lcd.print(" ");

    delay(500);
  }
}
