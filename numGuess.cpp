// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: March 18, 2025
// In this code the user will guess the number

#include <iostream>

int main() {
    // This function check if the user chose the right number
    const int CORRECT_GUESS = 87;
    int userGuess;

    // Enter the user's guess
    std::cout << "Enter a guess between 15 and 107: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // Check if the user's guess is correct
    if (userGuess == CORRECT_GUESS) {
        std::cout << "Thats the correct number!";
    }

    // Check if the user's guess is incorrect
    if (userGuess != CORRECT_GUESS) {
        std::cout << "Thats the incorrect number!";
    }
}
