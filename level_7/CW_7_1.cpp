/*
Write a function that counts the number of vowels in a given string.

Напишите функцию, которая подсчитывает количество гласных в заданной строке.

https://www.codewars.com/kata/54ff3102c1bad923760001f3
*/

#include <iostream>
#include <string>

int count_vowels(const std::string& given_string) {
    int count = 0;
    for (char character : given_string) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'y') {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string input = "beautiful day";
    std::cout << "Input: \"beautiful day\" → Output: " << count_vowels(input) << std::endl;

    return 0;
}