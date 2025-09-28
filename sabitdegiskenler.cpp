#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;   // const: sabit değer, değiştirilemez
    int yaricap = 5;             // değişken: kullanıcıdan da alınabilirdi

    double alan = PI * yaricap * yaricap;   // dairenin alanı

    cout << "Yaricap: " << yaricap << endl;
    cout << "PI sabiti: " << PI << endl;
    cout << "Dairenin alani: " << alan << endl;

    // PI = 3.15; //  HATA! const degisken degistirilemez

    return 0;
}

/* const ile tanımlanan değişkenler sabittir.

Bir kez değer verildikten sonra değiştirilemez.

Derleyici buna izin vermez → hata alırsın.

Genelde matematiksel sabitler (π, e), sabit katsayılar, sabit oranlar için kullanılır.*/
