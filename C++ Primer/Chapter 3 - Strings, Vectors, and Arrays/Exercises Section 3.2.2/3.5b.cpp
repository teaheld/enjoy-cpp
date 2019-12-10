/*
 * Write a program to read strings from standard input
 * concatenating what is read into one large string
 * separating adjacent input strings by a space.
 * Print the concatenated string.
 */

#include <iostream>
#include <string>

int main() {
    std::string s, concatenated;
    
    while (std::cin >> s) {
        concatenated += s + " ";
    }
    
    std::cout << concatenated << std::endl;
    
    return 0;
}
