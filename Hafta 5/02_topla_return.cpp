/**
* Konu: Değer döndüren fonksiyon (int)
 */
#include <iostream>
using namespace std;

int topla(int sayi1, int sayi2) {
    int toplam = sayi1 + sayi2; // işlem
    return toplam;              // sonucu GERİ DÖNDÜR
}

int main() {
    int sonuc = topla(5, 4);
    cout << sonuc << endl; // 9
    return 0;
}
