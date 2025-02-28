/*
Create a function that returns the sum of the two smallest positive numbers from an array.
+ The array will always contain at least 4 positive integers.
+ Only positive integers (no floats or non-positive numbers) will be passed.

Example:
[19, 5, 42, 2, 77] → 7  
[10, 343445353, 3453445, 3453545353453] → 3453455  

Создайте функцию, которая возвращает сумму двух наименьших положительных чисел из массива.
+ В массиве всегда будет минимум 4 положительных целых числа.
+ Входные данные содержат только положительные целые числа (без дробных и неположительных чисел).

Пример:
[19, 5, 42, 2, 77] → 7  
[10, 343445353, 3453445, 3453545353453] → 3453455  
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum_of_two_lowest_numbers(const vector<int>& given_numbers) {
    
    if (given_numbers.size() < 4) return -1;
    
    int first_min = INT_MAX; 
    int second_min = INT_MAX;
    
    for (int number : given_numbers) {
        if (number < first_min) {
            second_min = first_min;
            first_min = number;
        } else if (number < second_min) {
            second_min = number;
        }
    }
    
    return first_min + second_min;
}

int main() {
    vector<int> input = {19, 5, 42, 2, 77};
    cout << "Sum of the two lowest numbers: " << sum_of_two_lowest_numbers(input) << endl;
    return 0;
}