/*
Create a function that takes an array of names and returns a string describing who likes an item. The format of the output depends on the number of names in the array:

Rules:
+ If the array is empty, return "no one likes this".
+ If the array contains one name, return "<Name> likes this".
+ If the array contains two names, return "<Name1> and <Name2> like this".
+ If the array contains three names, return "<Name1>, <Name2> and <Name3> like this".
+ If the array contains four or more names, return "<Name1>, <Name2> and <Number> others like this", where <Number> is the count of remaining names.

Examples:
Input: [] → Output: "no one likes this"
Input: ["Peter"] → Output: "Peter likes this"
Input: ["Jacob", "Alex"] → Output: "Jacob and Alex like this"
Input: ["Max", "John", "Mark"] → Output: "Max, John and Mark like this"
Input: ["Alex", "Jacob", "Mark", "Max"] → Output: "Alex, Jacob and 2 others like this"

Создайте функцию, которая принимает массив имён и возвращает строку, описывающую, кто поставил "лайк" объекту. Формат вывода зависит от количества имён в массиве:

Правила:
+ Если массив пустой, вернуть "no one likes this".
+ Если в массиве одно имя, вернуть "<Имя> likes this".
+ Если в массиве два имени, вернуть "<Имя1> and <Имя2> like this".
+ Если в массиве три имени, вернуть "<Имя1>, <Имя2> and <Имя3> like this".
+ Если в массиве четыре и более имён, вернуть "<Имя1>, <Имя2> and <Число> others like this", где <Число> — количество оставшихся имён.

Примеры:
Ввод: [] → Вывод: "no one likes this"
Ввод: ["Peter"] → Вывод: "Peter likes this"
Ввод: ["Jacob", "Alex"] → Вывод: "Jacob and Alex like this"
Ввод: ["Max", "John", "Mark"] → Вывод: "Max, John and Mark like this"
Ввод: ["Alex", "Jacob", "Mark", "Max"] → Вывод: "Alex, Jacob and 2 others like this"

https://www.codewars.com/kata/5266876b8f4bf2da9b000362
*/

#include <iostream>
#include <vector>
#include <string>

std::string likes(const std::vector<std::string>& names) {
    size_t count = names.size();

    if (count == 0) {
        return "no one likes this";
    } else if (count == 1) {
        return names[0] + " likes this";
    } else if (count == 2) {
        return names[0] + " and " + names[1] + " like this";
    } else if (count == 3) {
        return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else {
        return names[0] + ", " + names[1] + " and " + std::to_string(count - 2) + " others like this";
    }
}

int main() {
    std::vector<std::string> names;
    std::string name;

    std::cout << "Enter names (type 'done' to finish):" << std::endl;
    while (true) {
        std::getline(std::cin, name);
        if (name == "done") {
            break;
        }
        names.push_back(name);
    }

    std::cout << likes(names) << std::endl;

    return 0;
}