
/**
 * Konu: Değişken Kapsamı (Global ↔ Yerel) ve fonksiyonların etkisi
 * Beklenen çıktı: 5
 */
#include <iostream>
using namespace std;

// GLOBAL (genel) değişken: dosyanın her yerinden erişilir.
int sayi = 2;

void fonksiyon1() {
    // "int" yazmadık: global 'sayi'yi kullanıp 5 yapıyoruz (kalıcı).
    sayi = 5;
}

void fonksiyon2() {
    // Burada YENİ bir YEREL 'sayi' tanımladık. Sadece bu fonksiyon içinde geçerli.
    int sayi = 7;
    (void)sayi; // uyarı olmaması için (kullanılmıyor).
}

int main() {
    fonksiyon1();   // global sayi = 5
    fonksiyon2();   // yerel sayi = 7 (globali etkilemez)
    cout << sayi << endl; // 5
    return 0;
}
