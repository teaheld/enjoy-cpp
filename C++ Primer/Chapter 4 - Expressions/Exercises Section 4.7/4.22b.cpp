/*
 * Extend the program that assigned high pass, pass and fail
 * to also assign low pass for grades between 60 and 75 inclusive.
 * Use only if statements.
 */

#include <iostream>

int main() {
    int grade = 67;
    
    std::string finalgrade;
    if (grade > 90) {
        finalgrade = "high pass";
    } else if (grade > 75) {
        finalgrade = "pass";
    } else if (grade > 60) {
        finalgrade = "low pass";
    } else {
        finalgrade = "fail";
    }
                             
    std::cout << finalgrade << std::endl;
    
    return 0;
}
