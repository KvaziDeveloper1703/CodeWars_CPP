/*
Write a function that takes a string as input and returns a new string formatted as follows:
+ For each character in the input string, repeat the character based on its position in the string (starting from 1).
+ Capitalize the first occurrence of the character and make the rest lowercase.
+ Separate each resulting group with a hyphen (-).

Examples:
Input: "abcd" → Output: "A-Bb-Ccc-Dddd"
Input: "RqaEzty" → Output: "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"

Напишите функцию, которая принимает строку в качестве входных данных и возвращает новую строку, отформатированную следующим образом:
+ Для каждого символа входной строки повторите его столько раз, какой его порядковый номер в строке (начиная с 1).
+ Первый символ группы должен быть с заглавной буквы, остальные — строчные.
+ Разделите каждую группу с помощью дефиса (-).

Примеры:
Ввод: "abcd" → Вывод: "A-Bb-Ccc-Dddd"
Ввод: "RqaEzty" → Вывод: "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"

https://www.codewars.com/kata/5667e8f4e3f572a8f2000039
*/

#include <iostream>
#include <string>

std::string accum(const std::string& given_string) {
    std::string result;
    for (size_t i = 0; i < given_string.size(); ++i) {
        if (i > 0) result += "-";
        result += std::toupper(given_string[i]);
        result += std::string(i, std::tolower(given_string[i]));
    }
    return result;
}

int main() {
    std::cout << accum("abcd") << std::endl;
    std::cout << accum("RqaEzty") << std::endl;
    return 0;
}