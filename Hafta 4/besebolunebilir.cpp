#include <iostream>
using namespace std;

// Bu program dizide 5'e tam bölünebilen kaç sayı olduğunu bulur.
// Amaç: Döngü ve koşullu ifadeleri bir arada kullanarak sayma işlemi yapmak.

int main() {
    int sayilar[100];  // Maksimum 100 elemanlık dizi
    int n, bol5 = 0;   // bol5 = 5’e bölünebilen eleman sayısı

    cout << "Dizi boyutunu girin: ";
    cin >> n;

    cout << "Dizi elemanlarini girin:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "sayi[" << i << "]: ";
        cin >> sayilar[i];
    }

    // 5'e bölünenleri say
    for (int i = 0; i < n; i++) {
        if (sayilar[i] % 5 == 0)
            bol5++;
    }

    cout << "\n5 ile bolunebilen eleman sayisi: " << bol5 << endl;

    return 0;
}
