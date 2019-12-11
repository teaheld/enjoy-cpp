#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string word;
    std::vector<std::string> text;
    
    while (std::cin >> word) {
        text.push_back(word);
    }
    
    return 0;
}
