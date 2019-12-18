int main() {
    int arr[3][4]; // array of size 3; each element is an array of ints of size 4
    
    // array of size 10; each element is a 20-element array 
    // whose elements are arrays of 30 ints
    int arr1[10][20][30] = {0}; // initialize all elements to 0
    
    int arr2[3][4] = {
        {0, 1, 2, 3}, // first row
        {4, 5, 6, 7}, // second row
        {8, 9, 10, 11} // third row
    };
    // the next array has the same values as the previous
    int arr3[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    // explicitly initialize only element 0 in each row
    int arr4[3][4] = { { 0 }, { 4 }, { 8 } };
    
    // explicitly initialize row 0
    int ix[3][4] = {0, 3, 6, 9};
    
    return 0;
}
