/*
Write a function that transforms a given sentence according to the following rules:

Move the first letter of each word to the end of the word.
+ Append "ay" to the end of the word.
+ Leave punctuation marks (!, ., ,, etc.) untouched.

Examples:
Input: 'Pig latin is cool'
Output: 'igPay atinlay siay oolcay'

Input: 'Hello world !'
Output: 'elloHay orldway !'

Напишите функцию, которая преобразует переданное предложение по следующим правилам:

+ Переместите первую букву каждого слова в конец слова.
+ Добавьте "ay" в конец слова.
+ Знаки пунктуации (!, ., , и т.д.) не изменяйте.

Примеры:
Ввод: 'Pig latin is cool'
Вывод: 'igPay atinlay siay oolcay'

Ввод: 'Hello world !'
Вывод: 'elloHay orldway !'

https://www.codewars.com/kata/520b9d2ad5c005041100000f
*/

#include <string>
#include <sstream>
#include <cctype>
#include <iostream>

std::string pig_it(std::string str) {
    std::istringstream iss(str);
    std::ostringstream oss;
    std::string word;

    while (iss >> word) {
        if (std::isalpha(word[0])) {
            std::string transformed = word.substr(1) + word[0] + "ay";
            oss << transformed;
        } else {
            oss << word;
        }

        if (iss.peek() != EOF) {
            oss << " ";
        }
    }

    return oss.str();
}

int main() {
    std::string input1 = "Pig latin is cool";
    std::string input2 = "Hello world !";

    std::cout << pig_it(input1) << std::endl;
    std::cout << pig_it(input2) << std::endl;

    return 0;
}