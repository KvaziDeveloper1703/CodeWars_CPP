/*
Write a function that calculates the summation of all numbers from 1 to a given number. The input will always be a positive integer greater than 0. The function should return only the result.

Напишите функцию, которая вычисляет сумму всех чисел от 1 до заданного числа. Входное значение всегда будет положительным целым числом больше 0. Функция должна возвращать только результат.

https://www.codewars.com/kata/55d24f55d7dd296eb9000030
*/

#include <iostream>

int summation(int given_number) {
    int sum = 0;
    for (int i = 1; i <= given_number; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int number = 10;

    std::cout << "Input: 10 → Output: " << summation(number) << std::endl;

    return 0;
}