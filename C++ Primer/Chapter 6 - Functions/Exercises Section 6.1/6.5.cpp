/*
 * Write a function to return the absolute value
 * of its argument.
 */

#include <iostream>

int abs_val(int val) {
    return (val < 0) ? -val : val;
}

int main() {
    int val;
    
    std::cin >> val;
    
    std::cout << abs_val(val) << std::endl;
    
    return 0;
}
