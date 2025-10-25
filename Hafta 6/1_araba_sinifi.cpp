#include <iostream>   // ekrana yazmak için
#include <cstring>    // strcpy kullanımı için
using namespace std;

class Araba              // SINIF TANIMLAMA: Araba adında bir sınıf oluşturuyoruz
{
public:                  // ERİŞİM BELİRTECİ: dışarıdan erişilebilsin diye public
    char marka[30];      // ÜYE: markayı metin olarak tutar (30 karaktere kadar)
    int fiyat;           // ÜYE: fiyat
    int hiz;             // ÜYE: hız
    void hizlanma ();    // ÜYE FONKSİYON bildirimi (tanımı aşağıda)
};

void Araba::hizlanma ( )  // FONKSİYON OLUŞTURMA: sınıf dışı tanım
{
    hiz = hiz + 10;                      // hız değerini 10 artır
    cout << "Arabam hizlandi" << endl;   // bilgi mesajı
}

int main ( )              // PROGRAM BAŞLANGICI
{
    Araba arabam;                                   // NESNE OLUŞTURMA
    strcpy(arabam.marka, "Toyota");                 // markayı kopyala
    arabam.fiyat = 145000;                          // fiyata değer ver
    cout << "Benim arabam: " << arabam.marka        // ekrana yaz
         << " " << "Fiyat: " << arabam.fiyat << endl;
    arabam.hizlanma ( );                            // üye fonksiyonu çağır
    return 0;                                       // program bitti
}
