#include <iostream>
using namespace std;

// Bu program 2 dizinin elemanlarını kullanıcıdan alır,
// 3. bir diziye bu elemanların toplamını yazar.
// Amaç: Dizi elemanlarıyla işlem yapmayı öğrenmek.

int main() {
    int dizi1[5], dizi2[5], dizi3[5];  // 3 adet dizi tanımlandı

    // 1. dizinin elemanlarını al
    for (int i = 0; i < 5; i++) {
        cout << "1. dizinin " << i + 1 << ". elemani: ";
        cin >> dizi1[i];
    }

    // 2. dizinin elemanlarını al
    for (int i = 0; i < 5; i++) {
        cout << "2. dizinin " << i + 1 << ". elemani: ";
        cin >> dizi2[i];
    }

    // Eleman bazında toplama işlemi
    cout << "\nToplamlar (3. dizi):" << endl;
    for (int i = 0; i < 5; i++) {
        dizi3[i] = dizi1[i] + dizi2[i];  // 3. dizinin her elemanı, 1. ve 2. dizinin toplamı
        cout << i + 1 << ". eleman: " << dizi3[i] << endl;
    }

    return 0;
}
