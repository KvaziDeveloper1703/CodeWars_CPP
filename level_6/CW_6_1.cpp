/*
Write a function that calculates the sum of all natural numbers below a given number that are multiples of 3 or 5.

Rules:
+ The input number will be an integer.
+ If the input number is negative, the function should return 0.
+ If a number is a multiple of both 3 and 5, it should only be counted once.

Example:
Input: 10 → Output: 23
Input: -5 → Output: 0

Напишите функцию, которая вычисляет сумму всех натуральных чисел меньше заданного числа, которые являются кратными 3 или 5.

Правила:
+ Входное число будет целым.
+ Если входное число отрицательное, функция должна возвращать 0.
+ Если число кратно и 3, и 5, его следует учитывать только один раз.

Пример:
Ввод: 10 → Вывод: 23
Ввод: -5 → Вывод: 0

https://www.codewars.com/kata/514b92a657cdc65150000006
*/

#include <iostream>

int sum_of_multiples(int number) {
    if (number < 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < number; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    std::cout << "Enter a number: ";

    int input;
    
    std::cin >> input;
    std::cout << "Sum of multiples of 3 or 5 below " << input << ": " << sum_of_multiples(input) << std::endl;

    return 0;
}
