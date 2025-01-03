/*
Write a function that checks if a given integer is a perfect square.

Definition:
A number is a perfect square if it is the product of an integer multiplied by itself.

Examples:
Input: 16 → Output: True
Input: 14 → Output: False

Напишите функцию, которая проверяет, является ли заданное целое число идеальным квадратом.

Определение:
Число является идеальным квадратом, если оно является произведением целого числа на само себя.

Примеры:
Ввод: 16 → Вывод: True
Ввод: 14 → Вывод: False

https://www.codewars.com/kata/54c27a33fb7da0db0100040e
*/

#include <iostream>
#include <cmath>

bool is_perfect_square(int number) {
    if (number < 0) {
        return false;
    }

    int sqrt_value = static_cast<int>(std::sqrt(number));
    return sqrt_value * sqrt_value == number;
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