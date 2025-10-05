#include <iostream>
using namespace std;

// Bu program bir dizideki en büyük sayıyı ve onun konumunu bulur.
// Amaç: Koşul (if) ve döngü (for) yapısını kullanarak maksimum değeri bulmayı öğrenmek.

int main() {
    int sayilar[] = {19, 11, 21, 13, 15};
    int n = 5;
    int maks = sayilar[0];  // Şimdilik ilk elemanı en büyük kabul ediyoruz
    int yer = 0;            // En büyük elemanın bulunduğu index (sıra numarası)

    // Diziyi tarayarak en büyük değeri bul
    for (int i = 1; i < n; i++) {
        if (sayilar[i] > maks) {  // Yeni en büyük değer bulunduysa
            maks = sayilar[i];
            yer = i;              // Yerini hatırla
        }
    }

    cout << "Dizinin en buyuk elemani " << maks << " (indis: " << yer << ")" << endl;

    return 0;
}
