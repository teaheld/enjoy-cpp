#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7};
    int sought = 3;
    
    auto beg = v.begin(), end = v.end();
    auto mid = v.begin() + (end - beg) / 2;
    
    while (mid != end && *mid != sought) {
        if (sought < *mid) {
            end = mid;
        }
        else {
            beg = mid + 1;
        }
        
        mid = beg + (end - beg) / 2;
    }
    
    return 0;
}
