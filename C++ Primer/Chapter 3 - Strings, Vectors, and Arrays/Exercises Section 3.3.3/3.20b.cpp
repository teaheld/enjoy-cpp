/*
 * Read a set of integers into a vector.
 * Print the sum of the first and last elements,
 * followed by the sum of the second and second to last..
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
         i != values.size() / 2;
         ++i) {
             std::cout << values[i] + values[values.size() - i - 1] << std::endl;
    }
    
    return 0;
}
