// Görev 1: Girilen sayının 3'e tam bölünüp bölünmediğini ekrana yazdır.
// Akış: sayı gir -> sayı >= 0 mı? evet: (sayi % 3 == 0 ? "tam bölünür" : "tam bölünemez"), hayır: "Negatif sayı"
#include <iostream>
using namespace std;

int main()
{
    int sayi;              // kullanıcıdan alınacak sayıyı tutar
    cin >> sayi;           // kullanıcıdan girdi al

    if(sayi >= 0)          // sayı negatif değilse bu bloğa gir
    {
        if(sayi % 3 == 0)  // 3'e kalansız bölünüyorsa
            cout << "Sayi 3 ile tam bolunur.";
        else               // kalansız bölünmüyorsa
            cout << "Sayi 3 ile tam bolunemez.";
    }
    else                   // sayı negatifse
    {
        cout << "Negatif sayi girdiniz.";
    }
    return 0;
}
