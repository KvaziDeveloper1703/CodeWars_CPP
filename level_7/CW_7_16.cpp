/*
Take two strings s1 and s2, which contain only lowercase letters from a to z. Return a new string that is sorted in ascending alphabetical order and contains only distinct letters, each appearing only once. The result should include letters from both s1 and s2.

Example:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) → "abcdefklmopqwxy"

Даны две строки s1 и s2, содержащие только строчные буквы от a до z. Верните новую строку, отсортированную в алфавитном порядке по возрастанию, содержащую только уникальные буквы – каждая буква должна встречаться в результате только один раз. В итоговой строке должны быть буквы из s1 и s2.

Примеры:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) → "abcdefklmopqwxy"
*/

#include <iostream>
#include <string>
#include <set>

std::string longest(const std::string& s1, const std::string& s2) {
    std::set<char> unique_chars(s1.begin(), s1.end());
    unique_chars.insert(s2.begin(), s2.end());
    return {unique_chars.begin(), unique_chars.end()};
}

int main() {
    std::cout << longest("xyaabbbccccdefww", "xxxxyyyyabklmopq") << std::endl;
    return 0;
}