/*
 * Write a program to read two strings
 * and report whether the strings have the same length
 * and if not, report which is longer.
 */

#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    
    std::cin >> s1 >> s2;
    
    if (s1.size() == s2.size()) {
        std::cout << "Strings have the same length." << std::endl;
    } else {
        std::cout << "Strings do not have the same length." << std::endl
                  << (s1.size() > s2.size() ? "s1 " : "s2 ") << "is longer."
                  << std::endl;
    }
    
    return 0;
}
