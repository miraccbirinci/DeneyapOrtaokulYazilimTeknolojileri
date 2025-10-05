#include <iostream>
#include <string>
using namespace std;

// Bu program kullanicidan isim (bosluklu), yas ve sinif bilgisini alir.
// getline kullanarak ismi tam aliyoruz.

int main() {
    string isim;
    int yas;
    string sinif;

    cout << "Isminizi giriniz: ";
    getline(cin, isim);           // getline: tum satiri alir (bosluklu isim)

    cout << "Yasinizi giriniz: ";
    cin >> yas;                   // cin: bosluk gorunce durur, sayi icin uygun

    cout << "Sinifinizi giriniz: ";
    cin >> sinif;                 // "7B" gibi alir, bosluklu sinif icin getline gerekirdi

    cout << endl;
    cout << "Merhaba " << isim << "!" << endl;
    cout << "Yasin: " << yas << endl;
    cout << "Sinifin: " << sinif << endl;

    return 0;
}
