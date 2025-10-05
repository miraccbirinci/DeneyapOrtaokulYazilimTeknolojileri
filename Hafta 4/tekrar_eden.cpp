#include <iostream>
using namespace std;

// Bu program dizide ARDIŞIK (yan yana) gelen aynı sayıları bulur.
// Amaç: Dizi karşılaştırması yaparak eşit elemanları kontrol etmek.

int main() {
    int dizi[] = {12, 67, 78, 45, 78, 78, 32, 16, 16, 57};
    int n = sizeof(dizi) / sizeof(dizi[0]);  // Dizi uzunluğunu hesapla

    cout << "Dizi: ";
    for (int i = 0; i < n; i++) {
        cout << dizi[i] << " ";
    }

    cout << "\n\nTekrar eden (yan yana) elemanlar: ";

    // Elemanları sırayla kontrol et
    for (int i = 0; i < n - 1; i++) {
        if (dizi[i] == dizi[i + 1]) {  // Eğer ardışık iki eleman eşitse
            cout << dizi[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
