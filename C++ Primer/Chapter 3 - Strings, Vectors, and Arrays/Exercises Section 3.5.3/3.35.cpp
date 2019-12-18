/*
 * Using pointers, write a program to 
 * set the elements in an array to zero.
 */

#include <iostream>

int main() {
    int arr[10];
    
    for (auto it = std::begin(arr);
         it != std::end(arr);
         ++it) {
            *it = 0;
            
            std::cout << *it << std::endl;
    }

    return 0;
}
