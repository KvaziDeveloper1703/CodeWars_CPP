/*
You are given an array (with a length of at least 3 but potentially very large) containing integers. The array is entirely comprised of either odd integers or even integers, except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.

Examples:
Input: [2, 4, 0, 100, 4, 11, 2602, 36]
Output: 11 (the only odd number)

Input: [160, 3, 1719, 19, 11, 13, -21]
Output: 160 (the only even number)

Вам дан массив, который содержит как минимум 3 элемента (но может быть очень большим), состоящий из целых чисел. Массив полностью состоит либо из нечетных чисел, либо из четных чисел, за исключением одного числа N. Напишите метод, который принимает массив в качестве аргумента и возвращает это "выбивающееся" число N.

Примеры:
Вход: [2, 4, 0, 100, 4, 11, 2602, 36]
Выход: 11 (единственное нечетное число)

Вход: [160, 3, 1719, 19, 11, 13, -21]
Выход: 160 (единственное четное число)

https://www.codewars.com/kata/5526fc09a1bbd946250002dc
*/

#include <iostream>
#include <vector>

int find_outlier(const std::vector<int>& arr) {
    int even_count = 0, odd_count = 0;
    int last_even = 0, last_odd = 0;

    for (int num : arr) {
    	if (num % 2 == 0) {
            even_count++;
            last_even = num;
        } else {
            odd_count++;
            last_odd = num;
        }

        if (even_count > 1 && odd_count > 0) return last_odd;
        if (odd_count > 1 && even_count > 0) return last_even;
    }

    return (even_count == 1) ? last_even : last_odd;
}

int main() {
    std::vector<int> arr1 = {2, 4, 0, 100, 4, 11, 2602, 36};
    std::vector<int> arr2 = {160, 3, 1719, 19, 11, 13, -21};

    std::cout << "Outlier in arr1: " << find_outlier(arr1) << std::endl;
    std::cout << "Outlier in arr2: " << find_outlier(arr2) << std::endl;

    return 0;
}