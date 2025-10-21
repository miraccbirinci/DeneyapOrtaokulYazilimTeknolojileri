/**
* Konu: 2×2 matrisin tüm elemanlarının toplamını döndüren fonksiyon
 */
#include <iostream>
using namespace std;

int matris_toplami(const int M[2][2]) {
    int toplam = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            toplam += M[i][j];
    return toplam;
}

int main() {
    int matris[2][2] = {{1, 2}, {3, 4}};
    cout << "Matris toplami: " << matris_toplami(matris) << endl; // 10
    return 0;
}
