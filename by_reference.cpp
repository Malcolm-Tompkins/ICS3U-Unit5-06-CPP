// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on June 2, 2021
// Rounds off decimal numbers

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void round_off_decimal(double &final_digit, double &number, int decimals) {
    final_digit = pow(10, decimals) * number + 0.5;
}


main() {
    std::string user_input;
    int user_decimals;
    double final_number, user_number;
    std::cout << "Enter your decimal number to be rounded: ";
    std::cin >> user_number;
    std::cout << "Round how many decimals: ";
    std::cin >> user_input;
    try {
        user_decimals = std::stoi(user_input);
        round_off_decimal(final_number, user_number, user_decimals);
        std::cout << final_number;
    } catch (std::invalid_argument) {
            std::cout << user_input << " is not a positive number";
    }
    std::cout << "\nDone.";
    }
