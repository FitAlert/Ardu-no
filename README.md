# 📡 Proximidade com Sensor Ultrassônico HC-SR04

Este projeto utiliza o sensor ultrassônico **HC-SR04** para detectar a presença de pessoas. O objetivo é monitorar o fluxo de visitantes em provadores de roupa

---

## 🔧 Materiais necessários para rodar o código

- 1 Arduino 
- 1x Sensor Ultrassônico HC-SR04
- Jumpers
- Protoboard 

---

## 📌 Ligações do Sensor

| Pino do HC-SR04 | Pino no Arduino |
|------------------|------------------|
| VCC              | 5V               |
| GND              | GND              |
| Trig             | 12               |
| Echo             | 13               |

---

## 🧠 Como Funciona


- Se a distância for menor que **1,5 metros**, o sistema retorna `1` via **Serial Monitor**.
- Caso contrário, retorna `0`.

---
