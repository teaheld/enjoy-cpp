/*
 * The following code
 * std::cout << "The sum of " << v1;
 *           << " and " << v2;
 *           << " is " << v1 + v2 << std::endl;
 * fixed to work.
 */

#include <iostream>

int main() {
    int v1 = 3, v2 = 5;
    
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    
    return 0;
}
