/*
 * Write a program to read a sequence of strings from cin
 * and store those values in a vector
 */

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string str;
    std::vector<std::string> strings;
    
    while (std::cin >> str) {
        strings.push_back(str);
    }
    
    return 0;
}
