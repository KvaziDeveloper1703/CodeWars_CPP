/*
Write a function that takes a string of space-separated numbers and returns a string with the highest and lowest numbers from the input.

Напишите функцию, которая принимает строку с числами, разделёнными пробелами, и возвращает строку с самым большим и самым маленьким числами из входных данных.

https://www.codewars.com/kata/554b4ac871d6813a03000035
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<int> parse_numbers(const std::string& given_numbers) {
    std::vector<int> result;
    std::string temporary = "";
    for (char character : given_numbers) {
        if (character == ' ') {
            if (!temporary.empty()) {
                result.push_back(std::stoi(temporary));
                temporary = "";
            }
        } else {
            temporary += character;
        }
    }
    if (!temporary.empty()) {
        result.push_back(std::stoi(temporary));
    }
    return result;
}

std::string find_high_and_low(const std::string& given_numbers) {
    std::vector<int> parsed_numbers = parse_numbers(given_numbers);
    int highest_number = parsed_numbers[0];
    int lowest_number = parsed_numbers[0];

    for (int number : parsed_numbers) {
        if (number > highest_number) highest_number = number;
        if (number < lowest_number) lowest_number = number;
    }

    return std::to_string(highest_number) + " " + std::to_string(lowest_number);
}

int main() {
    std::string input = "1 2 3 4 5";

    std::cout << "Input: \"" << input << "\" → Output: \"" << find_high_and_low(input) << "\"" << std::endl;

    return 0;
}