/*
Write a function that takes a string as input and returns a new string with all vowels removed.

Example:
Input: "This website is for losers LOL!"
Output: "Ths wbst s fr lsrs LL!"

Напишите функцию, которая принимает строку и возвращает новую строку с удалёнными гласными.

Пример:
Ввод: "This website is for losers LOL!"
Вывод: "Ths wbst s fr lsrs LL!"

https://www.codewars.com/kata/52fba66badcd10859f00097e
*/

#include <iostream>
#include <string>
#include <algorithm>

std::string remove_vowels(const std::string& given_string) {
    std::string result;
    for (char character : given_string) {
        if (!(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'y' ||
              character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || character == 'Y')) {
            result += character;
        }
    }
    return result;
}

int main() {
    std::string input = "This website is for losers LOL!";

    std::string output = remove_vowels(input);
    std::cout << "Input: \"" << input << "\"\n";
    std::cout << "Output: \"" << output << "\"\n";

    return 0;
}