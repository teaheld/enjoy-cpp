/*
 * Write a function that interacts with the user
 * asking for a number and generating 
 * the factorial of that number.
 * Call this function from main.
 */

#include <iostream>

int user_fact() {
    int val, fact = 1;
    
    std::cin >> val;
    
    while (val > 1) {
        fact *= val--;
    }
    
    return fact;
}

int main() {
    std::cout << user_fact() << std::endl;
    
    return 0;
}
