# 🚦 Arduino-Based Traffic Signal Control System with Emergency Override
This project is an embedded system-based traffic signal controller developed using Arduino UNO. It simulates real-world traffic light operations with an additional emergency override feature activated using a push button. The system ensures smooth traffic flow and demonstrates real-time embedded control logic.
## 🎯 Objectives
- To design a traffic signal control system using Arduino
- To implement sequential traffic light operation
- To introduce an emergency override mechanism using a push button
- To understand embedded systems programming and control logic
## ⚙️ System Features
- Automated traffic light sequence (Green → Yellow → Red)
- Push button-based emergency mode activation
- 10-second emergency red signal override
- Automatic return to normal traffic cycle
- Real-time embedded system behavior
## 🧠 Working Principle
### 🟢 Normal Mode:
- Green LED ON → Vehicles move
- Yellow LED ON → Warning
- Red LED ON → Stop
- Cycle repeats continuously
### 🔴 Emergency Mode:
- Activated using push button
- Red LED turns ON for 10 seconds
- Overrides normal traffic cycle
- System automatically returns to normal mode after timeout
## 🛠️ Components Used
- Arduino UNO
- Red LED
- Yellow LED
- Green LED
- Push Button
- Resistors (220Ω)
- Breadboard
- Connecting Wires
## 💻 Software Used
- Arduino IDE
- Embedded C Programming
## 🔌 Circuit Description
- LEDs connected to Arduino digital output pins
- Push button connected to digital input pin with internal pull-up resistor
- Common ground used for all components
## 📜 Algorithm
1. Initialize LED pins and push button
2. Start normal traffic cycle
3. Continuously monitor push button input
4. If button pressed:
   - Activate emergency mode
   - Turn ON red LED for 10 seconds
5. After 10 seconds:
   - Return to normal cycle
6. Repeat process
## 💡 Code Structure
- `setup()` → Initializes pins
- `loop()` → Controls traffic sequence
- Conditional logic → Handles emergency override
- Timing logic → Uses delay/millis functions
## 📊 Applications
- Traffic management systems
- Smart city simulations
- Embedded systems learning projects
- Automation control systems
## 🚀 Advantages
- Simple and low cost
- Real-time control system
- Easy to implement and understand
- Good for learning embedded systems
## ⚠️ Limitations
- No sensor-based traffic detection
- Fixed timing system
- No IoT connectivity
## 🔮 Future Scope
- IoT-based smart traffic control
- AI-based traffic density detection
- Sensor-based adaptive signal system
- Cloud monitoring system
## 📷 Project Output
(Add circuit image / simulation screenshot here)
## 👩‍💻 Author
**Name:** Reshma Gottapu  
**Branch:** Electrical & Electronics Engineering  
**Domain:** Embedded Systems & IoT  

---

## 🔗 License
This project is for educational purposes only.
