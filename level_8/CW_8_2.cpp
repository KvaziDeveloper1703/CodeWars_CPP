/*
You need to write a function that takes a number as input and returns its negative value. If the number is already negative, return it as is.

Вам нужно написать функцию, которая принимает число в качестве входных данных и возвращает его отрицательное значение. Если число уже отрицательное, вернуть его без изменений.

https://www.codewars.com/kata/55685cd7ad70877c23000102
*/

#include <iostream>

int make_negative(int given_number) {
    if (given_number > 0) {
        return -given_number;
    } else {
        return given_number;
    }
}

int main() {
    int input;
    
    std::cout << "Enter a number: ";
    std::cin >> input;
    
    std::cout << "The negative form is " << make_negative(input) << "." << std::endl;

    return 0;
}