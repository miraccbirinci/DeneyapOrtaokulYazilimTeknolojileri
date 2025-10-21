/**
* Konu: 5 ile bölünebilme — "tam bolunur." / "kalan: x"
 */
#include <iostream>
using namespace std;

void bes_ile_bolme(int sayi) {
    if (sayi % 5 == 0) cout << "tam bolunur." << endl;
    else               cout << "kalan: " << (sayi % 5) << endl;
}

int main() {
    bes_ile_bolme(11); // kalan: 1
    bes_ile_bolme(15); // tam bolunur.
    bes_ile_bolme(12); // kalan: 2
    return 0;
}
