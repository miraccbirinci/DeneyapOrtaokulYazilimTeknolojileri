// Amaç: 10'dan 0'a geri sayım.
#include <iostream>
using namespace std;
int main(){
    for(int sayi=10; sayi>=0; sayi--) // başlangıç=10; koşul: 0 veya üstü; adım: -1
        cout << sayi << endl;         // yazdır
    return 0;
}
