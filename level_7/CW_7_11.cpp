/*
Write a function that return the length of the shortest word(s) in the string.
It is guaranteed that the string will never be empty, and you do not need to account for different data types.

Напишите функцию, которая возвращает длину самого короткого слова(слов) в строке.
Гарантируется, что строка никогда не будет пустой, и нет необходимости учитывать разные типы данных.

https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9
*/

#include <iostream>
#include <string>
using namespace std;

int find_the_shortest_word_length(const string& given_string) {
    int min_length = given_string.length();
    int current_length = 0;
    
    for (char character : given_string) {
        if (character == ' ') {
            if (current_length > 0 && current_length < min_length) {
                min_length = current_length;
            }
            current_length = 0;
        } else {
            current_length++;
        }
    }
    
    if (current_length > 0 && current_length < min_length) {
        min_length = current_length;
    }
    
    return min_length;
}

int main() {
    string input = "The quick brown fox jumps over the lazy dog";
    cout << "Length of the shortest word: " << find_the_shortest_word_length(input) << endl;
    return 0;
}