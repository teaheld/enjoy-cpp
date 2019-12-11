/*
 * Use a while to change all the characters in a string to X.
 */

#include <iostream>
#include <string>

int main() {
    std::string str("Some string");
    
    decltype(str.size()) i = 0;
    while (i < str.size()) {
        str[i] = 'X';
        ++i;
    }
    
    std::cout << str << std::endl;
    
    return 0;
}
