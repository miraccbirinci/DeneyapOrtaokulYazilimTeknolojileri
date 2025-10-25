#include <iostream>   // cout / endl
#include <cstring>    // strcpy
using namespace std;

class Hayvan            // SINIF TANIMLAMA
{
public:                 // ERİŞİM BELİRTECİ
    char tur [20];      // ÜYE: tür
    char ad  [20];      // ÜYE: ad
    void hareket ( );   // ÜYE FONKSİYON: hareket etme
};

void Hayvan :: hareket ( )   // FONKSİYON OLUŞTURMA
{
    cout << "Hayvanlar hareket edebilir." << endl;   // bilgi
}

int main ( )               // PROGRAM BAŞLANGICI
{
    Hayvan h1;                                 // NESNE OLUŞTURMA
    strcpy(h1.tur, "Kedi");                    // tür ata
    strcpy(h1.ad , "Gece");                    // ad ata
    cout << "Hayvan turu: " << h1.tur          // ekrana yaz
         << " " << "Adi: " << h1.ad << endl;
    h1.hareket ( );                            // üye fonksiyonu çağır
    return 0;
}
