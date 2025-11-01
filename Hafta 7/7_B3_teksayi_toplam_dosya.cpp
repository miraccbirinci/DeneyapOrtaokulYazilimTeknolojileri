#include <iostream>
#include <fstream> // Dosya işlemleri için gerekli kütüphane
using namespace std;

int main() {
    int toplam = 0;

    // 1 ile 99 arasındaki sayıların toplamı hesaplanıyor
    // Ancak burada koşul i<100 olduğu için 1–99 arası sayılar toplanır.
    for (int i = 1; i < 100; i++)
        toplam += i;

    // Dosyayı yazma modunda açıyoruz
    ofstream dosya("sonuc.txt");

    // Dosya başarıyla açıldıysa toplamı dosyaya yaz
    if (dosya.is_open()) {
        dosya << toplam;
    }
    // Aksi halde kullanıcıya hata mesajı göster
    else {
        cout << "Dosya Okunamadi!";
    }
}
