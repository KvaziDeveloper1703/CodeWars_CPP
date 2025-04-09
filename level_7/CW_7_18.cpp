/*
A perfect square is an integer N such that sqrt(N) is also an integer.
Write a function that finds the next integral perfect square after the given number.
If the given number is not a perfect square, return -1. 
You may assume the input is a non-negative integer.

Полным квадратом называется число N, такое что sqrt(N) тоже является целым числом.
Напишите функцию, которая находит следующий полный квадрат после переданного числа.
Если переданное число не является полным квадратом, верните -1. 
Предполагается, что входное число неотрицательное.

https://www.codewars.com/kata/56269eb78ad2e4ced1000013
*/

#include <iostream>
#include <cmath>

long find_next_square(long N) {
    long root = std::sqrt(N);
    if (root * root == N) {
        long next_root = root + 1;
        return next_root * next_root;
    }
    return -1;
}

int main() {
    std::cout << find_next_square(121) << std::endl;
    return 0;
}