#include <iostream>
using namespace std;

// 5 arkadaşın yaşlarını bir dizi içinde saklayıp ekrana yazdırır.
// Amaç: Dizi oluşturma ve dizi elemanlarını döngüyle yazdırma alıştırması.

int main() {
    int yas[5] = {15, 14, 17, 12, 16};  // Yaşları sabit olarak tanımladık

    // Her bir arkadaşın yaşını ekrana yazdır
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". arkadasimin yasi: " << yas[i] << endl;
    }

    return 0;
}
