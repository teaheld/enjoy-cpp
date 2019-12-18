/*
 * Write a program to define an array of ten ints.
 * Give each element the same value as its position int the array.
 */

#include <iostream>
#include <cstddef>

int main() {
    int arr[10];
    
    for (size_t i = 0;
         i != 10;
         ++i) {
            arr[i] = i;
            
            std::cout << arr[i] << std::endl;
    }
    
    return 0;
}
