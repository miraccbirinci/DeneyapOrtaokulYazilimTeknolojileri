#include <iostream>
using namespace std;

// Bu program 3 oyuncunun 1. ve 2. hafta puanlarını toplar,
// 3. hafta puanlarını oluşturur ve tablo halinde yazdırır.
// Amaç: Diziler arasında aritmetik işlem yapmak.

int main() {
    // Oyuncular: Ayse, Burcu, Can
    int hafta1[3] = {1, 0, 2}; // 1. haftanın puanları
    int hafta2[3] = {1, 2, 2}; // 2. haftanın puanları
    int hafta3[3];             // 3. hafta puanlarını tutacak dizi

    // 3. hafta = 1. hafta + 2. hafta
    for (int i = 0; i < 3; i++) {
        hafta3[i] = hafta1[i] + hafta2[i];
    }

    // Sonuçları yazdır
    cout << "Hafta 3 puanlari (Ayse, Burcu, Can): ";
    for (int i = 0; i < 3; i++) {
        cout << hafta3[i] << " ";
    }
    cout << endl;

    return 0;
}
