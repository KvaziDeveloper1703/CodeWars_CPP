/*
Write a function dirReduc that takes an array of strings representing directions and simplifies it by removing pairs of opposite directions that cancel each other out when they are adjacent.

Rules:
+ Directions that are directly opposite (e.g., "NORTH" and "SOUTH") cancel each other out.
+ The order of directions is important, so only adjacent opposites are removed.
+ If the path is not reducible, return the path as is.

Examples:
Input: ["NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"]
Output: ["WEST"]

Input: ["NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"]
Output: ["WEST", "WEST"]

Input: ["NORTH", "WEST", "SOUTH", "EAST"]
Output: ["NORTH", "WEST", "SOUTH", "EAST"]

Напишите функцию dirReduc, которая принимает массив строк, представляющих направления, и упрощает его, удаляя пары противоположных направлений, если они идут друг за другом.

Правила:
+ Направления, которые противоположны (например, "NORTH" и "SOUTH"), взаимно уничтожаются.
+ Важен порядок направлений — удаляются только соседние противоположные.
+ Если путь нельзя упростить, верните его без изменений.

Примеры:
Ввод: ["NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"]
Вывод: ["WEST"]

Ввод: ["NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"]
Вывод: ["WEST", "WEST"]

Ввод: ["NORTH", "WEST", "SOUTH", "EAST"]
Вывод: ["NORTH", "WEST", "SOUTH", "EAST"]

https://www.codewars.com/kata/550f22f4d758534c1100025a
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class DirReduction {
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr) {

        std::vector<std::string> stack;
        std::unordered_map<std::string, std::string> opposites = {
            {"NORTH", "SOUTH"},
            {"SOUTH", "NORTH"},
            {"EAST", "WEST"},
            {"WEST", "EAST"}
        };

        for (const auto &dir : arr) {
            if (!stack.empty() && stack.back() == opposites[dir]) {
                stack.pop_back();
            } else {
                stack.push_back(dir);
            }
        }

        return stack;
    }
};



int main() {
    std::vector<std::string> path1 = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
    std::vector<std::string> path2 = {"NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"};
    std::vector<std::string> path3 = {"NORTH", "WEST", "SOUTH", "EAST"};

    std::vector<std::string> result1 = DirReduction::dirReduc(path1);
    std::vector<std::string> result2 = DirReduction::dirReduc(path2);
    std::vector<std::string> result3 = DirReduction::dirReduc(path3);

    for (const auto &dir : result1) std::cout << dir << " ";
    std::cout << std::endl;

    for (const auto &dir : result2) std::cout << dir << " ";
    std::cout << std::endl;

    for (const auto &dir : result3) std::cout << dir << " ";
    std::cout << std::endl;

    return 0;
}