#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("deneyap.txt", ios::out); // uzerine yazar
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 0;
    }

    cout << "10 sayi giriniz:" << endl;
    for (int i = 0; i < 10; i++) {
        int sayi;
        cin >> sayi;
        dosya << sayi << endl;
    }

    dosya.close();
    cout << "Sayılar dosyaya yazildi." << endl;
    return 0;
}