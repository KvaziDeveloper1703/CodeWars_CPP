/*
Write a function that converts a name into initials. The input will always be two words with a single space between them.
The output should be two capital letters separated by a dot.

Напишите функцию, которая преобразует имя в инициалы. Входные данные всегда будут состоять из двух слов, разделённых одним пробелом.
Выход должен содержать две заглавные буквы, разделённые точкой.

https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3
*/

#include <iostream>

std::string abbrevName(const std::string& given_name) {
    size_t space_index = given_name.find(' ');
    if (space_index == std::string::npos) return "";
    
    char first_initial = std::toupper(given_name[0]);
    char second_initial = std::toupper(given_name[space_index + 1]);
    
    return std::string(1, first_initial) + "." + second_initial;
}

int main() {
    std::string name = "Sam Harris";
    
    std::cout << abbrevName(name) << std::endl;
    
    return 0;
}
