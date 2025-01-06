/*
Write a function that takes a string as input and returns a new string with all vowels removed.

Rules:
+ Vowels are a, e, i, o, u, y (both uppercase and lowercase).
+ The letter y is not considered a vowel.
+ Return the modified string without vowels.

Example:
Input: "This website is for losers LOL!"
Output: "Ths wbst s fr lsrs LL!"

Напишите функцию, которая принимает строку и возвращает новую строку с удалёнными гласными.

Правила:
+ Гласные: a, e, i, o, u, y (как заглавные, так и строчные).
+ Буква y не считается гласной.
+ Верните модифицированную строку без гласных.

Пример:
Ввод: "This website is for losers LOL!"
Вывод: "Ths wbst s fr lsrs LL!"

https://www.codewars.com/kata/52fba66badcd10859f00097e
*/

#include <iostream>
#include <string>
#include <algorithm>

std::string remove_vowels(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')) {
            result += c;
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