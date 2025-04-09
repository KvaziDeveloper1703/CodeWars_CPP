/*
Nathan loves cycling. Since he knows it's important to stay hydrated, he drinks 0.5 litres of water per hour of cycling.
You are given the time in hours, and you need to return the number of litres Nathan will drink, rounded down to the nearest whole number.

Нэйтан любит кататься на велосипеде.Так как он знает, что важно оставаться гидратированным, он выпивает 0.5 литра воды за каждый час езды.
Вам дано время в часах, и необходимо вернуть количество литров, округлённое вниз до целого числа.

https://www.codewars.com/kata/582cb0224e56e068d800003c
*/

#include <iostream>

int calculate_litres(double given_time) {
    return static_cast<int>(given_time * 0.5); // Use static_cast<int> to convert the result of given_time * 0.5 (a floating-point number) to an integer by truncating the decimal part.
}

int main() {
    double hours = 6.7;
    std::cout << calculate_litres(hours) << std::endl;
    return 0;
}

