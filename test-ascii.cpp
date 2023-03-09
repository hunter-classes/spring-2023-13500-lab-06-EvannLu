#include <iostream> 

int main() {
    std::string s;
    char test;

    std::cout << "Type out a string:" << "\n";
    
    std::getline(std::cin, s);
    std::cout << "Your line was: " << s << "\n";

    for(int i=0; i<s.length(); i++) {
        test = s[i]; 
        std::cout << s.substr(i, 1) << " " << int(test) << "\n";
    }

    return 0; 
}