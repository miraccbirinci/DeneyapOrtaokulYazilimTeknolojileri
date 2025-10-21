/**
* Konu: Dizideki en büyük elemanı bulan ve EKRANA YAZAN fonksiyon (void)
 */
#include <iostream>
using namespace std;

// 'const' → fonksiyon diziyi sadece okur, değiştiremez (güvenli).
void en_buyuk_yaz(const int dizi[5]) {
    int enbuyuk = dizi[0];
    for (int i = 1; i < 5; i++)
        if (dizi[i] > enbuyuk) enbuyuk = dizi[i];
    cout << "En buyuk sayi: " << enbuyuk << endl;
}

int main() {
    int sayilar[5] = {5, 3, 4, 5, 8};
    en_buyuk_yaz(sayilar); // 8
    return 0;
}
