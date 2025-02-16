/*
Write a function that checks if a string contains the same number of 'x' and 'o' characters.

Examples:
Input: "ooxx" → Output: true
Input: "xooxx" → Output: false
Input: "ooxXm" → Output: true

Напишите функцию, которая проверяет, содержит ли строка одинаковое количество символов 'x' и 'o'.

Примеры:
Ввод: "ooxx" → Вывод: true
Ввод: "xooxx" → Вывод: false
Ввод: "ooxXm" → Вывод: true

https://www.codewars.com/kata/55908aad6620c066bc00002a
*/

#include <iostream>
#include <string>
#include <cctype>

bool has_equal_x_and_o(const std::string& given_string) {
    int count_x = 0;
    int count_o = 0;

    for (char character : given_string) {
        char lower_character = std::tolower(character);

        if (lower_character == 'x') {
            ++count_x;
        } else if (lower_character == 'o') {
            ++count_o;
        }
    }

    return count_x == count_o;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;

    if (has_equal_x_and_o(input)) {
        std::cout << "The string has an equal number of 'x' and 'o' characters." << std::endl;
    } else {
        std::cout << "The string does not have an equal number of 'x' and 'o' characters." << std::endl;
    }

    return 0;
}