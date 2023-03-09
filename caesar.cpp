#include <iostream>
#include "caeser.h"

char shiftChar(char c, int rshift) {
    int i = 0; 
    int l = int(c);

    if(l<65 || (90<l && l <97) || l>122) {
        return char(l);
    }

    while (i<rshift) {
        if(l == 90) {
            l = 64;
        }
        if(l == 122) {
            l = 96;
        }
        i++;
        l++;
    }
    return char(l);
}

std::string encryptCaesar(std::string plaintext, int rshift) {
    int i = 0;
    std::string estr = ""; 
    for(int i=0; i<plaintext.length(); i++) {
        estr += shiftChar(plaintext[i], rshift);
    }
    return estr; 
}
