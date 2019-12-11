#include <iostream>
#include <string>

int main() {
    std::string str("something");
    
    // print the characters in str 
    // one character to a line
    for (auto c : str) {
        std::cout << c << std::endl;
    }
    
    return 0;
}
