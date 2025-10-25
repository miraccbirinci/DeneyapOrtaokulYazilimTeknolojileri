#include <iostream>
#include <string>      // string türünü kullanmak için
using namespace std;

class Araba {
public:
    string marka;   // Arabanın markası (örnek: Suzuki)
    string model;   // Arabanın modeli (örnek: Vitara)
    int yil;        // Üretim yılı
    int fiyat;      // Fiyat bilgisi

    // Parametreli yapıcı fonksiyon
    Araba(string x_marka, string x_model, int x_yil, int x_fiyat) {
        marka = x_marka;
        model = x_model;
        yil = x_yil;
        fiyat = x_fiyat;
    }
};

int main() {
    // İki farklı araba nesnesi oluşturduk
    Araba araba1("Suzuki", "Vitara", 2016, 225000);
    Araba araba2("Volkswagen", "T-Roc", 2020, 360000);

    // Araba bilgilerini ekrana yazdırıyoruz
    cout << araba1.marka << " " << araba1.model << " " << araba1.yil << " " 
         << araba1.fiyat << "\n";
    cout << araba2.marka << " " << araba2.model << " " << araba2.yil << " " 
         << araba2.fiyat << "\n";

    return 0; // Program biter
}
