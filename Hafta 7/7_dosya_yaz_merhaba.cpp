#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("deneyap.txt", ios::out); // varsa uzerine yazar
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 0;
    }
    dosya << "Merhaba Deneyap!" << endl;
    dosya.close();
    cout << "Yazma islemi tamam." << endl;
    return 0;
}