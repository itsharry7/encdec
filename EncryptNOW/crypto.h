#ifndef CRYPTO_H
#define CRYPTO_H
#include <iostream>
#include <string>
using namespace std;

class crypto {
    int key;
 
    // File name to be encrypt
    string file = "input.txt";
    char c;
 
public:
    void encrypt();
    void decrypt();
};

#endif