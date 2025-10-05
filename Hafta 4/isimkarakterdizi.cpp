#include <iostream>
using namespace std;

// Bu program kullanıcıdan iki isim alır ve bu isimleri karakter karakter dizilerde tutar.
// Amaç: char dizileri (C tipi string) ile çalışma mantığını öğretmek.

int main() {
    char dizi[5];   // 4 harfli isim + '\0' sonlandırıcı
    char katar[5];  // ikinci isim için aynı yapı

    cout << "Ilk ismin karakterlerini giriniz (4 harf):" << endl;
    for (int i = 0; i < 4; i++)
        cin >> dizi[i];
    dizi[4] = '\0';  // Dizi sonuna '\0' koymak önemli

    cout << "Ikinci ismin karakterlerini giriniz (4 harf):" << endl;
    for (int i = 0; i < 4; i++)
        cin >> katar[i];
    katar[4] = '\0'; // Aynı şekilde ikinci isim sonlandırıldı

    // Ekrana yazdır
    cout << "Ilk isim: " << dizi << endl;
    cout << "Ikinci isim: " << katar << endl;

    return 0;
}
