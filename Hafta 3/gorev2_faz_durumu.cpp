// Görev 2: Sıcaklığa göre maddenin hâlini (katı/sıvı/gaz/plazma) yazdır.
#include <iostream>
using namespace std;

int main()
{
    int sicaklik;           // sıcaklık değeri
    cin >> sicaklik;        // kullanıcıdan sıcaklık al

    if(sicaklik < 0)        // 0'ın altı ise katı
        cout << "Kati";
    else if(sicaklik < 100) // 0-99 arası ise sıvı
        cout << "Sivi";
    else if(sicaklik < 10000) // 100-9999 arası ise gaz
        cout << "Gaz";
    else                    // 10000 ve üzeri ise plazma
        cout << "Plazma";
    return 0;
}
