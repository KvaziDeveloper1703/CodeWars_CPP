/*
Write a function that takes a string as input and returns the string with its first and last characters removed.

Напишите функцию, которая принимает строку и возвращает эту строку без первого и последнего символов.

https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
*/

#include <iostream>
#include <string>

std::string remove_first_and_last(const std::string& given_string) {
    size_t start_index = 1;
    size_t new_length = given_string.size() - 2;
    std::string result = given_string.substr(start_index, new_length);

    return result;
}

int main() {
    std::string input1 = "hello";
    std::string input2 = "abc";

    std::cout << "Input: \"hello\" → Output: \"" << remove_first_and_last(input1) << "\"" << std::endl;
    std::cout << "Input: \"abc\" → Output: \"" << remove_first_and_last(input2) << "\"" << std::endl;

    return 0;
}