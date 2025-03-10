/*
Implement a function that adds two numbers and returns their sum in binary. The conversion to binary can be done either before or after the addition.

Example:
add_binary(5, 9) → "1110" 
5 + 9 = 14 in decimal → "1110" in binary

Реализуйте функцию, которая складывает два числа и возвращает их сумму в двоичной системе. Преобразование в двоичный формат можно выполнить до или после сложения.

Пример:
add_binary(5, 9) → "1110" 
5 + 9 = 14 в десятичной → "1110" в двоичной
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

std::string add_binary(int a, int b) {
    int sum = a + b;
    return decimal_to_binary(sum);
}

int main() {
    int number_1 = 5, number_2 = 9;
    std::cout << "Sum of " << number_1 << " and " << number_2 << " in binary: " << add_binary(number_1, number_2) << std::endl;

    return 0;
}