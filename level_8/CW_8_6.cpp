/*
Write a function that takes a boolean value as input and returns:
+ "Yes" if the value is true.
+ "No" if the value is false.

Example:
Input: true → Output: "Yes"
Input: false → Output: "No"

Напишите функцию, которая принимает булево значение и возвращает:
+ "Yes", если значение true.
+ "No", если значение false.

Пример:
Ввод: true → Вывод: "Yes"
Ввод: false → Вывод: "No"

https://www.codewars.com/kata/53369039d7ab3ac506000467
*/

#include <iostream>
#include <string>

std::string bool_to_string(bool value) {
    return value ? "Yes" : "No";
}

int main() {
    bool test_value_1 = true;
    bool test_value_2 = false;

    std::cout << "Input: true, Output: " << bool_to_string(test_value_1) << std::endl;
    std::cout << "Input: false, Output: " << bool_to_string(test_value_2) << std::endl;

    return 0;
}