#include "crypto.h"
#include <fstream>
#include <iostream>

void crypto::encrypt() {
    cout<<"CAUTION!! Valid input is 0 to 9!";
    cout << "key: ";
    cin >> key;
 
    fstream fin, fout;

    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);
 
    // Reading input.txt till EOF
    while (fin >> noskipws >> c) {
        char encryptvar;
        if (isupper(c)) {
            encryptvar = (c - 'A' + key) % 26 + 'A';
        } else if (islower(c)) {
            encryptvar = (c - 'a' + key) % 26 + 'a';
        } else {
            encryptvar = (c + key) % 256; // non-alphabetic characters
        }
         // Writing to encrypt.txt
        fout.put(encryptvar);
    }
    fin.close();
    fout.close();
}