#include <iostream>
#include <string>

int main() {
    std::string line;
    
    while (getline(std::cin, line)) {
        // Write only the lines that are longer than 80 characters
        if (line.size() > 80) {
            std::cout << line << std::endl;
        }
    }
    
    return 0;
}
