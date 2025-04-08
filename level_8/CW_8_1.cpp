/*
You need to write a function that takes an integer as input and returns:

Вам нужно написать функцию, которая принимает целое число в качестве входных данных и возвращает:

https://www.codewars.com/kata/53da3dbb4a5168369a0000fe
*/

#include <iostream>
#include <string>

std::string even_or_odd(int given_number) {
    if (given_number % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    int input;

    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    std::cout << "The number is " << even_or_odd(input) << "." << std::endl;

    return 0;
}