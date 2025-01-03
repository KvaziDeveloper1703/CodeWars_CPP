/*
Write a function that takes a number as input and returns its negative value. If the number is already negative, return it as is.

Examples:
Input: 5 → Output: -5
Input: -3 → Output: -3
Input: 0 → Output: 0

Напишите функцию, которая принимает число в качестве входных данных и возвращает его отрицательное значение. Если число уже отрицательное, вернуть его без изменений.

Примеры:
Ввод: 5 → Вывод: -5
Ввод: -3 → Вывод: -3
Ввод: 0 → Вывод: 0

https://www.codewars.com/kata/55685cd7ad70877c23000102
*/

#include <iostream>

int make_negative(int number) {
    return (number > 0) ? -number : number;
}

int main() {
    int input;
    
    std::cout << "Enter a number: ";
    std::cin >> input;
    
    std::cout << "The negative form is " << make_negative(input) << "." << std::endl;

    return 0;
}
