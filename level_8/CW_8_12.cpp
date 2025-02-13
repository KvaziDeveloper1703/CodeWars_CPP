/*
Given an array of integers, your task is to find and return the smallest integer.

Дан массив целых чисел. Ваша задача — найти и вернуть наименьшее число.

https://www.codewars.com/kata/55a2d7ebe362935a210000b2
*/

#include <iostream>
#include <vector>

int findSmallest(const std::vector<int>& given_numbers) {
    int smallest_number = given_numbers[0];
    for (int number : given_numbers) {
        if (number < smallest_number) {
            smallest_number = number;
        }
    }
    return smallest_number;
}

int main() {
    std::vector<int> numbers = {34, 15, 88, 2};
    std::cout << "Smallest number: " << findSmallest(numbers) << std::endl;

    return 0;
}