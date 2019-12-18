/*
 * Write a program to define an array of ten ints.
 * Give each element the same value as its position int the array.
 * Copy that array into another.
 */

#include <iostream>
#include <cstddef>

int main() {
    int arr[10];
    
    for (size_t i = 0;
         i != 10;
         ++i) {
            arr[i] = i;
    }
    
    int copy_arr[10];
    
    for (size_t i = 0;
         i != 10;
         ++i) {
            copy_arr[i] = arr[i];
            
            std::cout << copy_arr[i] << std::endl;
    }
    
    return 0;
}
