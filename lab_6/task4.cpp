//
// Created by danil on 14.10.2025.
//
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

std::map<std::string, int> wordsMapCounter(const std::string &);

int main() {
    std::map<std::string,int> words=wordsMapCounter("can you you f f f.f.can");
    for (std::map<std::string,int>::iterator it=words.begin(); it!=words.end(); ++it) {
        std::cout << (*it).first << " "<< (*it).second<<std::endl;
    }
    //std::cout << words["can"]<<std::endl;
    //std::cout << words["you"]<<std::endl;
    return 0;
}

std::map<std::string, int> wordsMapCounter(const std::string &str) {
    std::string low_str=str;
    for (char &c : low_str)
        c = std::tolower(c);
    std::map<std::string, int> wordsMap;
    std::string::const_iterator it = low_str.begin();
    std::string word;
    for (it; it != low_str.end(); ++it) {
        if (*it != ' ' && *it != ',' && *it != '.') {
            word+=*it;
        }
        else {
            if (!word.empty()) {
                if (wordsMap.find(word) == wordsMap.end()) wordsMap.insert({word,1});
                else wordsMap[word]++;
            };
            word.clear();
        }
    }
    if (!word.empty()) {
        if (wordsMap.find(word) == wordsMap.end()) wordsMap.insert({word,1});
        else wordsMap[word]++;
    }
    return wordsMap;
}
