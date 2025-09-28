#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 8;

    cout << "Baslangic degerleri -> x: " << x << ", y: " << y << endl << endl;

    // Postfix (x++) ve Prefix (++x) farki
    cout << "x++ kullanildi: " << (x++) << endl; // önce deger yazdirilir, sonra x bir artar
    cout << "x++ sonrasi x: " << x << endl;

    cout << "++x kullanildi: " << (++x) << endl; // önce x bir artar, sonra yazdirilir
    cout << "++x sonrasi x: " << x << endl << endl;

    // Postfix (y--) ve Prefix (--y) farki
    cout << "y-- kullanildi: " << (y--) << endl; // önce deger yazdirilir, sonra y bir azalir
    cout << "y-- sonrasi y: " << y << endl;

    cout << "--y kullanildi: " << (--y) << endl; // önce y bir azalir, sonra yazdirilir
    cout << "--y sonrasi y: " << y << endl;

    return 0;
}
