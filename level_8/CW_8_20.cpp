/*
Create a function that accepts a parameter representing a name and returns the message:
"Hello, <name> how are you doing today?"

Создайте функцию, которая принимает параметр, представляющий имя, и возвращает сообщение:
"Hello, <имя> how are you doing today?"

https://www.codewars.com/kata/55a70521798b14d4750000a4
*/

#include <iostream>
#include <string>

std::string greet(const std::string& given_name) {
    return "Hello, " + given_name + " how are you doing today?";
}

int main() {
    std::string name = "Viktor";
    std::cout << greet(name) << std::endl;
    return 0;
}
