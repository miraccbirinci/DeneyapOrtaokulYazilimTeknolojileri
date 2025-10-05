// Amaç: 10'dan 0'a ikişer azalan sayıları yazdır.
#include <iostream>
using namespace std;
int main(){
    for(int sayi=10; sayi>=0; sayi-=2) // her adımda 2 azalt
        cout << sayi << endl;
    return 0;
}
