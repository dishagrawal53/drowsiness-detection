# DROWSINESS DETECTION USING IOT
This project  aims to develop a drowsiness detection system by monitoring the eyes.When the driver closes their eyes for more than the blinking time(Adjustable according to the user here we have taken case when drowsiness is detected), a warning signal is issued to alert the driver using a buzzer . This detection system provides a noncontact technique for judging different levels of driver alertness and facilitates early detection of a decline in alertness during driving. In such a case when fatigue is detected, a warning signal is issued to alert the driver.Thus helping in preventing major accidents. The major advantage of this system and our project model is the various use cases ie it  can be used in detecting drowsiness not only while driving but while studying and working too thus increasing productivity too.

---
## INTRODUCTION
Drowsy driving is a serious — yet often underestimated — road safety issue. According to the National Highway Traffic Safety Administration (NHTSA), drowsiness is a contributing factor in more than 100,000 motor vehicle collisions annually, leading to an estimated 1,550 deaths, 71,000 injuries, and substantial economic loss.
A recent study by the AAA Foundation for Traffic Safety revealed that 41% of drivers admit to having fallen asleep at the wheel at least once. Alarmingly, 1 in 10 drivers reported doing so within the past year.
Furthermore, drowsy driving is linked to:
1 in 6 (16.5%) fatal crashes
1 in 8 crashes requiring hospitalization
1 in 8 of every 14 crashes where a vehicle needed to be towed
Over 55% of drivers who fell asleep at the wheel had been driving for less than an hour before doing so — highlighting how quickly fatigue can impair driving ability.
Despite these alarming statistics, experts believe the impact of drowsy driving is vastly under-reported and likely underestimated due to the difficulty in detecting fatigue-related impairment post-crash.

---

## HARDWARE AND SOFTWARE REQUIREMENTS
HARDWARE
•	Buzzer.
•	Power bank as a battery
•	Arduino nano
•	IR sensor
•	Transparent glass.
•	Connecting wires.
SOFTWARE
•	Arduino.
•	We have serial.begin library.
<img width="361" height="548" alt="image" src="https://github.com/user-attachments/assets/6b2a6384-c015-421c-8e0c-b1e8fcf38cef" />

---
## IMPLEMENTATION
<img width="805" height="626" alt="image" src="https://github.com/user-attachments/assets/d799b3f9-4fcd-4818-990c-dc8c2f4eb7ea" />
BLOCK DIAGRAM
Detecting drowsiness using an IR sensor in spectacles with Arduino involves measuring the blink rate of the driver, which can be an indicator of drowsiness. Here is a general procedure for implementing this approach:
1.	Prepare the necessary hardware: You will need an IR sensor, an Arduino nano,buzzer,power bank, a USB cable, and wires to connect the components.
2.	Connect the IR sensor to the Arduino nano: Connect the VCC pin of the IR sensor to the 5V pin of the Arduino nano, the GND pin to the GND pin, and the OUT pin to any digital pin on the Arduino board.
3.	Program the Arduino board: Write a code to measure the blink rate of the driver. This can be done by setting up an interrupt on the digital pin connected to the IR sensor, and counting the number of interrupts triggered in a certain time period.
4.	Assemble the spectacles: Mount the IR sensor on the spectacle frame, near the eye. Make sure the sensor is not obstructing the driver's view.
5.	5.	Test the system: Wear the spectacles and drive a vehicle or simulate driving conditions. Observe the blink rate readings and set a threshold value for determining drowsiness.
6.	Test the system: Wear the spectacles and drive a vehicle or simulate driving conditions. Observe the blink rate readings and set a threshold value for determining drowsiness.
7.	Trigger an alert: If the blink rate exceeds the threshold value, trigger an alert to notify the driver that they are drowsy usin buzzer.

---
## RESULT
<img width="901" height="695" alt="image" src="https://github.com/user-attachments/assets/66a303fc-c4f3-46c1-a405-21feb012904b" />
<img width="913" height="349" alt="image" src="https://github.com/user-attachments/assets/74afe37a-f3b4-44b4-a22d-7519e47a98a9" />

---
## CONCLUSION AND FUTURE SCOPE
CONCLUSION
The use of an IR sensor in spectacles to detect drowsiness is a low-cost and non-intrusive approach. However, it has some limitations. For example, the system may not work well in low-light conditions, as the IR sensor may not be able to detect the eye movements accurately. Additionally, the blink rate may not always be a reliable indicator of drowsiness, as some drivers may have a high blink rate naturally or due to eye strain. Therefore, it is important to combine the blink rate with other physiological or behavioral measures to increase the accuracy of drowsiness detection. Furthermore, the alert triggered by the system must be designed in a way that does not distract the driver and cause safety issues. Overall, the implementation of drowsy detection using an IR sensor in spectacles with Arduino has the potential to enhance driver safety and prevent accidents caused by drowsiness.

FUTURE SCOPE
The model can be improved incrementally by using other parameters like 
blink rate, yawning, state of the car, etc. If all these parameters are used it can improve the accuracy by a lot. 
Same model and techniques can be used for various other uses like 
Netflix and other streaming services can detect when the user is asleep 
and stop the video accordingly. It can also be used in application that 
prevents user from sleeping. It can be made wireless and be used for other purposes like alerting a user while drowsiness detection while studying and working.



---


