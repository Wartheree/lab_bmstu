//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>


int main() {
    std::string sentence = "Can you can a can as a canner can can a can?";
    std::string new_word;
    std::cout<<"new_word = "; std::cin >> new_word;
    for (int i=0; i<sentence.length()-3; i++) {
        if ((sentence[i] == 'c' || sentence[i] == 'C') && sentence[i+1] == 'a' && sentence[i+2] == 'n') {
            bool flag=true;
            for (int j=97;j<123;j++) if (sentence[i+3]==char(j)) {flag=false; break;}
            if (flag==true) {
                sentence.erase(i,3);
                sentence.insert(i,new_word);
            }

        }
    }
    std::cout<<sentence<<std::endl;
    return 0;
}