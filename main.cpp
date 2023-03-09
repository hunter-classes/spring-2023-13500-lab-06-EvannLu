/*
Author: Evan Lu
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab-06, Task A ~ D
*/


#include <iostream>
#include "funcs.h"
#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"


int main() {
    //Task B 
    std::cout << "encryptCaesar(""Way to Go!"", 5) == " << encryptCaesar("Way to Go!", 5) << "\n";

    //Task C
    std::cout << "encryptVigenere(""I need a break from CS"", ""joke"") == " << encryptVigenere("I need a break from CS", "joke") << "\n";

    //Task D
    std::cout << "DCaesar(""Bfd yt Lt!"", 5) == " << DCaesar("Bfd yt Lt!", 5) << "\n";
    std::cout << "DVigenere(""R boim o lvnou jacw GB"", ""joke"") == " << DVigenere("R boim o lvnou jacw GB", "joke") << "\n";

    return 0; 
}

