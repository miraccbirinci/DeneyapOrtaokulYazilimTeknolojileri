#include <iostream>
#include <cstring>     // strcpy fonksiyonunu kullanmak için ekledik
using namespace std;

class Araba {
public:
    char marka[30];   // Arabanın markası (örnek: Suzuki)
    char model[30];   // Arabanın modeli (örnek: Vitara)
    int yil;          // Üretim yılı
    int fiyat;        // Arabanın fiyatı
};

int main() {
    Araba araba1;     // 1. araba nesnesi oluşturuldu

    strcpy(araba1.marka, "Suzuki");   // marka değerini kopyaladık
    strcpy(araba1.model, "Vitara");   // model değerini kopyaladık
    araba1.yil = 2016;                // yıl bilgisi atandı
    araba1.fiyat = 225000;            // fiyat bilgisi atandı

    // ikinci araba nesnesi
    Araba araba2;
    strcpy(araba2.marka, "Volkswagen");
    strcpy(araba2.model, "T-Roc");
    araba2.yil = 2020;
    araba2.fiyat = 360000;

    // Her iki arabanın bilgilerini ekrana yazdırıyoruz
    cout << "Araba 1: " << araba1.marka << ", " << araba1.model << ", " 
         << araba1.yil << ", " << araba1.fiyat << " \n";
    cout << "Araba 2: " << araba2.marka << ", " << araba2.model << ", " 
         << araba2.yil << ", " << araba2.fiyat << " \n";

    return 0;  // program sona erer
}
