#include <iostream>
#include <string>
using namespace std;

// Nokta adında bir sınıf oluşturuyoruz.
// Bu sınıfın görevi, 2 boyutlu düzlemde bir noktanın konumunu tutmak.
class Nokta {
   int x, y; // Noktanın x ve y koordinatlarını saklayan değişkenler
public:
    // Noktanın yeni bir konuma gitmesini sağlayan fonksiyon
    void git(int yeni_x, int yeni_y);

    // Noktanın şu anki konumunu ekranda gösteren fonksiyon
    void goster();

    // Noktanın (0,0) noktasında olup olmadığını kontrol eden fonksiyon
    void sifirMi();
};

// git fonksiyonunun tanımı.
// Noktayı yeni verilen koordinatlara taşır.
void Nokta::git(int yeni_x, int yeni_y) {
    x = yeni_x;
    y = yeni_y;
}

// goster fonksiyonunun tanımı.
// Noktanın x ve y değerlerini ekrana yazar.
void Nokta::goster() {
    cout << "X noktasi: " << x << ", Y noktasi: " << y << endl;
}

// sifirMi fonksiyonunun tanımı.
// Nokta (0,0) konumundaysa ekrana bilgi verir.
void Nokta::sifirMi() {
    if (x == 0 && y == 0)
        cout << "Nokta su anda sifir noktasindadir" << endl;
    else
        cout << "Nokta su anda sifir noktasinda degildir" << endl;
}

int main() {
    // İki tane Nokta nesnesi oluşturuyoruz.
    Nokta nokta1;
    Nokta nokta2;

    // nokta1'i (56,21) konumuna taşıyoruz.
    nokta1.git(56, 21);
    nokta1.goster();   // Konumunu gösteriyoruz.
    nokta1.sifirMi();  // (0,0)'da olup olmadığını kontrol ediyoruz.

    // nokta2'yi (0,0) konumuna taşıyoruz.
    nokta2.git(0, 0);
    nokta2.goster();
    nokta2.sifirMi();

    return 0;
}
