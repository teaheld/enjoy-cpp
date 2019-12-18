#include <iostream>

int main() {
    using int_array = int[4];
    // typedef int int_array[4];
    
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    for (int_array *f = arr;
         f != arr + 3;
         ++f) {
            for (int *s = *f; 
                 s != *f + 4;
                 ++s) {
                    std::cout << *s << ' ';
            }
            
            std::cout << std::endl;
    }
}
