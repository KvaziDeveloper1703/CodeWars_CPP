/*
Create a Hashtag Generator with the following rules:
    - The result must begin with a hashtag #;
    - Each word in the input must be capitalized:
        - first letter uppercase;
        - remaining letters lowercase.
    - All words are joined together without spaces;
    - If the final hashtag is longer than 140 characters, return std::nullopt;
    - If the input is empty, or the resulting hashtag is empty, return std::nullopt.

Создайте генератор хэштегов со следующими правилами:
    - Результат должен начинаться с символа #;
    - Каждое слово должно быть записано с заглавной буквы:
        - первая буква - заглавная;
        - остальные - строчные.
    - Все слова объединяются в одну строку без пробелов;
    - Если длина итогового хэштега превышает 140 символов, нужно вернуть std::nullopt;
    - Если входная строка пустая или итоговый хэштег получился пустым, нужно вернуть std::nullopt.
*/

#include <optional>
#include <string>
#include <sstream>
#include <cctype>

using str_t = std::string;
using opt_str_t = std::optional<str_t>;

opt_str_t generate_hashtag(const str_t& str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "#";
    bool hasWord = false;

    while (ss >> word) {
        hasWord = true;

        for (char& c : word) c = std::tolower(c);
        word[0] = std::toupper(word[0]);

        result += word;
    }

    if (!hasWord) return std::nullopt;
    if (result.empty() || result.size() > 140) return std::nullopt;

    return result;
}