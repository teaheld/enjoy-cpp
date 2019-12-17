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
    
    auto beg = values.begin();
    auto end = values.rbegin();
    for ( ;
         beg != values.begin() + (values.end() - values.begin()) / 2;
         ++beg, ++end) {
            std::cout << *beg + *end << std::endl;
    }

    if ((values.end() - values.begin()) % 2) {
        std::cout << *beg << std::endl;
    }
    
    return 0;
}
