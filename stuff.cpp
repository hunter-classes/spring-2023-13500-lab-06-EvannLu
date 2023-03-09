#include <iostream>
using namespace std; 


int main() {
    string h = "Hello";
    string w = "World";

    string message = h + ", " + w; 
    cout << message << endl;    // Will print:  Hello, World
    
    message += "!!!";
    cout << message << endl;    // Will print:  Hello, World!!!

    cout << h.length() << endl; // Will print:  5
    cout << h.size() <<endl;    // Will print:  5 (as well. just like .length())
    cout << w[0] << endl;       // Will print:  W


    string s;
    getline(cin, s);
    cout << "Your line was: " << s << endl;

    char a = 'a'; //use single quotation for char 
    
    cout << int(a);  //int() print the ascii value for that specific char

    return 0; 
}
