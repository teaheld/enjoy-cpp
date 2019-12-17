/*
 * Read a set of integers into a vector.
 * Print the sum of each pair of adjacent elements.
 */

#include <iostream>
#include <vector>

int main() {
    int val;
    std::vector<int> values;
    
    while (std::cin >> val) {
        values.push_back(val);
    }
    
    for (auto it = values.begin(); 
         it != values.end() - 1;
         ++it) {
            std::cout << *it + *(it + 1) << std::endl;
    }
    
    return 0;
}
