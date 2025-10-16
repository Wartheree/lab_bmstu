//
// Created by danil on 14.10.2025.
//

#include <string>
#include <cctype>
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> uniqueWords(const std::string& );

int main() {
    std::vector<std::string> unique = uniqueWords("Can you can");
    for (auto it=unique.begin(); it!=unique.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}
std::vector<std::string> uniqueWords(const std::string& str) {
    std::string low_str=str;
    for (char &c : low_str)
        c = std::tolower(c);
    std::vector<std::string> unique;
    std::string::const_iterator it = low_str.begin();
    std::string word;
    for (it; it != low_str.end(); ++it) {
        if (*it != ' ' && *it != ',' && *it != '.') {
            word+=*it;
        }
        else {
            if (!word.empty()) {
                if (std::find(unique.begin(),unique.end(),word)==unique.end()) unique.push_back(word);
            };
            word.clear();
        }
    }
    if (!word.empty()) {
        if (std::find(unique.begin(),unique.end(),word)==unique.end()) unique.push_back(word);
    }
    return unique;

}