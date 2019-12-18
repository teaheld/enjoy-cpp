#include <iostream>

int main() {
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    // f points to the first array in arr
    for (auto f = std::begin(arr);
         f != std::end(arr);
         ++f) {
            // s points to the second array in arr
            for (auto s = std::begin(*f);
                 s != std::end(*f);
                 ++s) {
                    std::cout << *s << ' ';
            }
            
            std::cout << std::endl;
    }
    
    
    
    return 0;
}
