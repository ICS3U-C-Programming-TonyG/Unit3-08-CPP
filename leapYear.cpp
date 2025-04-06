// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-04-06

// Calculates leap years.

#include <iostream>

int main() {
    int year;
    // User input
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Leap year calculator (nested if)
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << year << " is a leap year." << std::endl;
            } else {
                std::cout << year << " is not a leap year." << std::endl;
            }
        } else {
            std::cout << year << " is a leap year." << std::endl;
        }
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
}
