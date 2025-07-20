# Arduino LED Control with Buttons Project 💡
---
## Project Overview 🚀

This project demonstrates controlling *three LEDs* (Red, Yellow, Blue) using *three buttons* on an *Arduino board*. When each button is pressed, it lights up the corresponding LED.
---
## Project Objective 🎯

The goal is to create a simple control system for LEDs using buttons with Arduino, while implementing the use of internal *pull-up resistors* to ensure proper button handling without external resistors.

---

## Components Required 🛠

- *Arduino board* (e.g., Arduino Uno)
- *3 Buttons* (to control LEDs)
- *3 LEDs* (Red, Yellow, Blue)
- *Breadboard* (optional, depending on the wiring setup)
- *Jumper wires*
- *USB cable* to connect the Arduino to your computer

---

## Wiring Instructions 🔌

| Component         | Pin Number | Description            |
|-------------------|------------|------------------------|
| *Red Button*    | Pin 2      | Button to control Red LED |
| *Yellow Button* | Pin 3      | Button to control Yellow LED |
| *Blue Button*   | Pin 4      | Button to control Blue LED |
| *Red LED*       | Pin 5      | Red LED lights up when Red Button is pressed |
| *Yellow LED*    | Pin 6      | Yellow LED lights up when Yellow Button is pressed |
| *Blue LED*      | Pin 7      | Blue LED lights up when Blue Button is pressed |


---
## 📸 Project Results

Here are some real-world shots of the project in action:

### circuit result:

https://github.com/user-attachments/assets/ba232d9e-179c-4a41-8b14-28326ea7ae6a

---
## Arduino Code 💻

Here is the full Arduino code to control the LEDs:

```cpp
// Define pin numbers for buttons and LEDs
int redButton = 2;    // Red button
int yellowButton = 3; // Yellow button
int blueButton = 4;   // Blue button

int redLED = 5;       // Red LED
int yellowLED = 6;    // Yellow LED
int blueLED = 7;      // Blue LED

void setup() {
  // Set buttons as inputs with internal pull-up resistors
  pinMode(redButton, INPUT_PULLUP);
  pinMode(yellowButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);

  // Set LEDs as outputs
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // Read the button states
  int redState = digitalRead(redButton);
  int yellowState = digitalRead(yellowButton);
  int blueState = digitalRead(blueButton);

  // Control LEDs based on button presses
  if (redState == LOW) {
    digitalWrite(redLED, HIGH);  // Turn on the red LED
  } else {
    digitalWrite(redLED, LOW);   // Turn off the red LED
  }

  if (yellowState == LOW) {
    digitalWrite(yellowLED, HIGH); // Turn on the yellow LED
  } else {
    digitalWrite(yellowLED, LOW);  // Turn off the yellow LED
  }

  if (blueState == LOW) {
    digitalWrite(blueLED, HIGH);   // Turn on the blue LED
  } else {
    digitalWrite(blueLED, LOW);    // Turn off the blue LED
  }
}
```
---
## 🧑‍💻 Author

- **khaled mahmoud sulaimani** – [@khaledsulimani](https://github.com/khaledsulimani)
