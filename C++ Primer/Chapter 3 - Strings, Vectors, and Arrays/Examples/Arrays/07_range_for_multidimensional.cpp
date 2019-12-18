#include <iostream>

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int arr[rowCnt][colCnt]; 
    
    size_t cnt = 0;
    for (auto &row : arr) {
        for (auto &col : row) {
            col = cnt++;
            
            std::cout << col << std::endl;
        }
    }
    
    return 0;
}
