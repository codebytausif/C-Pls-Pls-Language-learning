# C++ Basics Learning Guide

This repository is designed for beginners to learn the fundamentals of **C++ programming**. It covers essential topics including variables, data types, control structures, functions, objects, pointers, and more.

## Table of Contents

1. [Introduction](#introduction)
2. [Variables and Data Types](#variables-and-data-types)
3. [Operators](#operators)
4. [Control Structures](#control-structures)
5. [Functions](#functions)
6. [Arrays and Strings](#arrays-and-strings)
7. [Pointers](#pointers)
8. [Classes and Objects](#classes-and-objects)
9. [References](#references)
10. [File I/O](#file-io)
11. [Conclusion](#conclusion)

---

## Introduction

C++ is a general-purpose programming language widely used for system/software development and game programming. This guide helps you understand the basics and build a strong foundation.

## Variables and Data Types

* **Variables** store data in memory.
* **Data Types:** int, float, double, char, bool, string.
* Example:

```cpp
int age = 25;
double price = 19.99;
char grade = 'A';
bool isActive = true;
```

## Operators

* Arithmetic: `+ - * / %`
* Assignment: `= += -= *= /=`
* Comparison: `== != > < >= <=`
* Logical: `&& || !`

## Control Structures

* **Conditional statements:** if, else if, else, switch

```cpp
if(age >= 18) {
    cout << "Adult";
} else {
    cout << "Minor";
}
```

* **Loops:** for, while, do-while

```cpp
for(int i = 0; i < 5; i++) {
    cout << i << endl;
}
```

## Functions

* Encapsulate reusable code.

```cpp
int add(int a, int b) {
    return a + b;
}
```

* Functions can return values or be `void`.

## Arrays and Strings

* **Array:** fixed-size collection of elements.

```cpp
int numbers[5] = {1, 2, 3, 4, 5};
```

* **String:** sequence of characters.

```cpp
string name = "John";
```

## Pointers

* Store memory addresses.

```cpp
int x = 10;
int* ptr = &x;
cout << *ptr; // Outputs 10
```

* Important for dynamic memory management.

## Classes and Objects

* **Class:** blueprint for objects.
* **Object:** instance of a class.

```cpp
class Car {
public:
    string brand;
    void honk() {
        cout << "Beep!" << endl;
    }
};

Car myCar;
myCar.brand = "Toyota";
myCar.honk();
```

## References

* Variables that act as aliases for another variable.

```cpp
int a = 5;
int &ref = a;
ref = 10; // a is now 10
```

## File I/O

* Reading and writing files using `fstream`.

```cpp
#include <fstream>
ofstream outFile("example.txt");
outFile << "Hello World";
outFile.close();
```

## Conclusion

By learning these basic concepts, you will have a solid foundation to move on to **advanced topics** such as templates, STL, inheritance, polymorphism, and multithreading.

---

Happy Coding! 🚀


