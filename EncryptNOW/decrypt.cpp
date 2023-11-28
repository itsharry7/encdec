#include "crypto.h"
#include <iostream>
#include <fstream>

void crypto::decrypt()
{
    cout<<"CAUTION!! \nThis program uses symmetric encryption! If you enter a different key from the previous, results will not be the same!";
    cout << "\nKey: ";
    cin >> key;
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);
 
    while (fin >> noskipws >> c) {
 
        // Decrypting
        char decryptvar;
        if (isupper(c)) {
            decryptvar = (c - 'A' - key + 26) % 26 + 'A';
        } else if (islower(c)) {
            decryptvar = (c - 'a' - key + 26)  % 26 + 'a';
        } else {
            decryptvar = (c - key) % 256; //non-alphabetic characters
        }
         // Writing to decrypt.tx
        fout.put(decryptvar);
    }
 
    fin.close();
    fout.close();
}