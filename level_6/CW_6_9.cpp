/*
Write a function that returns the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string will only contain alphabets (both uppercase and lowercase) and numeric digits.

Examples:
Input: "abcde"
Output: 0 (no characters repeat more than once)

Input: "aabbcde"
Output: 2 (a and b)

Напишите функцию, которая возвращает количество различных символов (алфавитных символов и цифр), которые встречаются более одного раза в заданной строке. Подсчет должен быть нечувствительным к регистру. Входная строка содержит только буквы (как прописные, так и строчные) и цифры.

Примеры:
Вход: "abcde"
Выход: 0 (нет символов, которые повторяются более одного раза)

Вход: "aabbcde"
Выход: 2 (повторяются a и b)

https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

int count_duplicates(const std::string& str) {
    std::unordered_map<char, int> char_count;

    for (char ch : str) {
        char lower_ch = std::tolower(ch);
        char_count[lower_ch]++;
    }

    int duplicate_count = 0;
    for (const auto& pair : char_count) {
        if (pair.second > 1) {
            duplicate_count++;
        }
    }

    return duplicate_count;
}

int main() {
    std::string input1 = "abcde";
    std::string input2 = "aabbcde";

    std::cout << "Duplicate count in '" << input1 << "': " << count_duplicates(input1) << std::endl;
    std::cout << "Duplicate count in '" << input2 << "': " << count_duplicates(input2) << std::endl;

    return 0;
}