/*
 * Extend the program that assigned high pass, pass and fail
 * to also assign low pass for grades between 60 and 75 inclusive.
 * Use only conditional operators.
 */

#include <iostream>

int main() {
    int grade = 67;
    
    std::string finalgrade = (grade > 90) ? "high pass"
                             : (grade > 75) ? "pass"
                             : (grade > 60) ? "low pass" : "fail";
                             
    std::cout << finalgrade << std::endl;
    
    return 0;
}
