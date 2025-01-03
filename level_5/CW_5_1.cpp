/*
Write an algorithm that takes an array and moves all zeros to the end while maintaining the order of the other elements. The input array can contain various data types. The relative order of non-zero elements must remain unchanged.

Example:
Input: [false, 1, 0, 1, 2, 0, 1, 3, "a"]
Output: [false, 1, 1, 2, 1, 3, "a", 0, 0]

Напишите алгоритм, который принимает массив и перемещает все нули в конец, сохраняя порядок остальных элементов. Входной массив может содержать различные типы данных. Относительный порядок ненулевых элементов должен быть неизменным.

Пример:
Ввод: [false, 1, 0, 1, 2, 0, 1, 3, "a"]
Вывод: [false, 1, 1, 2, 1, 3, "a", 0, 0]

https://www.codewars.com/kata/52597aa56021e91c93000cb0
*/

#include <vector>
#include <iostream>

std::vector<int> move_zeroes(const std::vector<int>& input) {

    std::vector<int> result;
    int zero_count = 0;

    for (int num : input) {
        if (num != 0) {
            result.push_back(num);
        } else {
            zero_count++;
        }
    }

    result.insert(result.end(), zero_count, 0);

    return result;
}

int main() {
    std::vector<int> input = {0, 1, 0, 3, 12};
    std::vector<int> output = move_zeroes(input);

    for (int num : output) {
        std::cout << num << " ";
    }

    return 0;
}