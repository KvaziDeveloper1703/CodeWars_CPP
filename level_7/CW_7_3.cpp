/*
Write a function that takes an integer as input, squares each digit of the number, and concatenates the results to form a new number. The function should return the resulting number as an integer.

Напишите функцию, которая принимает целое число, возводит в квадрат каждую его цифру и объединяет результаты в одно новое число. Функция должна возвращать это число в виде целого числа.

https://www.codewars.com/kata/546e2562b03326a88e000020
*/

#include <iostream>
#include <string>

int square_digits(int given_number) {
    std::string result = "";
    std::string number_as_a_string = std::to_string(given_number);

    for (char digit_character : number_as_a_string) {
        int digit = digit_character - '0';
        int squared = digit * digit;
        result += std::to_string(squared);
    }

    return std::stoi(result);
}

int main() {
    int input = 765;

    std::cout << "Input: " << input << " → Output: " << square_digits(input) << std::endl;

    return 0;
}