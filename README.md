# c-interactive-menu

A modular and interactive command-line application written in C.  
This project provides a clean menu-driven interface offering several utilities such as math operations, age classification, and weather-based recommendations. It was built as part of a personal roadmap to strengthen C fundamentals, modular programming, and terminal UI design.

---

## 📌 Features

- Clean interactive terminal menu  
- Modular architecture using multiple `.c` / `.h` files  
- Input validation (age ranges, division by zero, etc.)  
- Math operations (+, -, *, /)  
- Age classifier (Young / Adult / Senior)  
- Weather advisor (coat / umbrella logic)  
- Reusable helper utilities (`wait_enter()`)  
- Clean code structure for easy expansion  

## Project structure

c-interactive-menu/
├── main.c             # Main menu and program loop
├── README.md
├── Makefile           # (Optional) Build automation
└── src/
    ├── math.c         # Math tool implementation
    ├── math.h
    ├── age.c          # Age classifier implementation
    ├── age.h
    ├── weather.c      # Weather advice implementation
    ├── weather.h
    ├── helper.c       # Shared helper functions (wait_enter, etc.)
    └── helper.h

## Learning Goals

This project helped me practice:

Building a modular C project separated into multiple source/header files

Using fundamental control flow: if, else if, switch, loops

Designing a structured, menu-driven CLI application

Implementing input validation (numeric ranges, logical constraints)

Organizing programs with reusable helper utilities

Compiling multi-file C programs

Writing clean Git commit messages and managing version control

## Tools Overview

Math Tool

Add two numbers

Subtract two numbers

Multiply two numbers

Divide two numbers (with division-by-zero protection)

Uses double for numerical precision

Age Classifier

Classifies user age into:

Young → under 30

Adult → 30 to 59

Senior → 60 and above

Includes validation for age range (0–120)

Weather Advisor

Simple yes/no tool:

cold = 1/0

rain = 1/0

Rules:

Cold + Rain → Coat + Umbrella

Cold + No rain → Coat

Not cold + Rain → Umbrella

Neither → Nothing required

## Purpose

This project is part of my personal learning roadmap, aiming to:

Demonstrate solid understanding of C

Build professional, modular applications

Practice clean architecture and maintainable code

Develop real-world terminal programs for my portfolio

## License

This project is open-source and free to use under the MIT License.


---

## How to Run

From the project root:

```bash
gcc main.c src/math.c src/age.c src/weather.c src/helper.c -o menu
./menu
---
