// Amaç: while ile 1..99 yazdırmak.
#include <iostream>
using namespace std;
int main(){
    int sayi = 1;                 // başlangıç değeri
    while(sayi < 100){            // koşul doğru olduğu sürece döngü çalışır
        cout << sayi << endl;     // mevcut sayıyı yazdır
        sayi++;                   // sayıyı bir arttır
    }
    return 0;
}
