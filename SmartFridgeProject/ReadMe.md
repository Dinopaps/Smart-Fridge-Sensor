
# Problem Based Learning

**Submitted to Carlos Mendes**

**By:**  
**Sasha Coallier (#2337276)**  
**Dino Papavasilopoulos (#2336169)**

---

## Project Description

Ever go to the fridge to get a snack but then completely forget it open or you didn't close it properly and then all the food in the fridge goes to waste? Well not anymore! Our application prevents this from happening with a smart door sensor. Using a magnet sensor system, this application will detect when the fridge has been open for more than 10 seconds, the LED will turn yellow as a sign of warning and then 20 seconds later, the LED will then turn red as a sign of alarm with a buzzer as well, alarming you. Once the fridge closes again, the LED will return to its green state and the buzzer will turn off.

---

## Features

- Detects fridge door in an open/closed state using an ultrasonic sensor  
- RGB LED shows door status:
  1. **Green**: Door closed  
  2. **Yellow**: Door open but under 10 seconds (Warning)  
  3. **Red**: Door open for over 10 seconds  
- Buzzer will go off when the door is open for over 10 seconds  
- All resets automatically once the door is closed  

---

## Materials Used

- Arduino Uno  
- Ultrasonic Sensor  
- RGB LED  
- Buzzer  
- Breadboard  
- Wires  
- Arduino IDE  
- Procreate (for the system design)  

---

## Pin Connections

| **Component**       | **Pin #** |
|---------------------|-----------|
| Ultrasonic Trig     | 7         |
| Ultrasonic Echo     | 8         |
| RGB - RED           | 3         |
| RGB - Green         | 4         |
| RGB - Yellow        | 5         |
| RED - Ground        | Ground    |
| Buzzer - VCC        | 5V        |
| Buzzer - Ground     | Ground    |

---

## System Design

### Circuit Diagram  
[View on Tinkercad](https://www.tinkercad.com/things/iwRg5FGgrNa-fridge-door-system/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=oLJHeFuIvMS-Y6ks1y8qHbhgi9gW_yweAsCC8kef9JY)

---

## Code Documentation

*Coming Soon or Available in Submission*

---

## Ethics, Privacy and Security

This project can help many people that may be suffering from short-term memory loss and can easily forget simple stuff such as this. This prevents unwanted disasters such as all the food in your fridge rotting and then you lose a bunch of money.

This code does not collect or transmit any data that is put into it. All the sensors are directly on the Arduino itself. This is intended as a helpful way for people who tend to forget.

---

## References

- [Ultrasonic Sensor with Arduino - Complete Guide](https://projecthub.arduino.cc/lucasfernando/ultrasonic-sensor-with-arduino-complete-guide-284faf)
