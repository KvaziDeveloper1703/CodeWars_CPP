/*
Write a function that takes a non-negative integer as input and returns a new integer with its digits rearranged in descending order. The goal is to form the largest possible number from the given digits.

Напишите функцию, которая принимает неотрицательное целое число и возвращает новое число, сформированное из его цифр, расположенных в порядке убывания. Цель — получить наибольшее возможное число из данных цифр.

https://www.codewars.com/kata/5467e4d82edf8bbf40000155
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>

uint64_t descending_order(uint64_t given_number) {

    std::string given_number_as_a_string = std::to_string(given_number);
    std::sort(given_number_as_a_string.begin(), given_number_as_a_string.end(), std::greater<char>());
    uint64_t highest_number = 0;
    for (char digit : given_number_as_a_string) {
        highest_number = highest_number * 10 + (digit - '0');
    }

    return highest_number;
}

int main() {
    std::cout << "Write your number here, please: ";
    uint64_t number;
    std::cin >> number;

    std::cout << descending_order(number) << std::endl;

    return 0;
}
