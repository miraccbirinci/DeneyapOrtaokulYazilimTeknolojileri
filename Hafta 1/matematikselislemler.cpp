#include <iostream>
using namespace std;

// Bu program 4 int sayi ile matematiksel islemleri ve karsilastirmalari gosterir.

int main() {
    int a = 10, b = 3, c = 5, d = 7;  // 4 adet tam sayi

    cout << "a = " << a << ", b = " << b
         << ", c = " << c << ", d = " << d << endl << endl;

    // Matematiksel islemler
    cout << "Toplam: " << (a + b + c + d) << endl;
    cout << "Fark: " << (a - b - c - d) << endl;
    cout << "Carpim: " << (a * b * c * d) << endl;
    cout << "Bolme (a/b): " << (a / b) << "  // int/int -> tam sayi bolme" << endl;
    cout << "Mod (a%b): " << (a % b) << endl;

    cout << endl;

    // Karsilastirmalar (1=true, 0=false)
    cout << "a > b ? " << (a > b) << endl;
    cout << "c < d ? " << (c < d) << endl;
    cout << "a == c ? " << (a == c) << endl;
    cout << "b != d ? " << (b != d) << endl;
    cout << "(a + b) >= (c + d) ? " << ((a + b) >= (c + d)) << endl;
    cout << "(a * d) <= (b * c) ? " << ((a * d) <= (b * c)) << endl;

    return 0;
}
