/*
 * Use a traditional for loop to change all the characters in a string to X.
 */

#include <iostream>
#include <string>

int main() {
    std::string str("Some string");
    
    for (decltype(str.size()) i = 0;
         i < str.size();
         ++i) {
            str[i] = 'X';
    }
    
    std::cout << str << std::endl;

    return 0;
}
