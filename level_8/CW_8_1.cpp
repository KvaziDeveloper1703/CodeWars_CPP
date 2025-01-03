/*
Write a function that takes an integer as input and returns:
+ "Even" if the number is even.
+ "Odd" if the number is odd.

Examples:
Input: 4 → Output: "Even"
Input: 7 → Output: "Odd"

Напишите функцию, которая принимает целое число в качестве входных данных и возвращает:

+ "Even", если число четное.
+ "Odd", если число нечетное.

Примеры:
Ввод: 4 → Вывод: "Even"
Ввод: 7 → Вывод: "Odd"

https://www.codewars.com/kata/53da3dbb4a5168369a0000fe
*/

#include <iostream>
#include <string>

std::string even_or_odd(int number) {
    return (number % 2 == 0) ? "Even" : "Odd";
}

int main() {
    int input;

    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    std::cout << "The number is " << even_or_odd(input) << "." << std::endl;

    return 0;
}
