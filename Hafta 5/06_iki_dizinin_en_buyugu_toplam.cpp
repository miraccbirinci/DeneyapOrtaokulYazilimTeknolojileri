/**
* Konu: Bir dizinin en büyüğünü döndür → iki dizinin en büyüklerini topla
 */
#include <iostream>
using namespace std;

int en_buyuk(const int dizi[5]) {
    int enbuyuk = dizi[0];
    for (int i = 1; i < 5; i++)
        if (dizi[i] > enbuyuk) enbuyuk = dizi[i];
    return enbuyuk; // geri döndür
}

int main() {
    int dizi1[5] = {5, 3, 4, 5, 8};
    int dizi2[5] = {9, 3, 4, 5, 8};

    int en1 = en_buyuk(dizi1); // 8
    int en2 = en_buyuk(dizi2); // 9

    cout << "1. dizinin en buyugu: " << en1 << endl;
    cout << "2. dizinin en buyugu: " << en2 << endl;
    cout << "Toplam: " << (en1 + en2) << endl; // 17
    return 0;
}
