#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int>::iterator it; // it can read and write
    std::string::iterator it2; // read and write
    
    std::vector<int>::const_iterator it3; // only read
    std::string::const_iterator it4; // only read
    
    return 0;
}
