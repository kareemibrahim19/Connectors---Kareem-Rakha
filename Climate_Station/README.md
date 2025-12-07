# 🌤️ Climate Station – Arduino + OLED + DHT11

This project is a simple climate-monitoring station built using **Arduino**,  
an **SSD1306 OLED display**, and a **DHT11 temperature & humidity sensor**.  
The station displays real-time temperature & humidity readings along with  
custom icons on a 128x64 OLED screen.

---

## 📦 Features
- Reads **temperature** (°C) and **humidity (%)** from DHT11  
- Displays data on a **128×64 SSD1306 OLED screen**  
- Custom weather icons drawn using `drawBitmap()`  
- Designed for beginners learning **embedded systems**, **sensors**, and **graphics UI**

---

## 🛠️ Components Used
| Component | Quantity | Notes |
|----------|----------|-------|
| Arduino UNO | 1 |  |
| Breadboard | 1 |  |
| SSD1306 OLED (I2C) | 1 | Address: `0x3C` |
| DHT11 Sensor | 1 | 3-pin or module version |
| Jumper wires | several | M-M |

---

## 🔌 Wiring

### **OLED (SSD1306 – I2C)**  
| OLED Pin | Arduino |
|----------|---------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### **DHT11**
| DHT11 Pin | Arduino |
|-----------|----------|
| VCC | 5V |
| DATA | D2 |
| GND | GND |

---

## 📚 Used Libraries

- **Adafruit SSD1306**
- **Adafruit GFX**
- **DHT sensor library**
