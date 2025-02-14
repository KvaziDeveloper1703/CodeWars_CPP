/*
We need a function that converts a string into a number.

Нам нужна функция, которая преобразует строку в число.

https://www.codewars.com/kata/544675c6f971f7399a000e79
*/

#include <iostream>
#include <string>

int string_to_number(const std::string& given_string) {
    return std::stoi(given_string);
}

int main() {
    std::string my_string = "1234";
    std::cout << string_to_number(my_string) << std::endl;
    
    return 0;
}