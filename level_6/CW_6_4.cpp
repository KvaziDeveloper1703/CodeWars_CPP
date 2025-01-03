/*
Write a function that takes an array of integers and returns the one integer that appears an odd number of times.

Rules:
+ There will always be exactly one integer in the array that appears an odd number of times.
+ The array will contain at least one element.

Examples:
Input: [7] → Output: 7 (appears 1 time, which is odd)
Input: [0] → Output: 0 (appears 1 time, which is odd)
Input: [1, 1, 2] → Output: 2 (appears 1 time, which is odd)
Input: [0, 1, 0, 1, 0] → Output: 0 (appears 3 times, which is odd)
Input: [1, 2, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1] → Output: 4 (appears 1 time, which is odd)

Напишите функцию, которая принимает массив целых чисел и возвращает одно число, которое встречается нечётное количество раз.

Правила:
+ В массиве всегда будет ровно одно число, которое встречается нечётное количество раз.
+ Массив будет содержать как минимум один элемент.

Примеры:
Ввод: [7] → Вывод: 7 (встречается 1 раз, что нечётно)
Ввод: [0] → Вывод: 0 (встречается 1 раз, что нечётно)
Ввод: [1, 1, 2] → Вывод: 2 (встречается 1 раз, что нечётно)
Ввод: [0, 1, 0, 1, 0] → Вывод: 0 (встречается 3 раза, что нечётно)
Ввод: [1, 2, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1] → Вывод: 4 (встречается 1 раз, что нечётно)

https://www.codewars.com/kata/54da5a58ea159efa38000836
*/

#include <iostream>
#include <vector>

int find_odd(const std::vector<int>& numbers) {
    int result = 0;

    for (int num : numbers) {
        result ^= num;
    }

    return result;
}

int main() {
    std::vector<int> numbers;
    int input;

    std::cout << "Enter integers (end input with non-numeric data):" << std::endl;
    while (std::cin >> input) {
        numbers.push_back(input);
    }

    std::cout << "The integer that appears an odd number of times is: " << find_odd(numbers) << std::endl;

    return 0;
}