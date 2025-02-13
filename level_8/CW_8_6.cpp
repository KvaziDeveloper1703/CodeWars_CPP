/*
Write a function that takes a boolean value as input and returns:
+ "Yes" if the value is true.
+ "No" if the value is false.

Напишите функцию, которая принимает булево значение и возвращает:
+ "Yes", если значение true.
+ "No", если значение false.

https://www.codewars.com/kata/53369039d7ab3ac506000467
*/

#include <iostream>
#include <string>

std::string bool_to_string(bool given_value) {
    return given_value ? "Yes" : "No";
}

int main() {
    bool test_value_1 = true;
    bool test_value_2 = false;

    std::cout << "Input: true, Output: " << bool_to_string(test_value_1) << std::endl;
    std::cout << "Input: false, Output: " << bool_to_string(test_value_2) << std::endl;

    return 0;
}