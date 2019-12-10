/*
 * Write a program to read two strings
 * and report whether the strings are equal.
 * If not, report which of them is larger.
 */

#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    
    std::cin >> s1 >> s2;
    
    if (s1 != s2) {
        std::cout << "Strings are not equal." << std::endl 
                  << (s1 > s2 ? "s1 " : "s2 ") << "is larger."
                  << std::endl;
    } else {
        std::cout << "Strings are equal." << std::endl;
    }
}
