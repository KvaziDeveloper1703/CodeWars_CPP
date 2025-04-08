/*
Write a function that takes an array of integers and returns the smallest number in the array.

Напишите функцию, которая принимает массив целых чисел и возвращает наименьшее число в этом массиве.

https://www.codewars.com/kata/55a2d7ebe362935a210000b2
*/

#include <iostream>
#include <vector>

int find_the_smallest(const std::vector<int>& given_numbers) {
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
    std::cout << "Smallest number: " << find_the_smallest(numbers) << std::endl;

    return 0;
}