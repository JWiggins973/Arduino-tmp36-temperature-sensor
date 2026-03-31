# 🌡️ Arduino TMP36 Temperature Sensor

> Real-time temperature monitoring built in C++ for an Arduino Uno — 
> simulated in Tinkercad with live serial output and threshold alerting.

## 🚀 What It Does
- Reads analog sensor data from pin A0 on the Arduino Uno
- Converts raw ADC values (0-1023) to voltage, then to Celsius and Fahrenheit
- Streams live temperature readings to the Serial Monitor every second
- Triggers a **WARNING** alert when temperature exceeds 35°C

## ⚙️ How It Works
The TMP36 outputs a voltage proportional to temperature.
The Arduino reads that voltage via `analogRead()`, converts it using the 
TMP36 datasheet formula, and prints real-time readings to Serial Monitor.

## 🛠️ Built With
- **Language:** C++
- **Hardware:** Arduino Uno R3 + TMP36 Temperature Sensor
- **Simulator:** Tinkercad Circuits

## 🔴 Live Simulation
👉 [Click here to view and run the live circuit](https://www.tinkercad.com/things/biehiI6Urgw-dazzling-luulia/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=R8Ma2buNrudY46fk-G-LpWDu1dejCb7gZYEAq0UjGpc)

## 👨🏿‍💻 Author
Jermaine Wiggins 
