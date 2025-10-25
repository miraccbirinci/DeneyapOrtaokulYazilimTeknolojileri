#include <iostream>   // cout / endl
#include <cstring>    // strcpy
using namespace std;

class Kus               // SINIF TANIMLAMA
{
public:                 // ERİŞİM BELİRTECİ
    char tur [20];      // ÜYE: tür
    char ad  [20];      // ÜYE: ad
    void ucma ( );      // ÜYE FONKSİYON: uçma davranışı
};

void Kus :: ucma ( )    // FONKSİYON OLUŞTURMA
{
    cout << "Kuslar kanatlarini kullanarak ucarlar." << endl;  // bilgi
}

int main ( )            // PROGRAM BAŞLANGICI
{
    Kus k1;                                       // NESNE OLUŞTURMA
    strcpy(k1.tur, "Muhabbet Kusu");              // tür bilgisini yaz
    strcpy(k1.ad , "Boncuk");                     // ad bilgisini yaz
    cout << "Kusun turu: " << k1.tur              // ekrana yaz
         << " " << "Adi: " << k1.ad << endl;
    k1.ucma ( );                                   // üye fonksiyon çağrısı
    return 0;
}
