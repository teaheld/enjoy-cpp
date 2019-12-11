/*
 * Write a program to read a sequence of ints from cin
 * and store those values in a vector
 */

#include <iostream>
#include <vector>

int main() {
    int val;
    std::vector<int> values;
    
    while (std::cin >> val) {
        values.push_back(val);
    }
    
    return 0;
}
