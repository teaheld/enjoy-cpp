/*
 * Write a program that prompts the user for two integers.
 * Print each number in the range 
 * specified by those two integers.
 */

#include <iostream>

int main() {
    std::cout << "Enter two integers:" << std::endl;
    
    int first = 0, last = 1;
    std::cin >> first >> last;
    while(first <= last) {
        std::cout << first << std::endl;
        ++first;
    }
    
    return 0;
}
