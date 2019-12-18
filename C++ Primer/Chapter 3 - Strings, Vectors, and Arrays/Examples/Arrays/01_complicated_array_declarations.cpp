

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int *ptrs[10]; // ptrs is an array of ten pointers to int
    
    // int &refs[10] no arrays of references
    
    int (*Parray)[10] = &arr; // Parray points to an array of ten ints
    
    int (&arrRef)[10] = arr; // arrRef refers to an array 
    
    return 0;
}
