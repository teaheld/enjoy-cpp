/*
 * Print elements of arr[3][4] 
 * using range for.
 */

#include <iostream>

int main() {
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    for (const auto &row : arr) {
        for (auto col : row) {
            std::cout << col << " ";
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}
