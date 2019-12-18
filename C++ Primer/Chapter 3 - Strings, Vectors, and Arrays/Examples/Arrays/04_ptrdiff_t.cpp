#include <iostream>
#include <cstddef>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    auto n = std::end(arr) - std::begin(arr);
    
    std::cout << n << std::endl;
}
