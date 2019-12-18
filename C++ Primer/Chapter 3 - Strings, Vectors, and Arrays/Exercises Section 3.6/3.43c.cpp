/*
 * Print elements of arr[3][4] 
 * using pointers.
 */

#include <iostream>

int main() {
    
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    constexpr size_t rowCnt = 3, colCnt = 4;
    for (auto f = arr;
         f != arr + rowCnt;
         ++f) {
            for (auto s = *f;
                 s != *f + colCnt;
                 ++s) {
                    std::cout << *s << " ";
            }
            
            std::cout << std::endl;
    }
    
    return 0;
}
