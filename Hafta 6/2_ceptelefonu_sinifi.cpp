#include <iostream>   // cout / endl
#include <cstring>    // strcpy
using namespace std;

class Ceptelefonu        // SINIF TANIMLAMA
{
public:                  // ERİŞİM BELİRTECİ
    char marka [30];     // ÜYE: marka (metin)
    int fiyat;           // ÜYE: fiyat
    bool aramaDurum;     // ÜYE: arama yapılıyor mu?
    void arama ( );      // ÜYE FONKSİYON: arama yapma
};

void Ceptelefonu::arama ( )   // FONKSİYON OLUŞTURMA
{
    aramaDurum = true;                             // arama başlatıldı
    cout << "<<istediginiz arama gerceklestiriliyor.>>" << endl;  // mesaj
}

int main ( )               // PROGRAM BAŞLANGICI
{
    Ceptelefonu urun;                          // NESNE OLUŞTURMA
    strcpy(urun.marka, "Iphone");              // markayı ata
    urun.fiyat = 6500;                         // fiyatı ata
    cout << "Urun: " << urun.marka             // ekrana yaz
         << " " << "Fiyat: " << urun.fiyat << endl;
    urun.arama ( );                            // üye fonksiyonu çağır
    return 0;
}
