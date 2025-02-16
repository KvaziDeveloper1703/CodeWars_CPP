/*
Given a random non-negative number, return the digits of this number as an array in reverse order.

Дано случайное неотрицательное число. Необходимо вернуть цифры этого числа в массиве в обратном порядке.

https://www.codewars.com/kata/5583090cbe83f4fd8c000051
*/

#include <iostream>
#include <vector>

std::vector<int> digitize(long long given_number) {
    std::vector<int> digits;
    do {
        digits.push_back(given_number % 10);
        given_number /= 10;
    } while (given_number > 0);
    return digits;
}

int main() {
    std::vector<int> result = digitize(29398267540LL);
    for (int number : result) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}