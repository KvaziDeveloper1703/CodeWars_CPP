/*
Write a function that takes a non-negative integer as input and returns a new integer with its digits rearranged in descending order. The goal is to form the largest possible number from the given digits.

Examples:
Input: 42145 → Output: 54421
Input: 145263 → Output: 654321
Input: 123456789 → Output: 987654321

Напишите функцию, которая принимает неотрицательное целое число и возвращает новое число, сформированное из его цифр, расположенных в порядке убывания. Цель — получить наибольшее возможное число из данных цифр.

Примеры:
Ввод: 42145 → Вывод: 54421
Ввод: 145263 → Вывод: 654321
Ввод: 123456789 → Вывод: 987654321

https://www.codewars.com/kata/5467e4d82edf8bbf40000155
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>

uint64_t descending_order(uint64_t given_number) {
    
    // Convert the number to a string
    // Преобразуем число в строку
    std::string given_number_as_a_string = std::to_string(given_number);

    // Sort the string in descending order
    // Сортируем строку в порядке убывания
    std::sort(given_number_as_a_string.begin(), given_number_as_a_string.end(), std::greater<char>());

    // Convert the sorted string back to a number
    // Преобразуем отсортированную строку обратно в число
    uint64_t highest_number = 0;
    for (char digit : given_number_as_a_string) {
        highest_number = highest_number * 10 + (digit - '0');
    }

    return highest_number;
}

int main() {
    std::cout << "Write your number here, please: ";
    uint64_t my_number;
    std::cin >> my_number;

    std::cout << descending_order(my_number) << std::endl;

    return 0;
}
