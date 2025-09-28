// Amaç: 0'dan 9'a kadar sayıları birer birer saymak.
#include <iostream>
using namespace std;
int main(){
    for(int sayi=0; sayi<10; sayi++) // başlangıç=0; koşul: 10'dan küçük; adım: +1
        cout << sayi << endl;        // her adımda sayıyı yazdır
    return 0;
}
