//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>

int main()
{
    std::string town1, town2, town3, the_longest, the_shortest;
    std::cout<<"town 1 = "; std::cin >> town1; std::cout<<"town 2 = "; std::cin>>town2; std::cout<<"town 3 = "; std::cin>>town3;
    int longest = std::max(std::max(town1.length(), town2.length()), town3.length());
    int shortest = std::min(std::min(town1.length(), town2.length()), town3.length());
    if (town1.length() == longest) the_longest = town1;
    if (town1.length() == shortest) the_shortest = town1;
    if (town2.length() == longest) the_longest = town2;
    if (town2.length() == shortest) the_shortest = town2;
    if (town3.length() == longest) the_longest = town3;
    if (town3.length() == shortest) the_shortest = town3;
    std::cout << "the_longest - " << the_longest << std::endl;
    std::cout << "the_shortest - " << the_shortest << std::endl;
    return 0;
}