//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>


int main() {
    std::string sentence;
    std::cout << "sentence = "; std::getline(std::cin,sentence);
    int amount_a=0, amount_symb=0;
    for (int i = 0 ; i < sentence.length(); i++) {
        if (sentence[i]=='a' || sentence[i]=='A') amount_a++;
        else if (sentence[i]==' ' || sentence[i]==',' || sentence[i]=='.' || sentence[i]==';' || sentence[i]=='!' || sentence[i]=='?' || sentence[i]=='-' || sentence[i]==':') amount_symb++;
    }
    std::cout<<100*amount_a/(sentence.length()-amount_symb)<<"%";
    return 0;
}