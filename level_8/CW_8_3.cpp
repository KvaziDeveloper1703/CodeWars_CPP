/*
You need to write a function that takes an array of numbers and returns the sum of all positive numbers in the array. Ignore any negative numbers.

Вам нужно написать функцию, которая принимает массив чисел и возвращает сумму всех положительных чисел в массиве. Отрицательные числа игнорируются.

https://www.codewars.com/kata/5715eaedb436cf5606000381
*/

#include <iostream>
#include <vector>

int positive_sum(const std::vector<int>& given_numbers) {
    int sum = 0;
    for (int number : given_numbers) {
        if (number > 0) {
            sum += number;
        }
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {1, -4, 7, 12};
    std::cout << "The sum of positive numbers is " << positive_sum(numbers) << "." << std::endl;

    return 0;
}