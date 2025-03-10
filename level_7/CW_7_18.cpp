/*
Complete the find_next_square function that finds the next integral perfect square after the given number.

A perfect square is an integer n such that sqrt(n) is also an integer. If the given number is not a perfect square, return -1. You may assume the input is a non-negative integer.

Дополните функцию find_next_square, которая находит следующий полный квадрат после переданного числа.

Полным квадратом называется число n, такое что sqrt(n) тоже является целым числом. Если переданное число не является полным квадратом, верните -1. Предполагается, что входное число неотрицательное.
*/

#include <iostream>
#include <cmath>

long find_next_square(long n) {
    long root = std::sqrt(n);
    if (root * root == n) {
        long next_root = root + 1;
        return next_root * next_root;
    }
    return -1;
}

int main() {
    std::cout << find_next_square(121) << std::endl;
    return 0;
}