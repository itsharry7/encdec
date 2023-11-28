#include "crypto.h"
#include "encrypt.cpp"
#include "decrypt.cpp"
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main () {
    crypto cy;
    int c;
    

    while (c!=3) {

    cout<<endl;
    cout<<"1. Encrypt \n";
    cout<<"2. Decrypt \n";
    cout<<"3. Exit"<<endl;
    cin>>c;

        if (c==1) {
            cy.encrypt();
            cout<<"\nEncrypted!";
        } else if (c==2) {
            cy.decrypt();
            cout<<"\nDecrypted!";
        } else if (c!=3){
            cout<<"\nInvalid input! Try again. (Type 3 and hit Enter to Exit)";
        }
    }

    cout<<"\nExiting the program...";
    
}