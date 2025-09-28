#include <iostream>
#include <string>
using namespace std;

// Temel veri tipleri icin deger ornekleri

int main() {
    int myInt = 42;                // int: tam sayi
    float myFloat = 3.14f;         // float: kucuk ondalik
    double myDouble = 2.718281828; // double: hassas ondalik
    char myChar = 'A';             // char: tek karakter (tek tirnak)
    bool myBoolTrue = true;        // bool: true=1
    bool myBoolFalse = false;      // bool: false=0
    string myString = "Merhaba";   // string: metin (cift tirnak)

    cout << "int: " << myInt << endl;
    cout << "float: " << myFloat << endl;
    cout << "double: " << myDouble << endl;
    cout << "char: " << myChar << endl;
    cout << "bool (true): " << myBoolTrue << endl;
    cout << "bool (false): " << myBoolFalse << endl;
    cout << "string: " << myString << endl;

    return 0;
}
