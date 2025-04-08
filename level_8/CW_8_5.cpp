/*
Write a function that converts a given integer into a string.

Напишите функцию, которая преобразует заданное целое число в строку.

https://www.codewars.com/kata/5265326f5fda8eb1160004c8
*/

#include <iostream>
#include <string>

std::string number_to_string(int given_number) {
    return std::to_string(given_number);
}

int main() {
    int input;

    std::cout << "Enter an integer: ";
    std::cin >> input;

    std::cout << "The number as a string is: " << number_to_string(input) << std::endl;

    return 0;
}