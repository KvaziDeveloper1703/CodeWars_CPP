/*
An isogram is a word with no repeating letters, whether consecutive or non-consecutive. Write a function to check if a given string is an isogram.

Rules:
+ The input string will contain only letters.
+ The function should ignore case.
+ An empty string is considered an isogram.

Examples:
Input: "Dermatoglyphics" → Output: true
Input: "aba" → Output: false

Изограмма — это слово, в котором нет повторяющихся букв, ни подряд, ни вразброс. Напишите функцию, которая проверяет, является ли заданная строка изограммой.

Правила:
+ Входная строка содержит только буквы.
+ Функция должна игнорировать регистр.
+ Пустая строка считается изограммой.

Примеры:
Ввод: "Dermatoglyphics" → Вывод: true
Ввод: "aba" → Вывод: false

https://www.codewars.com/kata/54ba84be607a92aa900000f1
*/

#include <iostream>
#include <string>

bool is_isogram(const std::string& given_string) {
    bool seen[26] = {false};
    for (char character : given_string) {
        if (character >= 'A' && character <= 'Z') character += 32;
        if (character >= 'a' && character <= 'z') {
            if (seen[character - 'a']) return false;
            seen[character - 'a'] = true;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << input << (is_isogram(input) ? " is an isogram." : " is not an isogram.") << std::endl;
    return 0;
}