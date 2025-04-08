/*
Write a function that takes a number as input and returns its opposite.

Напишите функцию, которая принимает число и возвращает его противоположное

https://www.codewars.com/kata/56dec885c54a926dcd001095
*/

#include <iostream>

double make_opposite(double given_number) {
    return -given_number;
}

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "The opposite number: " << make_opposite(number) << std::endl;
    return 0;
}