#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream dosya("deneyap.txt", ios::in);
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 0;
    }

    string satir;
    while (getline(dosya, satir)) {
        cout << satir << endl;
    }

    dosya.close();
    return 0;
}