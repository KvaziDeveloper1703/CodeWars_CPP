/*
Write a function that takes a string of one or more words as input and returns the same string, but with all words that have five or more letters reversed.

Rules:
+ The input string will contain only letters and spaces.
+ Words are separated by single spaces.
+ Reverse only words that have five or more letters. Leave shorter words unchanged.

Examples:
Input: "Hey fellow warriors"
Output: "Hey wollef sroirraw"
Input: "This is a test"
Output: "This is a test"
Input: "This is another test"
Output: "This is rehtona test"

Напишите функцию, которая принимает строку, состоящую из одного или нескольких слов, и возвращает ту же строку, но с перевёрнутыми словами, которые содержат пять или более букв.

Правила:
+ Входная строка будет содержать только буквы и пробелы.
+ Слова разделены одним пробелом.
+ Переворачивайте только те слова, которые содержат пять или более букв. Остальные слова остаются без изменений.

Примеры:
Ввод: "Hey fellow warriors"
Вывод: "Hey wollef sroirraw"
Ввод: "This is a test"
Вывод: "This is a test"
Ввод: "This is another test"
Вывод: "This is rehtona test"

https://www.codewars.com/kata/5264d2b162488dc400000001
*/

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string reverse_words(const std::string& input) {

    std::istringstream stream(input);
    std::ostringstream result;
    std::string word;

    while (stream >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result << word << " ";
    }

    std::string output = result.str();
    if (!output.empty() && output.back() == ' ') {
        output.pop_back();
    }

    return output;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "Modified string: " << reverse_words(input) << std::endl;

    return 0;
}