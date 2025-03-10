/*
Complete the function so that it returns true if the first argument (a string) ends with the second argument (also a string). Otherwise, return false.

Examples:
solution('abc', 'bc')  # True
solution('abc', 'd')   # False

Дополните функцию так, чтобы она возвращала true, если первая строка заканчивается на вторую строку. В противном случае функция должна вернуть false.

Примеры:
solution('abc', 'bc')  # True
solution('abc', 'd')   # False
*/

#include <iostream>
#include <string>

bool solution(const std::string& str, const std::string& ending) {
    int str_length = str.length();
    int ending_length = ending.length();
    
    if (ending_length > str_length) {
        return false;
    }
    
    for (int i = 0; i < ending_length; i++) {
        if (str[str_length - ending_length + i] != ending[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << solution("abc", "bc") << std::endl;
    std::cout << solution("abc", "d") << std::endl;
    return 0;
}
