/*
 * Use a range for to change all the characters in a string to X.
 */

#include <iostream>
#include <string>

int main() {
    std::string str("Some string");
    
    for (auto &c : str) {
            c = 'X';
    }
    
    std::cout << str << std::endl;
    
    return 0;
}
