// Görev: 50..100 arasında 10 adet rastgele öğrenci numarası üretip yazdır.
#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time
using namespace std;
int main(){
    srand(time(0));   // rastgele
    for(int i=0; i<10; i++){          // 10 sayı üret
        int num = 50 + rand() % 51;   // 50..100 aralığı
        cout << num << " ";
    }
    return 0;
}
