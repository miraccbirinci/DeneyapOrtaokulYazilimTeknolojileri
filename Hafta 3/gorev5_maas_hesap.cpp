// Görev 5: Çalışma saatine göre maaş hesapla (ucret=5).
// saat<100: maas = saat*5
// 100<=saat<250: maas = saat*5*2
// saat>=250: maas = saat*5*3
#include <iostream>
using namespace std;

int main()
{
    int saat, maas;                 // çalışma saati ve maaş
    cout << "kac saat calisti:";    // kullanıcıya soru
    cin >> saat;                    // saat bilgisini al
    if(saat < 100)                  // ilk aralık
        maas = saat * 5;
    else if(saat < 250)             // ikinci aralık
        maas = saat * 5 * 2;
    else                            // üçüncü aralık
        maas = saat * 5 * 3;
    cout << "Maasiniz: " << maas;   // sonucu yaz
    return 0;
}
