/*
Write a function that takes an integer as input and returns the number of bits equal to one in the binary representation of that number. It is guaranteed that the input will be non-negative.

Example:
Input: 1234
Binary representation: 10011010010
Output: 5

Напишите функцию, которая принимает целое число в качестве входного параметра и возвращает количество битов, равных единице, в двоичном представлении этого числа. Гарантируется, что входное число неотрицательное.

Пример:
Вход: 1234
Двоичное представление: 10011010010
Выход: 5

https://www.codewars.com/kata/526571aae218b8ee490006f4
*/

#include <iostream>
#include <bitset>

int count_bits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;
    }

    int result = count_bits(number);
    std::cout << "Number of bits equal to 1 in the binary representation: " << result << std::endl;

    return 0;
}