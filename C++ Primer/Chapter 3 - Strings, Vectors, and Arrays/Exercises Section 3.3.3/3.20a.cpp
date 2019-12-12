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
    
    for (decltype(values.size()) i = 0;
         i != values.size();
         ++i) {
            if((i + 1) != values.size()) {
                std::cout << values[i] + values[i + 1] << std::endl;
            }
    }
    
    return 0;
}
