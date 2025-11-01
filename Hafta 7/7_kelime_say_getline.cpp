#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Cumleyi giriniz: ";
    getline(cin, s);

    int kelime = 0;
    bool icerde = false; // su an bir kelimenin icinde miyiz?

    for (char c : s) {
        if (c != ' ' && c != '\t') {
            if (!icerde) {
                kelime++;
                icerde = true;
            }
        } else {
            icerde = false;
        }
    }

    cout << "Kelime sayisi: " << kelime << endl;
    return 0;
}