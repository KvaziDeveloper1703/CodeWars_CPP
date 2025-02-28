/*
Write a function that checks if a given integer is a perfect square.
A number is a perfect square if it is the product of an integer multiplied by itself.

Напишите функцию, которая проверяет, является ли заданное целое число идеальным квадратом.
Число является идеальным квадратом, если оно является произведением целого числа на само себя.

https://www.codewars.com/kata/54c27a33fb7da0db0100040e
*/

#include <iostream>
#include <cmath>

bool is_perfect_square(int given_number) {
    if (given_number < 0) {
        return false;
    }

    int sqrt_value = static_cast<int>(std::sqrt(given_number));
    return sqrt_value * sqrt_value == given_number;
}

int main() {
    std::cout << "Enter a number: ";
    int input;
    std::cin >> input;

    if (is_perfect_square(input)) {
        std::cout << input << " is a perfect square." << std::endl;
    } else {
        std::cout << input << " is not a perfect square." << std::endl;
    }

    return 0;
}