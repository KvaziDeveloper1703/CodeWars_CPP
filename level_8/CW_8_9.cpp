/*
Create a function that takes two parameters: an integer N and a string given_string. The function should return a new string consisting of the string given_string repeated exactly N times.

Напишите функцию, которая принимает два параметра: целое число N и строку given_string. Функция должна вернуть новую строку, состоящую из строки given_string, повторённой ровно N раз.

https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
*/

#include <iostream>
#include <string>

std::string repeat_string(int N, const std::string& given_string) {
    std::string result;
    for (int i = 0; i < N; ++i) {
        result += given_string;
    }
    return result;
}

int main() {
    int n_1 = 6;
    std::string string_1 = "I";

    int n_2 = 5;
    std::string string_2 = "Hello";

    std::cout << "Input: 6, \"I\" → Output: \"" << repeat_string(n_1, string_1) << "\"" << std::endl;
    std::cout << "Input: 5, \"Hello\" → Output: \"" << repeat_string(n_2, string_2) << "\"" << std::endl;

    return 0;
}