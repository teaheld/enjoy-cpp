#include <string>
#include <iostream>

int main() {
    /*
     * Direct initialization:
     */
    std::string s1; // default initialization; s1 is the empty string
    std::string s2("hiya"); // s2 is a copy of the string literal
    std::string s3(10, 'c'); // s3 is cccccccccc
    
    /*
     * Copy initialization:
     */
    std::string s4 = s1; // s4 is a copy of s1
    std::string s5 = "hiya"; // s5 is a copy of the string literal
    
    return 0;
}
