/*
 * Write a program to define a vector of ten ints.
 * Give each element the same value as its position int the vector.
 * Copy that vector into another.
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    
    for (size_t i = 0;
         i != 10;
         ++i) {
            v.push_back(i);
    }
    
    std::vector<int> copy_v;
    
    for (auto it = v.begin();
         it != v.end();
         ++it) {
            copy_v.push_back(*it);
            
            std::cout << *it << std::endl;
    }
    
    for (auto it = copy_v.begin();
         it != copy_v.end();
         ++it) {
            std::cout << *it << std::endl;
    }
    
    return 0;
}
