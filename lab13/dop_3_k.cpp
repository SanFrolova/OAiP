
#include <iostream>
#include <sstream>
#include <set>
#include <string>

std::string removeDuplicateWords(const std::string& sentence) {
    std::istringstream stream(sentence);
    std::set<std::string> seenWords;
    std::string word;
    std::string result;

    while (stream >> word) {
        if (seenWords.find(word) == seenWords.end()) {
            seenWords.insert(word);
            if (!result.empty()) {
                result += " ";
            }
            result += word;
        }
    }

    return result;
}

int main() {setlocale(LC_ALL, "RU");
    std::string sentence = "Книга привет книга";
    std::string result = removeDuplicateWords(sentence);

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
