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
         i != values.size() - 1;
         ++i) {
            std::cout << values[i] + values[i + 1] << std::endl;
    }
    
    return 0;
}
