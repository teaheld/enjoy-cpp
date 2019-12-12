/*
 * Write a program that reads a string of characters including punctuation
 * and writes what was read
 * but with the punctuation removed.
 */

#include <iostream>
#include <string>

int main() {
    std::string str;
    
    std::cin >> str;
    
    std::string result;
    for (auto &c : str) {
        if(!ispunct(c)) {
            result += c;
        }
    }
    
    std::cout << result << std::endl;
    
    return 0;
}
