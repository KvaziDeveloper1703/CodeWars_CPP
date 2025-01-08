/*
Create a function that takes two parameters: an integer n and a string s. The function should return a new string consisting of the string s repeated exactly n times.

Examples:
Input: 6, "I" → Output: "IIIIII"
Input: 5, "Hello" → Output: "HelloHelloHelloHelloHello"

Напишите функцию, которая принимает два параметра: целое число n и строку s. Функция должна вернуть новую строку, состоящую из строки s, повторённой ровно n раз.

Примеры:
Ввод: 6, "I" → Вывод: "IIIIII"
Ввод: 5, "Hello" → Вывод: "HelloHelloHelloHelloHello"

https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
*/

#include <iostream>
#include <string>

std::string repeat_string(int n, const std::string& s) {
    std::string result;
    for (int i = 0; i < n; ++i) {
        result += s;
    }
    return result;
}

int main() {
    int n1 = 6;
    std::string string_1 = "I";

    int n2 = 5;
    std::string string_2 = "Hello";

    std::cout << "Input: 6, \"I\" → Output: \"" << repeat_string(n1, string_1) << "\"" << std::endl;
    std::cout << "Input: 5, \"Hello\" → Output: \"" << repeat_string(n2, string_2) << "\"" << std::endl;

    return 0;
}