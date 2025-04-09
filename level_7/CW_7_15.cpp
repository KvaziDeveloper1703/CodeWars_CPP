/*
Write a program that filters a list of strings and returns a list containing only your friends' names.
A name is considered a friend's name if it consists of exactly 4 letters. Otherwise, it is not a friend's name.

Example:
Input: ["Ryan", "Kieran", "Jason", "Yous"]
Output: ["Ryan", "Yous"]

Напишите программу, которая фильтрует список строк и возвращает список, содержащий только имена ваших друзей.
Имя считается именем друга, если оно состоит ровно из 4 букв. В противном случае это не имя друга.

Пример:
Input: ["Ryan", "Kieran", "Jason", "Yous"]
Output: ["Ryan", "Yous"]

https://www.codewars.com/kata/55b42574ff091733d900002f
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> friend_or_foe(const std::vector<std::string>& given_names) {
    std::vector<std::string> friends;
    for (const std::string& name : given_names) {
        if (name.length() == 4) {
            friends.push_back(name);
        }
    }
    return friends;
}

int main() {
    std::vector<std::string> input = {"Ryan", "Kieran", "Jason", "Yous"};
    std::vector<std::string> output = friend_or_foe(input);
    
    std::cout << "Output: ";
    for (const std::string& name : output) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
    
    return 0;
}