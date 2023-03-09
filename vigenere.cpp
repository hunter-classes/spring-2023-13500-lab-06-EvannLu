#include <iostream>
#include "caeser.h"
#include "vigenere.h"

std::string encryptVigenere(std::string plaintext, std::string keyword) {
    int index = 0;
    std::string estr;

    for(int i=0; i<plaintext.length(); i++) {
        char s;
        char t = plaintext[i];

        if(isalpha(t)) {
            char key = keyword[index];
            s = shiftChar(t, key-'a');
            index++;
            index %= keyword.length();
        }
        else {
            s=t;
        }
        estr += s;
    }

    return estr;
}