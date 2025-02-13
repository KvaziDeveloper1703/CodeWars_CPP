/*
Write a function that takes an array of numbers, squares each number, and then returns the sum of the squared numbers.

Напишите функцию, которая принимает массив чисел, возводит каждое число в квадрат и возвращает сумму всех квадратов.

https://www.codewars.com/kata/515e271a311df0350d00000f
*/

#include <iostream>
#include <vector>
#include <numeric>

int sum_of_squares(const std::vector<int>& given_numbers) {
    int sum = 0;
    for (int number : given_numbers) {
        sum += number * number;
    }
    return sum;
}

int main() {
    std::vector<int> input = {1, 2, 2};

    int result = sum_of_squares(input);

    std::cout << "Input: [1, 2, 2], Output: " << result << std::endl;

    return 0;
}