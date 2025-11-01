#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream dosya("deneyap.txt", ios::in);
    if (!dosya.is_open()) {
        cout << "Dosya mevcut degil veya acilamadi!" << endl;
        return 0;
    }

    cout << "Dosya acildi." << endl;
    dosya.close();
    return 0;
}