// Örnek: switch/case ile basit hesap makinesi (işlem seçimi).
#include <iostream>
using namespace std;

int main()
{
    char islem;                   // işlem sembolü
    cin >> islem;                 // kullanıcıdan al
    switch(islem){                // sembole göre dallan
        case '+':
            cout << "Toplama islemi";
            break;
        case '-':
            cout << "Cikarma islemi";
            break;
        case '*':
            cout << "Carpma islemi";
            break;
        case '/':
            cout << "Bolme islemi";
            break;
        default:
            cout << "Hatali giris.";
    }
    return 0;
}
