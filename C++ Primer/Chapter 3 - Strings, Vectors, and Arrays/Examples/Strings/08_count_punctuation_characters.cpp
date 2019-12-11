#include <iostream>
#include <string>

int main() {
    std::string str("Hi! It's me! Have you met me already?");
    
    decltype(str.size()) punct_cnt = 0;
    
    for (auto c : str) {
        if (ispunct(c)) {
            ++punct_cnt;
        }
    }   
    
    std::cout << punct_cnt << std::endl;
    
    return 0;
}
