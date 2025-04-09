/*
An isogram is a word with no repeating letters.
Write a function to check if a given string is an isogram.

Изограмма — это слово, в котором нет повторяющихся букв.
Напишите функцию, которая проверяет, является ли заданная строка изограммой.

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