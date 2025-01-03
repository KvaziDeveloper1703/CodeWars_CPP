/*
Write a function that checks if a string contains the same number of 'x' and 'o' characters.

Rules:
+ The function should return a boolean value (true or false).
+ The check must be case-insensitive ('X' and 'x' are considered the same, as well as 'O' and 'o').
+ The string may contain any characters, and if no 'x' or 'o' are present, the function should return true.

Examples:
Input: "ooxx" → Output: true
Input: "xooxx" → Output: false
Input: "ooxXm" → Output: true
Input: "zpzpzpp" → Output: true (no 'x' or 'o')
Input: "zzoo" → Output: false

Напишите функцию, которая проверяет, содержит ли строка одинаковое количество символов 'x' и 'o'.

Правила:
+ Функция должна возвращать логическое значение (true или false).
+ Проверка должна быть нечувствительной к регистру (буквы 'X' и 'x' считаются одинаковыми, как и 'O' и 'o').
+ Строка может содержать любые символы, и если в ней нет 'x' и 'o', функция должна возвращать true.

Примеры:
Ввод: "ooxx" → Вывод: true
Ввод: "xooxx" → Вывод: false
Ввод: "ooxXm" → Вывод: true
Ввод: "zpzpzpp" → Вывод: true (нет 'x' и 'o')
Ввод: "zzoo" → Вывод: false

https://www.codewars.com/kata/55908aad6620c066bc00002a
*/

#include <iostream>
#include <string>
#include <cctype>

bool has_equal_x_and_o(const std::string& input) {
    int count_x = 0;
    int count_o = 0;

    for (char c : input) {
        char lower_char = std::tolower(c);

        if (lower_char == 'x') {
            ++count_x;
        } else if (lower_char == 'o') {
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