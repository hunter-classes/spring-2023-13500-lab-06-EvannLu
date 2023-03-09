#include <iostream>
#include "decrypt.h"

char DShift(char c, int rshift) {
    int i = 0; 
    int l = int(c);

    if(l<65 || (90<l && l <97) || l>122) {
        return char(l);
    }

    while (i<rshift) {
        if(l == 65) {
            l = 91;
        }
        if(l == 97) {
            l = 123;
        }
        i++;
        l--;
    }
    return char(l);
}

std::string DCaesar(std::string ciphertext, int rshift) {
    int i = 0;
    std::string Dstr = ""; 
    for(int i=0; i<ciphertext.length(); i++) {
        Dstr += DShift(ciphertext[i], rshift);
    }
    return Dstr;
}

std::string DVigenere(std::string cipher, std::string keyword)
{
    int index = 0;
    std::string Dstr;

    for(int i=0; i<cipher.length(); i++) {
        char d;
        char t = cipher[i];

        if(isalpha(t)) {
            char key = keyword[index];
            d = DShift(t, key-'a');
            index++;
            index %= keyword.length();
        }
        else {
            d=t;
        }
        Dstr += d;
    }

    return Dstr;
}