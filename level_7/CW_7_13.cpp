/*
Write a function that returns the sum of the two smallest positive numbers from an array.

Напишите функцию, которая возвращает сумму двух наименьших положительных чисел из массива.

https://www.codewars.com/kata/558fc85d8fd1938afb000014
*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

long long sum_two_smallest_numbers(const vector<int>& given_numbers) {
    if (given_numbers.size() < 4) return -1;
    
    long long first_min = numeric_limits<long long>::max();
    long long second_min = numeric_limits<long long>::max();
    
    for (long long number : given_numbers) {
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
    cout << "Sum of the two lowest numbers: " << sum_two_smallest_numbers(input) << endl;
    return 0;
}