#include <iostream>
#include <string>

int main() {
    std::string str("Hello World!!! What a cliche..");
    
    for (auto &c : str) {
        c = toupper(c);
    }
    
    std::cout << str << std::endl;
    
    return 0;
}
