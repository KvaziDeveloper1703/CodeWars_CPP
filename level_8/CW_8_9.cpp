/*
Write a function that takes two parameters: an integer N and a string given_string. The function should return a new string consisting of the string given_string repeated exactly N times.

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
    int N = 5;
    std::string string = "Hello";

    std::cout << "Input: 5, \"Hello\" → Output: \"" << repeat_string(N, string) << "\"" << std::endl;

    return 0;
}