# Biomimetic Underwater Vehicle (B.U.V.)

A compact, low-cost robotic fish that mimics biological swimming using servo-actuated fins, modular architecture, and waterproof design. Developed as a lab prototype to explore underwater robotics and biomimicry.

<img width="1025" height="604" alt="image" src="https://github.com/user-attachments/assets/bd1abdc7-0703-4d56-bff3-e757e915e5e7" />
<img width="665" height="417" alt="image" src="https://github.com/user-attachments/assets/db59e97b-8e6f-440c-a0d8-39a9605e4ea3" />
<img width="649" height="761" alt="image" src="https://github.com/user-attachments/assets/c51ed1dc-028e-44b7-a259-8817c45a58d5" />
<img width="671" height="818" alt="image" src="https://github.com/user-attachments/assets/30266385-62cd-432b-8702-751c00d66af5" />

## 🚀 Overview

The **Biomimetic Underwater Vehicle (B.U.V.)** is a servo-actuated underwater robot inspired by fish locomotion. It demonstrates fish-like swimming using oscillatory tail motion and flapping pectoral fins, powered by compact, open-source electronics. The robot is designed to be modular, waterproof, and buoyant—ideal for exploring underwater robotics with minimal resources.

## 🧠 Features

- Servo-actuated **pectoral** and **caudal fins** for biomimetic motion
- **Modular 3D-printed body** using PLA+
- **Onboard LiDAR** (VL53L0X) for obstacle detection
- Waterproofed chambers and silicone-sealed joints
- Depth control using a piston-based **buoyancy chamber**
- Controlled by a compact **Seeed Studio XIAO ESP32-Sense**
- Powered by **LiFePO4 batteries** with regulated 5V output

## 📐 CAD and Design

Designed in **OnShape**, the robot features three primary segments:
- **Head**: ESP32 microcontroller, camera, and LiDAR sensor
- **Mid-section**: SG92R servos for pectoral fin control
- **Tail**: MG90S servo for caudal fin oscillation

## 🧰 Electronics & Components

| Component                  | Purpose                               |
|---------------------------|----------------------------------------|
| Seeed Studio XIAO ESP32   | Microcontroller with Wi-Fi + Camera    |
| VL53L0X                   | Obstacle detection via LiDAR           |
| SG92R Servos ×2           | Actuate pectoral fins                  |
| MG90S Servo               | Oscillate tail fin                     |
| N20 DC Motor              | Operate buoyancy piston chamber        |
| LiFePO4 Batteries (3.2V)  | Power supply (2 in parallel)           |
| TPS61023 Boost Converter  | Regulate voltage to 5V                 |

## 🔧 Assembly Steps

1. 3D-print modular segments of the fish body.
2. Mount servos with foam padding and adhesive.
3. Install ESP32 and LiDAR in the head module.
4. Route internal wiring and secure battery pack.
5. Mount tail fin and MG90S servo at the rear.
6. Waterproof using silicone sealant at body joints.
7. Test all electronics and finalize seal.

## ⚡ Wiring Summary

- **PWM Pins** → Servos
- **I2C** → VL53L0X
- **Boost Converter** → Stabilize power to 5V
- **Common Ground** → Ensures stable operation


## 📌 Objectives

- ✔️ Mimic fish-like swimming with fins and tail
- ✔️ Ensure underwater operation with waterproofing
- ✔️ Use low-cost, off-the-shelf components
- ✔️ Achieve modular and compact robot body
- ✔️ Provide a testbed for underwater robotic research

## ❗ Limitations & Future Work

- Static waterproofing (not suitable for deep water)
- No closed-loop control or IMU feedback
- Basic sensing (only LiDAR for obstacle avoidance)

### 🔮 Planned Improvements
- IMU & pressure sensors for feedback control
- AI-based schooling or path planning
- Swappable fins for species-inspired propulsion
- Environmental sensors (e.g., pH, turbidity, temperature)

## 🧠 Inspiration & References

- [Zhang et al. – Soft Robotic Fish for High-Speed Swimming (2021)]  
- [MIT SciRobotics aar3449 Report – Modular Soft-bodied Design]  
- Seeed Studio XIAO ESP32-Sense Docs  
- VL53L0X ToF Sensor Datasheet  
- Servo motor technical specs: SG92R, MG90S


---

## 🤝 Contributors

- **Kumar Utkarsh**
- **Vaibhav Bansal**


---


