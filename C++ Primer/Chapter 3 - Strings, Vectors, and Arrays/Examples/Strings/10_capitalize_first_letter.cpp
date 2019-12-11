#include <iostream>
#include <string>

int main() {
    std::string str("some string");
    
    // if (!str.empty()) 
    str[0] = std::toupper(str[0]);
    
    std::cout << str << std::endl;
    
    return 0;
}
