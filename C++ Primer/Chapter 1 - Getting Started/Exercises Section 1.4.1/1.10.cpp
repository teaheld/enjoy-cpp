/*
 * Use the decrement operator to write a while
 * that prints the numbers from ten down to zero.
 */

#include <iostream>

int main() {
    int i = 10;
    
    while (i >= 0) {
        std::cout << i << std::endl;
        --i;
    }
    
    return 0;
}
