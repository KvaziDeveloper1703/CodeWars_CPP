/*
Given two integers a and b, which can be positive or negative, find the sum of all integers between and including them. If the two numbers are equal, return either a or b.

Даны два целых числа a и b, которые могут быть как положительными, так и отрицательными. Найдите сумму всех целых чисел между ними, включая сами a и b. Если числа равны, верните любое из них.

https://www.codewars.com/kata/55f2b110f61eb01779000053
*/

#include <iostream>

int get_sum(int a, int b) {
    if (a > b) {
        std::swap(a, b);
    }

    int sum = 0;

    for (int i = a; i <= b; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    std::cout << get_sum(1, 10) << std::endl;
    std::cout << get_sum(-5, 5) << std::endl;
    return 0;
}
