/**
* Konu: 'void' fonksiyon — parametreli yazdırma (geri dönüş yok)
 */
#include <iostream>
using namespace std;

void tekrar_yaz(char a, int adet) {
    for (int i = 0; i < adet; i++) cout << a;
    cout << endl;
}

int main() {
    tekrar_yaz('z', 5); // zzzzz
    return 0;
}
