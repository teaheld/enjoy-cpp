/*
 * Write a program to use a conditional operator 
 * to find the elements in a vector<int> that
 * have odd value and double the value of each such element.
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    
    for (auto it = v.begin();
         it != v.end();
         ++it) {
            *it = (*it % 2 == 1) ? *it * 2 : *it;
            
            std::cout << *it << std::endl;
    }
    
    
    return 0;
}
