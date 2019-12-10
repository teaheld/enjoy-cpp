/*
 * Write a program to read the standard input 
 * a line at a time.
 */

#include <iostream>
#include <string>

int main() {
    std::string line;
    
    while (getline(std::cin, line)) { }
    
    return 0;
}
