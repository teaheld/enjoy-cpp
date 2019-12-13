#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> text{"Tea", "is", "a", "queen", "", "Do", "you", "agree"};
    
    for (auto it = text.cbegin();
         it != text.cend() && !it->empty();
         ++it) {
            std::cout << *it << std::endl;
    }
    
    return 0;
}
