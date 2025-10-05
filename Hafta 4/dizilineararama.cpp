#include <iostream>
using namespace std;

// Bu program dizide aranan sayının olup olmadığını kontrol eder.
// Eğer sayı bulunursa indeksini, bulunmazsa “bulunamadı” mesajını verir.
// Amaç: Lineer (doğrusal) arama algoritmasını öğrenmek.

int main() {
    int sayilar[] = {10, 25, 30, 45, 50, 60};          // Dizi
    int diziBoyutu = sizeof(sayilar) / sizeof(sayilar[0]); // Dizi uzunluğu
    int aranan;
    bool bulundu = false; // Başlangıçta bulunmadı

    cout << "Aranacak sayiyi girin: ";
    cin >> aranan;

    // Diziyi sırayla kontrol et
    for (int i = 0; i < diziBoyutu; i++) {
        if (sayilar[i] == aranan) {  // Eğer aranan sayıya eşitse
            cout << aranan << " bulundu! Indeksi: " << i << endl;
            bulundu = true;
            break;  // Bulunduğunda döngüyü sonlandır
        }
    }

    // Hiç bulunmadıysa bilgi ver
    if (!bulundu)
        cout << aranan << " dizide bulunamadi." << endl;

    return 0;
}
