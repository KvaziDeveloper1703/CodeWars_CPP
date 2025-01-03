/*
Write a function that takes an integer as input, squares each digit of the number, and concatenates the results to form a new number. The function should return the resulting number as an integer.

Examples:
Input: 9119 → Output: 811181
Input: 765 → Output: 493625

Напишите функцию, которая принимает целое число, возводит в квадрат каждую его цифру и объединяет результаты в одно новое число. Функция должна возвращать это число в виде целого числа.

Примеры:
Ввод: 9119 → Вывод: 811181
Ввод: 765 → Вывод: 493625

https://www.codewars.com/kata/546e2562b03326a88e000020
*/

#include <iostream>
#include <string>

int square_digits(int num) {
    std::string result = "";
    std::string numStr = std::to_string(num);

    for (char digit_char : numStr) {
        int digit = digit_char - '0';
        int squared = digit * digit;
        result += std::to_string(squared);
    }

    return std::stoi(result);
}

int main() {
    int input1 = 9119;
    int input2 = 765;

    std::cout << "Input: " << input1 << " → Output: " << square_digits(input1) << std::endl;
    std::cout << "Input: " << input2 << " → Output: " << square_digits(input2) << std::endl;

    return 0;
}