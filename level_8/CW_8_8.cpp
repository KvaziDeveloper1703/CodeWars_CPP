/*
Write a function that takes a string as input and returns the string with its first and last characters removed.

Rules:
The input string will always have at least two characters, so you don't need to handle shorter strings.

Example:
Input: "hello" → Output: "ell"
Input: "abc" → Output: "b"

Напишите функцию, которая принимает строку и возвращает эту строку без первого и последнего символов.

Правила:
Длина входной строки всегда будет не менее двух символов, поэтому обработка более коротких строк не требуется.

Пример:
Ввод: "hello" → Вывод: "ell"
Ввод: "abc" → Вывод: "b"

https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
*/

#include <iostream>
#include <string>

std::string remove_first_and_last(const std::string& input) {
    size_t start_index = 1;
    size_t new_length = input.size() - 2;
    std::string result = input.substr(start_index, new_length);

    return result;
}

int main() {
    std::string input1 = "hello";
    std::string input2 = "abc";

    std::cout << "Input: \"hello\" → Output: \"" << remove_first_and_last(input1) << "\"" << std::endl;
    std::cout << "Input: \"abc\" → Output: \"" << remove_first_and_last(input2) << "\"" << std::endl;

    return 0;
}