/*
Write a function that accepts an array of 10 integers (each number ranging from 0 to 9) and returns a string representing these numbers in the format of a phone number.

Rules:
+ Input: An array of 10 integers.
+ All integers in the array are within the range of 0 to 9.
+ The format of the returned string should be: "(XXX) XXX-XXXX", where X represents the corresponding digit from the array.

Example:
createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) => returns "(123) 456-7890"

Напишите функцию, которая принимает массив из 10 целых чисел (каждое число находится в диапазоне от 0 до 9) и возвращает строку, представляющую эти числа в формате телефонного номера.

Правила:
+ Входные данные: массив из 10 целых чисел.
+ Все числа в массиве находятся в диапазоне от 0 до 9.
+ Формат возвращаемой строки: "(XXX) XXX-XXXX", где X — соответствующее число из массива.

Пример:
createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) => возвращает "(123) 456-7890"

https://www.codewars.com/kata/525f50e3b73515a6db000b83
*/

#include <iostream>
#include <string>
#include <vector>

std::string create_phone_number(const std::vector<int>& numbers) {
    char phone_number[15];
    snprintf(phone_number, sizeof(phone_number), "(%d%d%d) %d%d%d-%d%d%d%d",
             numbers[0], numbers[1], numbers[2],
             numbers[3], numbers[4], numbers[5],
             numbers[6], numbers[7], numbers[8], numbers[9]);

    return std::string(phone_number);
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::string phone_number = create_phone_number(input);
    std::cout << "Phone number: " << phone_number << std::endl;

    return 0;
}