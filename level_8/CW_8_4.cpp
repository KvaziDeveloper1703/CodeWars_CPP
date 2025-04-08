/*
You need to write a function that takes a string as input and returns the string reversed.

Example:
Input: 'world' → Output: 'dlrow'
Input: 'word' → Output: 'drow'

Вам нужно написать функцию, которая принимает строку в качестве входных данных и возвращает эту строку в перевёрнутом виде.

Пример:
Ввод: 'world' → Вывод: 'dlrow'
Ввод: 'word' → Вывод: 'drow'

https://www.codewars.com/kata/5168bb5dfe9a00b126000018
*/

#include <iostream>
#include <string>

std::string reverse_string(const std::string& given_string) {
    std::string reversed;
    for (int i = given_string.size() - 1; i >= 0; --i) {
        reversed += given_string[i];
    }
    return reversed;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    std::cout << "Reversed string: " << reverse_string(input) << std::endl;

    return 0;
}