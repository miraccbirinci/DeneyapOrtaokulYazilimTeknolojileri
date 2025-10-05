#include <iostream>
using namespace std;

// Bu program, bir dizideki sayıları küçükten büyüğe sıralar.
// Kullanılan yöntem: SELECTION SORT (Seçmeli Sıralama)
// Amaç: Dizi sıralama mantığını anlamak ve iki elemanı geçici değişkenle yer değiştirmeyi öğrenmek.

int main() {
    // Başlangıç dizisi (karışık sayılar)
    int sayilar[] = {40, 10, 50, 20, 30};
    int n = 5;  // Dizi uzunluğu

    // Sırasız diziyi ekrana yazdır
    cout << "Sirasiz dizi: ";
    for (int i = 0; i < n; i++) {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Selection Sort algoritması
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Şu anki elemanı en küçük kabul et

        // Daha küçük bir eleman var mı diye diziyi tarar
        for (int j = i + 1; j < n; j++) {
            if (sayilar[j] < sayilar[minIndex]) {
                minIndex = j; // Yeni minimum bulundu
            }
        }

        // Eğer minimum başka bir yerdeyse yer değiştir
        if (minIndex != i) {
            int temp = sayilar[i];           // Geçici değişken
            sayilar[i] = sayilar[minIndex];  // Küçüğü başa al
            sayilar[minIndex] = temp;        // Büyük olanı sona koy
        }
    }

    // Sıralanmış diziyi ekrana yazdır
    cout << "Sirali dizi: ";
    for (int i = 0; i < n; i++) {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    return 0;
}
