#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, -1, -2};
    
    auto beg = v.begin();
    while (beg != v.end() && *beg > 0) {
        std::cout << *beg++ << std::endl;
    }
    
    return 0;
}
