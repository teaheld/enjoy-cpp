/*
 * Print elements of arr[3][4] 
 * using a type alias.
 */

#include <iostream>

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int arr[rowCnt][colCnt] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    using int_array = int[4];
    for (int_array *f = arr;
         f != arr + rowCnt;
         ++f) {
            for (int *s = *f;
                 s != *f + colCnt;
                 ++s) {
                    std::cout << *s << " ";
            }
            
            std::cout << std::endl;
    }
    
    return 0;
}
