#include <iostream>

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int arr[rowCnt][colCnt]; 
    
    // for each row
    for (size_t i = 0;
         i != rowCnt;
         ++i) {
            // for each column within the row
            for (size_t j = 0;
                 j != colCnt;
                 ++j) {
                    // assign the element's positional index as its value
                    arr[i][j] = i * colCnt + j;
                    
                    std::cout << arr[i][j] << " ";
            }
            
            std::cout << std::endl;
    }
    
    return 0;
}
