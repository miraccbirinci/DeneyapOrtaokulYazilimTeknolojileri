#include <iostream>
using namespace std;

// endl ve \n farkini gosterir.

int main() {
    cout << "Merhaba" << endl;    // endl: satir atlatir + buffer temizler
    cout << "Dunya\n";            // \n: sadece satir atlatir
    cout << "Satir3\nSatir4\n";   // \n ile birden fazla satir
    return 0;
}
