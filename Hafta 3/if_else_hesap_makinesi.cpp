// Örnek: if/else ile basit hesap makinesi (işlem seçimi).
#include <iostream>
using namespace std;

int main()
{
    char islem;                 // yapılacak işlem sembolü
    cin >> islem;               // kullanıcıdan sembol al
    if(islem == '+')            // toplama seçildiyse
        cout << "Toplama islemi";
    else if(islem == '-')       // çıkarma
        cout << "Cikarma islemi";
    else if(islem == '*')       // çarpma
        cout << "Carpma islemi";
    else if(islem == '/')       // bölme
        cout << "Bolme islemi";
    else                        // tanımsız işlem
        cout << "Hatali giris.";
    return 0;
}
