#include <iostream>
using namespace std;

// Bu program 5 öğrencinin notlarını kullanıcıdan alır ve ekrana geri yazdırır.
// Amaç: Dizilerle (array) veri saklamayı ve for döngüsüyle tekrar eden işlemleri öğrenmek.

int main() {
    int notlar[5];  // 5 öğrencinin notlarını tutan dizi

    // Kullanıcıdan 5 not alıyoruz
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". ogrencinin notunu giriniz: ";
        cin >> notlar[i];
    }

    // Tüm notları ekrana yazdırıyoruz
    cout << "\nGirilen notlar:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". ogrencinin notu: " << notlar[i] << endl;
    }

    return 0;
}
