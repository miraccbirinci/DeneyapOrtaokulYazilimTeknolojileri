// Görev 3: Not aralıklarına göre çıktı üret (kaldı/belge yok/teşekkür/takdir).
#include <iostream>
using namespace std;

int main()
{
    int puan;                                  // öğrencinin notu
    cout << "notu giriniz:";                   // kullanıcıya bilgi
    cin >> puan;                               // notu al

    if(puan < 50)                              // 0-49
        cout << "Kaldi";
    else if(puan < 70)                         // 50-69
        cout << "Belge yok";
    else if(puan < 85)                         // 70-84
        cout << "Tesekkur belgesi";
    else if(puan <= 100)                       // 85-100
        cout << "Takdir belgesi";
    else                                       // 100'den büyük/hatalı giriş
        cout << "Hatali giris";
    return 0;
}
