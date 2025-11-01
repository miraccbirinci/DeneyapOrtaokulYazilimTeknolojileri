#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int ogrenciSayisi;
    float sonuc;

    ofstream dosya("sinav.txt", ios::out);
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 0;
    }

    cout << "Kac ogrenci olacak: ";
    cin >> ogrenciSayisi;

    for (int i = 0; i < ogrenciSayisi; i++) {
        cout << i + 1 << ". ogrenci sonucu: ";
        cin >> sonuc;
        dosya << sonuc << endl;
    }

    dosya.close();
    cout << "Notlar sinav.txt dosyasina yazildi." << endl;
    return 0;
}