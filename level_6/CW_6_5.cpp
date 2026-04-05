/*
Write a function that takes an array of integers and returns the one integer that appears an odd number of times.
    - There will always be exactly one integer in the array that appears an odd number of times;
    - The array will contain at least one element.

Examples:
Input: [7]
Output: 7

Input: [0]
Output: 0

Input: [1, 1, 2]
Output: 2

Напишите функцию, которая принимает массив целых чисел и возвращает одно число, которое встречается нечётное количество раз.
    - В массиве всегда будет ровно одно число, которое встречается нечётное количество раз;
    - Массив будет содержать как минимум один элемент.

Примеры:
Ввод: [7]
Вывод: 7

Ввод: [0]
Вывод: 0

Ввод: [1, 1, 2]
Вывод: 2

https://www.codewars.com/kata/541c8630095125aba6000c00
*/

#include <iostream>

int digital_root(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;
    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;
    }
    std::cout << "The digital root of " << number << " is: " << digital_root(number) << std::endl;
    return 0;
}