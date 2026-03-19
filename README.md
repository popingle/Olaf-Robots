# Olaf Robotics

<p align="center">
  <a href="https://x.com/OlafRobotics"><img src="https://img.shields.io/twitter/follow/OlafRobotics?style=social" alt="X Follow"></a>
  <br>
  <code>CA: 8VQBFtkZykbxnAcVzT8jgs7KLcgF5LdByMdna3Dhpump</code>
</p>

<p align="center">
  <img src="docs/logo.png" width="200" alt="Olaf Robotics Logo">
</p>

**Olaf Robotics** is an open-source project dedicated to bringing an animated character to life in the physical world. Our goal is to provide a compact, scale-accurate, and highly expressive robotic platform based on the Olaf character, as detailed in the research paper *"Olaf: Bringing an Animated Character to Life in the Physical World"*.

![Olaf Robotics Banner](docs/banner.png)

---

## 🌐 Multilingual Documentation / 文档 / Dokumentasi

- [English](#overview)
- [Bahasa Indonesia](#ringkasan)
- [中文 (Chinese)](#项目概述)

---

## Overview

Olaf Robotics is a miniaturized, self-walking robotic character designed for agility and believability. This repository contains the mechatronic design (3D printable parts), high-fidelity simulation environments, and reinforcement learning-based control software.

### 🏗️ Technical Architecture

Our architecture is built on a modular three-layer stack to ensure seamless sim-to-real transition and expressive motion:

![Technical Architecture](docs/architecture.png)

### 🧠 Split-Brain Architecture Flow
Our dual-processor system separates locomotion from expression to ensure high-frequency motor control and rich social interaction:

![Split-Brain Architecture](docs/split_brain_flow.png)

1.  **Mechatronic Design**:
    *   Novel asymmetric **six-degrees-of-freedom (6-DoF)** leg mechanism.
    *   Remotely actuated spherical, planar, and spatial linkages for arms, mouth, and eyes.
    *   Compact design fully hidden beneath a soft foam costume.
2.  **Control Layer (RL & Thermal-aware)**:
    *   **Reinforcement Learning (RL)** policies guided by animation references for lifelike motion.
    *   **Thermal-aware policy** that incorporates actuator temperature to prevent overheating in the slim neck.
    *   Impact noise reduction rewards for quieter, more believable movement.
3.  **Simulation Layer (MuJoCo)**:
    *   High-fidelity physics simulation using **MuJoCo**.
    *   Domain randomization for robust sim-to-real transfer.

### 🛠️ Advanced Features

*   **Polyglot Core Engine**: High-performance components implemented in **C++17**, **C**, and **Rust** for real-time control, low-level communication, and sensor processing.
*   **CI/CD Pipeline**: Automated build and test workflows using GitHub Actions to ensure code stability across multiple languages.
*   **Multilingual Support**: Comprehensive documentation in English, Indonesian, and Chinese.
*   **Modular Design**: Decoupled simulation and hardware layers for rapid prototyping.

---

## Ringkasan

Olaf Robotics adalah proyek robotika open-source yang bertujuan untuk menghidupkan karakter animasi di dunia nyata. Robot ini dirancang dengan fokus pada ekspresi, kelincahan, dan kemiripan dengan karakter aslinya, berdasarkan penelitian *"Olaf: Bringing an Animated Character to Life in the Physical World"*.

### 🏗️ Arsitektur Teknis

Arsitektur kami dibangun di atas tumpukan tiga lapis modular untuk memastikan transisi sim-to-real yang mulus:

1.  **Desain Mekatronik**: Mekanisme kaki 6-DoF asimetris yang inovatif dan linkage untuk lengan, mulut, dan mata.
2.  **Lapisan Kontrol**: Kebijakan Reinforcement Learning (RL) yang dipandu oleh referensi animasi dan kebijakan sadar termal untuk mencegah overheating.
3.  **Lapisan Simulasi**: Simulasi fisika fidelitas tinggi menggunakan MuJoCo.

---

## 项目概述

Olaf Robotics 是一个开源机器人项目，旨在将动画角色带入现实世界。该机器人专注于表现力、灵活性和与原角色的比例一致性，基于研究论文 *"Olaf: Bringing an Animated Character to Life in the Physical World"*。

### 🏗️ 技术架构

我们的架构基于模块化的三层堆栈构建，以确保无缝的仿真到现实（sim-to-real）转换：

1.  **机电设计**：创新的非对称六自由度 (6-DoF) 腿部机构，以及用于手臂、嘴巴和眼睛的远程驱动连杆。
2.  **控制层**：由动画参考引导的强化学习 (RL) 策略，以及包含执行器温度输入的散热感知策略。
3.  **仿真层**：使用 MuJoCo 进行高保真物理仿真。

---

## Getting Started

### Hardware Assembly
Detailed assembly instructions can be found in the [Assembly Guide](docs/assembly_guide.md).

#### 📋 Bill of Materials (BOM)
The total cost for the Olaf Robot hardware is designed to be accessible. Below is the visual breakdown:

![Olaf Robotics BOM Mind Map](docs/bom_mindmap.png)

### Software Installation
To install the core library and dependencies:
```bash
pip install -e .
```

### Simulation
We use MuJoCo for simulation. You can find the robot descriptions and simulation scripts in the `olaf_robot/robots` and `experiments` directories.

## Project Structure
- `print/`: STL files and 3D printing modifications.
- `olaf_robot/`: Core Python package and robot descriptions.
- `docs/`: Documentation and wiring diagrams.
- `experiments/`: Research scripts for RL, motion planning, and real-robot tests.
- `src/`: Polyglot core engine (C++, C, Rust).
- `scripts/`: Automation and deployment scripts.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---
*Bringing an animated character to life in the physical world.*
