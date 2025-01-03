/*
The goal of this exercise is to convert a string to a new string where each character in the new string is ( if that character appears only once in the original string, or ) if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

Examples:
Input: "din"
Output: "((("

Input: "recede"
Output: "()()()"

Input: "Success"
Output: ")())())"

Input: "(( @"
Output: "))(("

Цель этого упражнения — преобразовать строку в новую строку, где каждый символ в новой строке будет (, если этот символ встречается только один раз в исходной строке, или ), если этот символ встречается более одного раза. При определении, является ли символ дубликатом, регистр не учитывается.

Примеры:
Вход: "din"
Выход: "((("

Вход: "recede"
Выход: "()()()"

Вход: "Success"
Выход: ")())())"

Вход: "(( @"
Выход: "))(("

https://www.codewars.com/kata/54b42f9314d9229fd6000d9c
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

std::string duplicate_encoder(const std::string& str) {
    std::unordered_map<char, int> char_count;

    for (char ch : str) {
        char lower_ch = std::tolower(ch);
        char_count[lower_ch]++;
    }

    std::string result;
    for (char ch : str) {
        char lower_ch = std::tolower(ch);
        if (char_count[lower_ch] > 1) {
            result += ')';
        } else {
            result += '(';
        }
    }

    return result;
}

int main() {
    std::string input1 = "din";
    std::string input2 = "recede";
    std::string input3 = "Success";
    std::string input4 = "(( @";

    std::cout << "Encoded '" << input1 << "': " << duplicate_encoder(input1) << std::endl;
    std::cout << "Encoded '" << input2 << "': " << duplicate_encoder(input2) << std::endl;
    std::cout << "Encoded '" << input3 << "': " << duplicate_encoder(input3) << std::endl;
    std::cout << "Encoded '" << input4 << "': " << duplicate_encoder(input4) << std::endl;

    return 0;
}