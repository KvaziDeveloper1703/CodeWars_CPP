/*
Given two integers a and b, which can be positive or negative, find the sum of all integers between and including them. If the two numbers are equal, return either a or b.

Examples:
(1, 0) → 1 (1 + 0 = 1)
(1, 2) → 3 (1 + 2 = 3)

Даны два целых числа a и b, которые могут быть как положительными, так и отрицательными. Найдите сумму всех целых чисел между ними, включая сами a и b. Если числа равны, верните любое из них.

Примеры:
(1, 0) → 1 (1 + 0 = 1)
(1, 2) → 3 (1 + 2 = 3)
*/

#include <iostream>

int get_sum(int a, int b) {
    if (a > b) std::swap(a, b);
    return ((b - a + 1) * (a + b)) / 2;
}

int main() {
    std::cout << get_sum(1, 0) << std::endl;
    std::cout << get_sum(1, 2) << std::endl;
    return 0;
}
