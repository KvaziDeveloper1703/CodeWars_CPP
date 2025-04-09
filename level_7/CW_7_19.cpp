/*
A factory printer uses only colors labeled with letters 'a' to 'm'. The control string records the colors used. If any letter outside 'a' to 'm' appears, it's an error.
Write a function that returns the error rate as "errors/total_length", without simplifying the fraction.

Принтер на заводе использует только цвета, обозначенные буквами от 'a' до 'm'. Контрольная строка фиксирует использованные цвета. Буквы за пределами 'a'–'m' считаются ошибками.
Напишите функцию, которая возвращает долю ошибок в формате "ошибки/общая_длина", без сокращения дроби.

https://www.codewars.com/kata/56541980fa08ab47a0000040
*/

#include <iostream>
#include <string>

std::string printer_error(const std::string& given_string) {
    int error_count = 0;
    int total_count = given_string.length();

    for (char character : given_string) {
        if (character < 'a' || character > 'm') {
            error_count++;
        }
    }

    return std::to_string(error_count) + "/" + std::to_string(total_count);
}

int main() {
    std::string my_string = "aaabbbbhaijjjm";
    std::cout << printer_error(my_string) << std::endl;
    return 0;
}