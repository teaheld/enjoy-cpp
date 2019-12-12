/*
 * Read a sequence of words from cin
 * and store the values into a vector.
 * After you read all the words
 * process the vector and 
 * change each word to upper case.
 * Print the transformed elements
 * eight words to a line.
 */

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string word;
    std::vector<std::string> words;
    
    while (std::cin >> word) {
        words.push_back(word);
    }
    
    for (decltype(words.size()) i = 0;
         i != words.size();
         ++i) {
            for (auto &c : words[i]) {
                c = std::toupper(c);
            }
            
            std::cout << words[i] << " ";
            if ((i + 1) % 8 == 0) {
                std::cout << std::endl;
            }
    }
    
    
    return 0;
}
