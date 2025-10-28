#include <iostream>
#include <string>
using namespace std;

// Futbolcu adında bir sınıf oluşturuyoruz.
// Her futbolcunun adı, forma numarası ve attığı gol sayısı olacak.
class Futbolcu {
public:
    string adSoyad;       // Futbolcunun adı ve soyadı
    int formaNumarasi;    // Futbolcunun forma numarası
    int atilanGolSayisi;  // Futbolcunun attığı gol sayısı

    // Bu yapıcı (constructor) fonksiyon,
    // futbolcu nesnesi oluşturulurken otomatik olarak çalışır.
    // Verilen değerleri futbolcuya atar.
    Futbolcu(string x_adSoyad, int x_formaNumarasi, int x_atilanGolSayisi) {
        adSoyad = x_adSoyad;
        formaNumarasi = x_formaNumarasi;
        atilanGolSayisi = x_atilanGolSayisi;
    }

    // Futbolcunun bilgilerini ekrana yazdıran fonksiyon.
    void bilgileriYazdir() {
        cout << "Ad Soyad: " << adSoyad << endl;
        cout << "Forma No: " << formaNumarasi << endl;
        cout << "Atılan Gol Sayısı: " << atilanGolSayisi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // İki futbolcu oluşturuyoruz ve bilgilerini veriyoruz.
    Futbolcu futbolcu1("Uğurcan Çakır", 1, 0);
    Futbolcu futbolcu2("Burak Yılmaz", 10, 36);

    // Her futbolcunun bilgilerini ekrana yazdırıyoruz.
    futbolcu1.bilgileriYazdir();
    futbolcu2.bilgileriYazdir();

    return 0;
}
