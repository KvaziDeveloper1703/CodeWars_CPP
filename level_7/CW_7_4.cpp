/*
Write a function that takes a string of space-separated numbers and returns a string with the highest and lowest numbers from the input.

Rules:
+ The input string contains valid integers (no need for validation).
+ There will always be at least one number in the input string.
+ The output should be a string with two numbers separated by a single space:
    + The highest number should come first.
    + The lowest number should come second.

Examples:
Input: "1 2 3 4 5" → Output: "5 1"
Input: "1 2 -3 4 5" → Output: "5 -3"
Input: "1 9 3 4 -5" → Output: "9 -5"

Напишите функцию, которая принимает строку с числами, разделёнными пробелами, и возвращает строку с самым большим и самым маленьким числами из входных данных.

Правила:
+ Входная строка содержит только целые числа (проверка не требуется).
+ В строке всегда будет хотя бы одно число.
+ Результат должен быть строкой из двух чисел, разделённых одним пробелом:
    + Сначала должно идти самое большое число.
    + Затем — самое маленькое.

Примеры:
Ввод: "1 2 3 4 5" → Вывод: "5 1"
Ввод: "1 2 -3 4 5" → Вывод: "5 -3"
Ввод: "1 9 3 4 -5" → Вывод: "9 -5"

https://www.codewars.com/kata/554b4ac871d6813a03000035
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<int> parse_numbers(const std::string& numbers) {
    std::vector<int> result;
    std::string temp = "";
    for (char character : numbers) {
        if (character == ' ') {
            if (!temp.empty()) {
                result.push_back(std::stoi(temp));
                temp = "";
            }
        } else {
            temp += character;
        }
    }
    if (!temp.empty()) {
        result.push_back(std::stoi(temp));
    }
    return result;
}

std::string find_high_and_low(const std::string& numbers) {
    std::vector<int> parsed_numbers = parse_numbers(numbers);
    int highest_number = parsed_numbers[0];
    int lowest_number = parsed_numbers[0];

    for (int number : parsed_numbers) {
        if (number > highest_number) highest_number = number;
        if (number < lowest_number) lowest_number = number;
    }

    return std::to_string(highest_number) + " " + std::to_string(lowest_number);
}

int main() {
    std::string input1 = "1 2 3 4 5";
    std::string input2 = "1 2 -3 4 5";
    std::string input3 = "1 9 3 4 -5";

    std::cout << "Input: \"" << input1 << "\" → Output: \"" << find_high_and_low(input1) << "\"" << std::endl;
    std::cout << "Input: \"" << input2 << "\" → Output: \"" << find_high_and_low(input2) << "\"" << std::endl;
    std::cout << "Input: \"" << input3 << "\" → Output: \"" << find_high_and_low(input3) << "\"" << std::endl;

    return 0;
}