#include <iostream>
#include <string>

int main() {
    std::string str("Hello World");
    
    for (decltype(str.size()) i = 0;
         i != str.size() && !isspace(str[i]);
         ++i) {
            str[i] = std::toupper(str[i]);
    }
    
    std::cout << str << std::endl;
    
    return 0;
}
