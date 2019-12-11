#include <iostream>
#include <string>

int main() {
    std::string line;
    
    while (getline(std::cin, line)) {
        // Write only the lines that are not empty
        if (!line.empty()) {
            std::cout << line << std::endl;
        }
    }
    
    return 0;
}
