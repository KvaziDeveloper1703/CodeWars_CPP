/*
Write a function accum that takes a string as input and returns a new string formatted as follows:

Rules:
+ For each character in the input string, repeat the character based on its position in the string (starting from 1).
+ Capitalize the first occurrence of the character and make the rest lowercase.
+ Separate each resulting group with a hyphen (-).

Examples:
Input: "abcd" → Output: "A-Bb-Ccc-Dddd"
Input: "RqaEzty" → Output: "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
Input: "cwAt" → Output: "C-Ww-Aaa-Tttt"

Напишите функцию accum, которая принимает строку в качестве входных данных и возвращает новую строку, отформатированную следующим образом:

Правила:
+ Для каждого символа входной строки повторите его столько раз, какой его порядковый номер в строке (начиная с 1).
+ Первый символ группы должен быть с заглавной буквы, остальные — строчные.
+ Разделите каждую группу с помощью дефиса (-).

Примеры:
Ввод: "abcd" → Вывод: "A-Bb-Ccc-Dddd"
Ввод: "RqaEzty" → Вывод: "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
Ввод: "cwAt" → Вывод: "C-Ww-Aaa-Tttt"

https://www.codewars.com/kata/5667e8f4e3f572a8f2000039
*/

#include <iostream>
#include <string>
#include <cctype>

class Accumul {
public:
    static std::string accum(const std::string& s) {
        std::string result;

        for (size_t i = 0; i < s.length(); ++i) {
            result += std::toupper(s[i]);

            for (size_t j = 0; j < i; ++j) {
                result += std::tolower(s[i]);
            }

            if (i < s.length() - 1) {
                result += '-';
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;

    std::cout << "Formatted string: " << Accumul::accum(input) << std::endl;

    return 0;
}