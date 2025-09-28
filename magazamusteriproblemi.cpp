#include <iostream>
#include <string>
using namespace std;

// Bu program bir urunun indirimli fiyatini hesaplar.
// if kullanmiyoruz, bool degerini (true=1, false=0) carpan olarak kullaniyoruz.

int main() {
    char stokKodu = 'X';                 // char: Tek karakter
    string urunAdi = "Kulaklik";         // string: Metin
    float fiyat = 299.99f;               // float: Ondalik, 'f' koyduk
    double indirimOrani = 0.15;          // double: %15 indirim
    int adet = 2;                        // int: kac tane urun
    bool kampanyaAktif = true;           // bool: kampanya acik mi? true=1

    // cout: ekrana yazdirma, << zinciriyle degiskenleri bagliyoruz
    cout << "Urun: " << urunAdi << " (Kod: " << stokKodu << ")" << endl;
    cout << "Adet: " << adet << endl;
    cout << "Birim Fiyat: " << fiyat << " TL" << endl;

    double toplam = fiyat * adet;        // Toplam fiyat

    // if yerine bool carpan kullaniyoruz
    toplam = toplam - (toplam * indirimOrani * kampanyaAktif);

    cout << "Odenecek Tutar: " << toplam << " TL" << endl;
    return 0;
}
