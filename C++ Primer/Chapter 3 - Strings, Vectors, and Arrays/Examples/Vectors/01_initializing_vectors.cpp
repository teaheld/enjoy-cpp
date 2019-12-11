#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> ivec; // initally empty
    
    // give ivec some values
    std::vector<int> ivec2(ivec); // copy elements of ivec into ivec2
    std::vector<int> ivec3 = ivec; // copy elements of ivec into ivec3
    
    std::vector<std::string> articles = {"a", "an", "the"};
    
    std::vector<int> ivecc(10, -1); // ten int elements, each initialized to -1
    std::vector<std::string> svec(10, "hi!"); // ten strings; each element is "hi!"
    
    std::vector<int> ivec11(10); // ten elements, each initialized to 0
    std::vector<std::string> svec1(10); // ten elements, each an empty string
    
    std::vector<std::string> v9{10, "hi"};
    std::cout << v9[2] << std::endl;
    
    return 0;
}
