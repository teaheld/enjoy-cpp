/*
 * Write the condition for a while loop that
 * reads ints from standard input and stops
 * when the value read is eqaul to 42.
 */

#include <iostream>

int main() {
    int val;
    
    while (std::cin >> val && val != 42) {
        std::cout << val << std::endl;
    }
    
    return 0;
}
