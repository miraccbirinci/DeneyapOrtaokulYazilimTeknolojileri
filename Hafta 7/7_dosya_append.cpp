#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("deneyap.txt", ios::app); // sona ekler
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 0;
    }

    dosya << "Bu satir sona eklendi." << endl;
    dosya.close();
    cout << "Ekleme tamam." << endl;
    return 0;
}