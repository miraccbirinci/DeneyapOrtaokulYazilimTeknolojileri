// Görev 4: Yaşa göre ücret belirleme ( <18:15 TL, 18-64:20 TL, 65+:10 TL ).
#include <iostream>
using namespace std;

int main()
{
    int yas;                                   // kullanıcının yaşı
    cout << "yasinizi giriniz:";               // bilgi mesajı
    cin >> yas;                                

    if(yas < 18)                               // 18'den küçük
        cout << "Ucret: 15 TL ";
    else if(yas < 65)                          // 18-64
        cout << "Ucret: 20 TL ";
    else                                       // 65 ve üzeri
        cout << "Ucret: 10 TL ";
    return 0;
}
