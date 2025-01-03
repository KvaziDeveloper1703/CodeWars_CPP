/*
The rgb function is incomplete. Complete it so that passing in RGB decimal values will return a hexadecimal representation as a string. Valid decimal values for RGB range from 0 to 255. If a value falls outside this range, it should be rounded to the nearest valid value.

Note: The output must always be 6 characters long.

Examples:
255, 255, 255 → "FFFFFF"
255, 255, 300 → "FFFFFF"
0, 0, 0 → "000000"
148, 0, 211 → "9400D3"

Функция rgb не завершена. Дополните её, чтобы при передаче десятичных значений RGB возвращалось их шестнадцатеричное представление в виде строки. Допустимые десятичные значения для RGB находятся в диапазоне от 0 до 255. Если значение выходит за этот диапазон, его нужно округлить до ближайшего допустимого значения.

Примечание: Результат всегда должен содержать 6 символов.

Примеры:
255, 255, 255 → "FFFFFF"
255, 255, 300 → "FFFFFF"
0, 0, 0 → "000000"
148, 0, 211 → "9400D3"

https://www.codewars.com/kata/513e08acc600c94f01000001
*/

#include <iostream>
#include <string>
#include <cstdio>

std::string rgb_to_hex(int r, int g, int b) {
    r = (r < 0) ? 0 : (r > 255) ? 255 : r;
    g = (g < 0) ? 0 : (g > 255) ? 255 : g;
    b = (b < 0) ? 0 : (b > 255) ? 255 : b;

    char hex[7];
    std::sprintf(hex, "%02X%02X%02X", r, g, b);

    return std::string(hex);
}

int main() {
    std::cout << rgb_to_hex(255, 255, 255) << std::endl;
    std::cout << rgb_to_hex(255, 255, 300) << std::endl;
    std::cout << rgb_to_hex(148, 0, 211) << std::endl;
    return 0;
}