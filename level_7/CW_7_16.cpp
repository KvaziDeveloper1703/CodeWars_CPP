/*
Write a function that takes two strings s1 and s2, which contain only lowercase letters from a to z. The function should return a new string sorted in ascending alphabetical order and containing only distinct letters, each appearing only once. The resulting string should include letters from both s1 and s2.

Напишите функцию, которая принимает две строки s1 и s2, содержащие только строчные буквы от a до z. Функция должна вернуть новую строку, отсортированную в алфавитном порядке по возрастанию и содержащую только уникальные буквы, каждая из которых встречается в результате только один раз. Итоговая строка должна включать буквы из обеих строк s1 и s2.

https://www.codewars.com/kata/5656b6906de340bd1b0000ac
*/

#include <iostream>
#include <string>
#include <set>

std::string sorted_unique_letters(const std::string& given_string_1, const std::string& given_string_2) {
    std::set<char> unique_characters;

    for (char character : given_string_1) {
        unique_characters.insert(character);
    }

    for (char character : given_string_2) {
        unique_characters.insert(character);
    }

    std::string result;

    for (char character : unique_characters) {
        result += character;
    }

    return result;
}

int main() {
    std::string string_1 = "xyaabbbccccdefww";
    std::string string_2 = "xxxxyyyyabklmopq";

    std::string result = sorted_unique_letters(string_1, string_2);

    std::cout << "Result: " << result << std::endl;
    
    return 0;
}