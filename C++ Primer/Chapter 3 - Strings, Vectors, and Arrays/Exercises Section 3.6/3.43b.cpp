/*
 * Print elements of arr[3][4] 
 * using ordinary for.
 */

#include <iostream>

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int arr[rowCnt][colCnt] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    for (size_t i = 0;
         i < rowCnt;
         ++i) {
            for (size_t j = 0;
                 j < colCnt;
                 ++j) {
                    std::cout << arr[i][j] << " ";
            }
            
            std::cout << std::endl;
    }
    
    return 0;
}
