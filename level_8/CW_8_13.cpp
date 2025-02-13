/*
Write a function that removes all spaces from a given string and returns the resulting string.

Напишите функцию, которая удаляет все пробелы из переданной строки и возвращает полученный результат.

https://www.codewars.com/kata/57eae20f5500ad98e50002c5
*/

#include <iostream>
#include <string>

std::string removeSpaces(const std::string& given_string) {
    std::string result;
    for (char character : given_string) {
        if (character != ' ') {
            result += character;
        }
    }
    return result;
}

int main() {
    std::string input = "8 j 8   mBliB8g  imjB8B8  jl  B";
    std::cout << "Result: " << removeSpaces(input) << std::endl;

    return 0;
}