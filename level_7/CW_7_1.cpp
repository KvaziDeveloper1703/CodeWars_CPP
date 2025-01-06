/*
Write a function that counts the number of vowels in a given string.

Rules:
+ Vowels are defined as a, e, i, o, u, y.
+ The input string will contain only lowercase letters and/or spaces.
+ Return the total count of vowels in the string.

Examples:
Input: "hello" → Output: 2 (Explanation: e, o)
Input: "beautiful day" → Output: 6 (Explanation: e, a, u, i, a, y)

Напишите функцию, которая подсчитывает количество гласных в заданной строке.

Правила:
+ Гласные: a, e, i, o, u, y.
+ Входная строка будет содержать только строчные буквы и/или пробелы.
+ Верните общее количество гласных в строке.

Примеры:
Ввод: "hello" → Вывод: 2 (Объяснение: e, o)
Ввод: "beautiful day" → Вывод: 6 (Объяснение: e, a, u, i, a, y)

https://www.codewars.com/kata/54ff3102c1bad923760001f3
*/

#include <iostream>
#include <string>

int count_vowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string input1 = "hello";
    std::string input2 = "beautiful day";

    std::cout << "Input: \"hello\" → Output: " << count_vowels(input1) << std::endl;
    std::cout << "Input: \"beautiful day\" → Output: " << count_vowels(input2) << std::endl;

    return 0;
}