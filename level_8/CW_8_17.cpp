/*
Given a year, return the century it belongs to.

Напишите функцию, которая принимает год и возвращает век, к которому он относится.

https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
*/

#include <iostream>

int century_from_year(int given_year) {
    int century = given_year / 100;
    if (given_year % 100 != 0) {
        century += 1;
    }
    return century;
}

int main() {
    std::cout << century_from_year(1703) << std::endl;
    return 0;
}