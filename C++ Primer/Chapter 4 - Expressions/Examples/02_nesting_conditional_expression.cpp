#include <iostream>

int main() {
    int grade = 67;
    
    std::string finalgrade = (grade > 90) ? "high pass"
                             : (grade < 60) ? "fail" : "pass";
                             
    std::cout << finalgrade << std::endl;
    
    return 0;
}
