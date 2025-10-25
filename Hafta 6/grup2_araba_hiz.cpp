#include <iostream>
#include <cstring>     // strcpy fonksiyonunu kullanmak için
using namespace std;

class Araba {
public:
    char marka[30];   // Araba markası
    char model[30];   // Araba modeli
    int hiz;          // Başlangıç hızı

    int hizlan(int max_hiz); // Hızlanma fonksiyonu, parametre alır
};

// Sınıf dışındaki fonksiyon tanımı
int Araba::hizlan(int max_hiz) {
    // Arabamızın hızını artırıyoruz
    return hiz + max_hiz;
}

int main() {
    Araba araba1; // Araba nesnesi oluşturuldu

    strcpy(araba1.marka, "Opel");
    strcpy(araba1.model, "Astra");
    araba1.hiz = 120; // Başlangıç hızı

    cout << "Araba: " << araba1.marka << " " << araba1.model << "\n";
    cout << "Hiz: " << araba1.hizlan(30); // 120 + 30 = 150
    return 0;
}
