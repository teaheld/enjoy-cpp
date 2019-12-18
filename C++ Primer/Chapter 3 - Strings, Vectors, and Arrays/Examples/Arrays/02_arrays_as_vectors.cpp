#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int *e = &arr[10]; // pointer just past the last element in arr
    
    for (int *b = arr; 
         b != e;
         ++b) {
            std::cout << *b << std::endl;
    }
    
    return 0;
}
