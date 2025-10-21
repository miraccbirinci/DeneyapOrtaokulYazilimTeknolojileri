/**
* Konu: Üçgen alanı (void fonksiyon — sonucu ekrana yazar)
 * Formül: (taban * yukseklik) / 2
 */
#include <iostream>
using namespace std;

void ucgen_alan_hesapla(double taban, double yukseklik) {
    double alan = (taban * yukseklik) / 2.0;
    cout << "Ucgen alani: " << alan << endl;
}

int main() {
    ucgen_alan_hesapla(2, 4); // 4
    return 0;
}
