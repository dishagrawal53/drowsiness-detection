# DROWSINESS DETECTION USING IOT

This project aims to develop a drowsiness detection system by monitoring the user's eye activity. When the user's eyes remain closed for longer than the typical blinking duration (adjustable by the user), a buzzer alert is triggered. <br>
This non-contact system provides an effective way to detect varying levels of alertness and offers early warnings to prevent drowsiness-related incidents, especially while driving. <br>
A significant advantage of this model is its versatility—it can be adapted for scenarios such as studying, working, or prolonged screen use, thereby improving productivity and user well-being.

---

## INTRODUCTION

Drowsy driving is a serious — yet often underestimated — road safety issue. According to the National Highway Traffic Safety Administration (NHTSA), drowsiness contributes to over 100,000 crashes annually, leading to approximately 1,550 deaths, 71,000 injuries, and substantial economic losses. <br><br>
A study by the AAA Foundation for Traffic Safety revealed:

41% of drivers have admitted to falling asleep at the wheel.

1 in 10 drivers reported doing so within the past year.

Over 55% of these incidents occurred within the first hour of driving.

Further data shows drowsiness is linked to:

1 in 6 (16.5%) fatal crashes

1 in 8 crashes requiring hospitalization

1 in 8 of every 14 crashes where a vehicle required towing

Despite these alarming figures, the actual impact is underreported, as fatigue is difficult to confirm post-crash.

---
## HARDWARE AND SOFTWARE REQUIREMENTS
HARDWARE:

• Buzzer <br>
• Power bank (as battery) <br>
• Arduino Nano <br>
• IR Sensor <br>
• Transparent spectacles frame <br>
• Jumper wires <br><br>

SOFTWARE:

• Arduino IDE <br>
• Serial.begin() for serial communication <br><br>

<img width="361" height="548" alt="Hardware Setup" src="https://github.com/user-attachments/assets/6b2a6384-c015-421c-8e0c-b1e8fcf38cef" />
## IMPLEMENTATION

<img width="805" height="626" alt="Block Diagram" src="https://github.com/user-attachments/assets/d799b3f9-4fcd-4818-990c-dc8c2f4eb7ea" /> <br>
<b>BLOCK DIAGRAM</b> <br><br>

The system detects drowsiness using an IR sensor mounted on a spectacle frame. It works by measuring the blink rate of the user, which is a key indicator of fatigue. <br><br>

Steps to Implement:

Prepare the hardware: IR sensor, Arduino Nano, buzzer, power bank, USB cable, and connecting wires. <br>

Connect the IR sensor:

VCC → 5V on Arduino

GND → GND on Arduino

OUT → any digital pin on Arduino

Program the Arduino:
Use interrupts to measure blink frequency by counting sensor triggers over time. <br>

Mount the sensor:
Place the IR sensor on the spectacle frame, ensuring it doesn’t block the user's vision. <br>

Calibrate the system:
Simulate driving conditions to identify blink patterns and set an appropriate threshold. <br>

Test the prototype:
Ensure consistent detection in different lighting conditions. <br>

Trigger the buzzer alert:
If blink rate or eye closure duration exceeds the threshold, the buzzer alerts the user. <br>

---
## RESULT

The project effectively detects prolonged eye closure and alerts the user using a buzzer, proving its capability in identifying drowsiness in real-time.

<img width="901" height="695" alt="Result 1" src="https://github.com/user-attachments/assets/66a303fc-c4f3-46c1-a405-21feb012904b" /> <br>
<img width="913" height="349" alt="Result 2" src="https://github.com/user-attachments/assets/74afe37a-f3b4-44b4-a22d-7519e47a98a9" />

---
## CONCLUSION AND FUTURE SCOPE
CONCLUSION

Using an IR sensor mounted on spectacles is a cost-effective and non-intrusive method for drowsiness detection. <br>
However, it comes with limitations:

Performance may drop in low-light conditions.

Blink rate alone may not be a reliable fatigue indicator for all individuals.

To improve detection accuracy, the system could integrate other indicators like yawning detection, steering behavior, or eye closure duration. <br>
The alert mechanism should also be designed in a non-distracting manner to ensure user safety.

Overall, this model has strong potential to reduce accidents and improve alertness in various real-world applications.

FUTURE SCOPE

Enhanced accuracy with multi-parameter detection: blink rate, yawning, head nodding, and driving behavior. <br>

Wireless upgrade for more comfort and ease of use. <br>

Smart integration with platforms like Netflix or YouTube to pause playback when drowsiness is detected. <br>

Focus tools to alert students and professionals when attention drops during work or study. <br>
