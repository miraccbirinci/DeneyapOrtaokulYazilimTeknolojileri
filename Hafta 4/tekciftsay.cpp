#include <iostream>
using namespace std;

// Bu program kullanıcının girdiği dizi elemanları arasında
// kaç tanesinin TEK, kaç tanesinin ÇİFT olduğunu bulur.
// Amaç: Mod (%) operatörünü kullanarak koşul kontrolü yapmayı öğrenmek.

int main() {
    int dizi[100];          // En fazla 100 elemanlık dizi tanımladık
    int boyut, tek = 0, cift = 0; // Sayaç değişkenleri

    cout << "Dizi boyutunu girin: ";
    cin >> boyut;

    // Kullanıcıdan dizi elemanlarını al
    cout << "Dizi elemanlarini girin:" << endl;
    for (int i = 0; i < boyut; i++) {
        cout << "dizi[" << i << "]: ";
        cin >> dizi[i];
    }

    // Tek ve çift sayıları say
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] % 2 == 0)
            cift++;   // % 2 == 0 → sayı çifttir
        else
            tek++;    // aksi halde tektir
    }

    cout << "\nCift eleman sayisi: " << cift << endl;
    cout << "Tek  eleman sayisi: " << tek << endl;

    return 0;
}
