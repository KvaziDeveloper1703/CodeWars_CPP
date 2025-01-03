/*
Write a function that converts a given integer into a string.

Example:
Input: 123 → Output: "123"
Input: 0 → Output: "0"

Напишите функцию, которая преобразует заданное целое число в строку.

Пример:
Ввод: 123 → Вывод: "123"
Ввод: 0 → Вывод: "0"

https://www.codewars.com/kata/5265326f5fda8eb1160004c8
 */

#include <iostream>
#include <string>

std::string number_to_string(int number) {
    return std::to_string(number);
}

int main() {
    int input;

    std::cout << "Enter an integer: ";
    std::cin >> input;

    std::cout << "The number as a string is: " << number_to_string(input) << std::endl;

    return 0;
}
