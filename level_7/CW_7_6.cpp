/*
Write a function that takes a non-empty string as input and returns its middle character(s).

Rules:
+ If the string has an odd length, return the single middle character.
+ If the string has an even length, return the two middle characters.

Examples:
Input: "test" → Output: "es"
Input: "testing" → Output: "t"
Input: "middle" → Output: "dd"
Input: "A" → Output: "A"

Напишите функцию, которая принимает непустую строку и возвращает её средний символ или символы.

Правила:
+ Если длина строки нечётная, вернуть один средний символ.
+ Если длина строки чётная, вернуть два средних символа.

Примеры:
Ввод: "test" → Вывод: "es"
Ввод: "testing" → Вывод: "t"
Ввод: "middle" → Вывод: "dd"
Ввод: "A" → Вывод: "A"

https://www.codewars.com/kata/56747fd5cb988479af000028
*/

#include <iostream>
#include <string>

std::string get_middle(const std::string& input) {
    size_t length = input.length();
    
    if (length % 2 == 0) {
        return input.substr(length / 2 - 1, 2);
    } else {
        return input.substr(length / 2, 1);
    }
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;

    std::cout << "Middle character(s): " << get_middle(input) << std::endl;

    return 0;
}