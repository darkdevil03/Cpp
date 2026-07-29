# Modern C++ Learning Journey 🚀

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Build System](https://img.shields.io/badge/Build-CMake-green.svg)](https://cmake.org/)
[![Status](https://img.shields.io/badge/Status-In--Progress-yellow.svg)](#repository-roadmap-)

Welcome to the **Modern C++ Repository**! This project serves as a structured, hands-on guide to mastering C++—ranging from foundational syntax and core memory concepts to advanced data structures and Object-Oriented Programming (OOP).

> ⚠️ **Project Status: Work in Progress (WIP)**  
> This repository is actively being updated with new examples, optimizations, and detailed explanations for each core topic.

---

## 📁 Repository Structure

### The project is organized into modular chapters, making it easy to navigate through specific concepts:

```text
├── chapter01_basics-of-cpp/      # Fundamental concepts, variables, pointers & memory
├── chapter02_functions-cpp/       # Function signatures, references, lambdas, & optimizations
├── chapter03_data-structure-cpp/  # Custom implementation & usage of standard data structures
├── chapter04_class-object-cpp/    # Object-Oriented Programming (Classes, Objects, Inheritance)
├── CMakeLists.txt                 # Unified build configuration across modules
└── helloWorld.cpp                 # Initial project setup and namespace demonstrations



```

---

# 📚 Topics Covered
### 🟢 Chapter 01: Basics of C++
- Syntax fundamentals and output formatting
- Pointers vs. References (differences, reassignments, memory allocation)
- Scope, type inference (auto), and basic I/O

### 🟡 Chapter 02: Functions in C++
- Pass-by-value vs. Pass-by-reference vs. Pass-by-pointer
- Modern C++ Lambda Expressions and captures
- Function overloading and inline functions

### 🔵 Chapter 03: Data Structures
- Sequence and associative containers
- Pointer-based custom data structures
- Memory management and efficiency considerations

### 🔴 Chapter 04: Class & Objects (OOP)
- Class syntax, access modifiers (public, private, protected)
- Constructors, destructors, and member initialization lists
- Encapsulation, inheritance, and polymorphism

---

## 🗺️ Repository Roadmap & Progress
    [x] Setup & Tooling: CMake integration and environment configuration
    
    [x] Core Fundamentals: Basic syntax, namespaces, and pointers
    
    [x] Functions: Parameter passing and modern lambda expressions
    
    [x] Data Structures: Basic structures and naming conventions
    
    [x] OOP Essentials: Basic class and object creation
    
    [/] Advanced Modern Features: Move semantics, smart pointers, templates (In Progress)

    [ ] Standard Template Library (STL): Algorithms, iterators, and custom containers (Planned)

## ⚙️ Building & Running
This project uses CMake for seamless multi-platform building.

### Prerequisites
- C++17 or higher compatible compiler (g++, clang++, or MSVC)
- CMake (v3.10+)

### Steps to Build
1. **Clone the repository:**
    ```Bash
        git clone https://github.com/darkdevil03/Cpp.git
        cd Cpp

2. **Configure and Build with CMake:**
    ```Bash 
      mkdir build && cd build
      cmake ..
      make

3. **Run executable:**
   ```Bash
   ./helloWorld

## 📜 License
 This repository is created for educational and self-learning purposes.