/*
Write a function that calculates the summation of all numbers from 1 to a given number num. The input will always be a positive integer greater than 0. The function should return only the result.

Examples:
Input: 2 → Output: 3
Input: 8 → Output: 36

Напишите функцию, которая вычисляет сумму всех чисел от 1 до заданного числа num. Входное значение всегда будет положительным целым числом больше 0. Функция должна возвращать только результат.

Примеры:
Ввод: 2 → Вывод: 3
Ввод: 8 → Вывод: 36

https://www.codewars.com/kata/55d24f55d7dd296eb9000030
*/

#include <iostream>

int summation(int num) {
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int input1 = 2;
    int input2 = 8;

    std::cout << "Input: 2 → Output: " << summation(input1) << std::endl;
    std::cout << "Input: 8 → Output: " << summation(input2) << std::endl;

    return 0;
}