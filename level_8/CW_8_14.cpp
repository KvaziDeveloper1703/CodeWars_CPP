/*
You are given an array of sheep, where some sheep may be missing from their place. Your task is to write a function that counts the number of sheep present in the array. The value true means the sheep is present.

Дан массив овец, где некоторые овцы могут отсутствовать. Ваша задача — написать функцию, которая считает количество присутствующих овец. Значение true означает, что овца на месте.

https://www.codewars.com/kata/54edbc7200b811e956000556
*/

#include <iostream>
#include <vector>

int count_sheep(const std::vector<bool>& given_sheep_array) {
    int count = 0;
    for (bool sheep : given_sheep_array) {
        if (sheep) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<bool> sheep_array = {true, true, true, false,
                                    true, true, true, true,
                                    true, false, true, false,
                                    true, false, false, true,
                                    true, true, true, true,
                                    false, false, true, true};
    
    std::cout << "Number of sheeps: " << count_sheep(sheep_array) << std::endl;
    return 0;
}