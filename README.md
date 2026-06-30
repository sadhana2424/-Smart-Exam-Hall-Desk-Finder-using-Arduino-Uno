## 📚 Smart Exam Hall Desk Finder using Arduino Uno

## 📌 Project Overview
The Smart Exam Hall Desk Finder is an Arduino-based embedded system that helps students quickly locate their examination hall and desk number. Students enter their register number using a 4×4 keypad, and the system verifies the data before displaying the assigned hall number and desk number on a 16×2 LCD. A yellow LED indicates a valid register number, while a red LED indicates an invalid entry. A buzzer provides audio feedback for user interaction.

## 🎯 Objectives
Reduce the time students spend searching for their exam hall.
Provide an easy and user-friendly examination assistance system.
Demonstrate embedded system concepts using Arduino.
## 🔧 Components Required
Component               
Arduino Uno,                   	
16×2 LCD Display,              	
4×4 Matrix Keypad,
Yellow LED,                    	
Red LED ,                      	
Active Buzzer,	                  
Breadboard ,                     
Jumper Wires,              	    
USB Cable,	                      
220Ω Resistors (Recommended)	  

## 💻 Software Used
Arduino IDE
Embedded C/C++

## ⚙️ Working Principle
Power ON the Arduino.
LCD displays "Enter Register Number".
Student enters the register number using the keypad.
Press # to search.
If the register number exists:
LCD displays Hall Number.
LCD displays Desk Number.
Yellow LED turns ON.
Buzzer beeps.
If the register number is not found:
LCD displays "Invalid Register Number".
Red LED turns ON.
Buzzer alerts the user.
Press * to clear the input and search again.

## ✨ Features
Fast register number verification,
Hall and desk number display,
Yellow LED indication for valid entries,
Red LED indication for invalid entries,
Audio feedback using buzzer,
Easy to modify the register number database,
User-friendly interface,
Low-cost implementation

## 🚀 Applications
Colleges,
Universities,
Schools,
Examination Centers,
Student Help Desks,
Academic Embedded Projects

## 🌟 Advantages
Saves students' time during examinations.
Reduces confusion in finding exam halls.
Easy to build and maintain.
Affordable hardware.
Can be expanded to support large databases.

## 🔮 Future Enhancements
RFID-based student identification. 
QR Code Scanner integration.
ESP8266 Wi-Fi connectivity.
Web dashboard for online hall lookup.
Firebase/MySQL database integration.
Voice announcement module.
SMS or Email notification.
##  Hardwarre Setup
(<img width="697" height="902" alt="exam2" src="https://github.com/user-attachments/assets/bf0f39b1-8e8c-40d8-ba09-ddf2b61e28dd" />
)

## 📷 Project Output
Startup Screen

SMART EXAM

DESK FINDER

Register Number Input

Enter Reg No

23001

Valid Register Number

Hall : A101

Desk : 01

🟡 Yellow LED ON
🔊 Buzzer Beep


Invalid Register Number

INVALID

REGISTER NO

🔴 Red LED ON
🔊 Buzzer Alert

## Stimulation Output
(<img width="859" height="920" alt="exam1" src="https://github.com/user-attachments/assets/ff59ff5e-91fd-4588-b2f0-00857ef3f44b" />
)
## Demo Video
(https://drive.google.com/file/d/1qBfDXfdNVWLoXM6J_heaND3SPm_-PyEF/view?usp=drivesdk)

## 🛠️ Skills Gained
Arduino Programming
Embedded C/C++
LCD Interfacing
Keypad Interfacing
Hardware Prototyping
Digital Electronics
Embedded Systems Design
Problem Solving

## 👩‍💻 Developed By
Sadhana

Electronics and Communication Engineering (ECE) Student

