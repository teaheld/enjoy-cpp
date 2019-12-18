#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, -1, 6, 7, 8, 9, 10};
    
    auto *beg = std::begin(arr); // pointer to the first element in arr
    auto *last = std::end(arr); // pointer one past the last element in arr
    
    while (beg != last && *beg >= 0) {
        ++beg;
    }
    
    std::cout << *beg << std::endl;
    
    return 0;
}
