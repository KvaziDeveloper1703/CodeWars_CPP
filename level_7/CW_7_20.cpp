/*
Write a function that adds two numbers and returns their sum in binary. The conversion to binary can be done either before or after the addition.

Напишите функцию, которая складывает два числа и возвращает их сумму в двоичной системе. Преобразование в двоичный формат можно выполнить до или после сложения.

https://www.codewars.com/kata/551f37452ff852b7bd000139
*/

#include <iostream>
#include <string>

std::string decimal_to_binary(int given_number) {
    if (given_number == 0) return "0";
    std::string binary = "";

    while (given_number > 0) {
        binary = std::to_string(given_number % 2) + binary;
        given_number /= 2;
    }

    return binary;
}

std::string add_binary(int given_number_1, int given_number_2) {
    int sum = given_number_1 + given_number_2;
    return decimal_to_binary(sum);
}

int main() {
    int number_1 = 5, number_2 = 9;
    std::cout << "Sum of " << number_1 << " and " << number_2 << " in binary: " << add_binary(number_1, number_2) << std::endl;

    return 0;
}