/*
An isogram is a word with no repeating letters, whether consecutive or non-consecutive. Write a function to check if a given string is an isogram.

Rules:
+ The input string will contain only letters.
+ The function should ignore case (treat uppercase and lowercase letters as the same).
+ An empty string is considered an isogram.

Examples:
Input: "Dermatoglyphics" → Output: true
Input: "aba" → Output: false
Input: "moOse" → Output: false (because o repeats, case is ignored)

Изограмма — это слово, в котором нет повторяющихся букв, ни подряд, ни вразброс. Напишите функцию, которая проверяет, является ли заданная строка изограммой.

Правила:
+ Входная строка содержит только буквы.
+ Функция должна игнорировать регистр (буквы в верхнем и нижнем регистре считаются одинаковыми).
+ Пустая строка считается изограммой.

Примеры:
Ввод: "Dermatoglyphics" → Вывод: true
Ввод: "aba" → Вывод: false
Ввод: "moOse" → Вывод: false (потому что o повторяется, регистр игнорируется)

https://www.codewars.com/kata/54ba84be607a92aa900000f1
*/

#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

bool is_isogram(const std::string& input) {
    
    std::unordered_set<char> seen_letters;

    for (char c : input) {
        char lowercase_char = std::tolower(c);
        if (seen_letters.find(lowercase_char) != seen_letters.end()) {
            return false;
        }

        seen_letters.insert(lowercase_char);
    }

    return true;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;

    if (is_isogram(input)) {
        std::cout << input << " is an isogram." << std::endl;
    } else {
        std::cout << input << " is not an isogram." << std::endl;
    }

    return 0;
}