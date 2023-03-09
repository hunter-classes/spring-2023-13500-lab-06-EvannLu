#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"

//Task B
TEST_CASE("Shift Char") {
    CHECK(shiftChar('A',30) == 'E');
    CHECK(shiftChar('x', 10) == 'h');
}
TEST_CASE("Encrypt Caesar") {
    CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
    CHECK(encryptCaesar("ant", 5) == "fsy");
}


//Task C
TEST_CASE("vigenere") {
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("The quick brown fox jumps over 13 lazy dogs.", "cryptii") == "Vyc fnqkm spdpv nqo hjfxa qmcg 13 eiha umvl.");
}


//Task D
TEST_CASE("decryption") {
    CHECK(DCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
    CHECK(DVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}
