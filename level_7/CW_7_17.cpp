/*
Write a function that returns true if the first argument (a string) ends with the second argument (also a string). Otherwise, return false.

Examples:
Input: 'abc', 'bc'
Output: True

Input: 'abc', 'd'
Output: False

Напишите функцию, которая возвращает true, если первая строка заканчивается на вторую строку. В противном случае функция должна вернуть false.

Примеры:
Ввод: 'abc', 'bc'
Вывод: True

Ввод: 'abc', 'd'
Вывод: False

https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d
*/

#include <iostream>

bool string_ends_with(const std::string& given_string, const std::string& given_suffix) {
    int string_length = given_string.length();
    int suffix_length = given_suffix.length();
    
    if (suffix_length > string_length) {
        return false;
    }
    
    for (int i = 0; i < suffix_length; i++) {
        if (given_string[string_length - suffix_length + i] != given_suffix[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::cout << std::boolalpha; // This sets the output format for boolean values to "true" or "false" instead of 1 or 0.
    std::cout << string_ends_with("abc", "bc") << std::endl;
    std::cout << string_ends_with("abc", "d") << std::endl;
    return 0;
}