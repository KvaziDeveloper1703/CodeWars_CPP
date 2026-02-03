/*
You are given an array of integers.
Your task is to find the largest possible sum of a contiguous subarray.
A subarray must consist of consecutive elements from the original array.

Rules:
    - If all numbers are positive, the answer is the sum of the entire array;
    - If all numbers are negative, return 0;
    - An empty array has a maximum sum of 0;
    - The empty subarray is considered valid and has sum 0;
    - Your algorithm must be efficient, since it will be tested on very large arrays. Slow solutions may time out.

Дан массив целых чисел.
Необходимо найти максимальную сумму непрерывного подмассива.
Подмассив должен состоять из подряд идущих элементов исходного массива.

Правила:
    - Если все числа положительные, ответ - сумма всего массива;
    - Если все числа отрицательные, вернуть 0;
    - Пустой массив имеет максимальную сумму 0;
    - Пустой подмассив допустим и имеет сумму 0;
    - Решение должно быть быстрым, так как тесты включают очень большие массивы. Медленные алгоритмы не пройдут по времени.
*/

#include <stddef.h>

int max_sequence(const int array[], size_t n) {
    int max_sum = 0;
    int current_sum = 0;

    for (size_t i = 0; i < n; ++i) {
        current_sum += array[i];

        if (current_sum < 0)
            current_sum = 0;

        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    return max_sum;
}