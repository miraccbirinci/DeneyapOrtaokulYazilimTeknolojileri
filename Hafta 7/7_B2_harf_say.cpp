#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mesaj[100]; // Maksimum 100 karakterlik bir cümle girişi
    cin.getline(mesaj, 100); // Kullanıcıdan bir satır okur (boşluklar dâhil)

    int sayac = 0; // 'a' veya 'A' harflerini saymak için sayaç

    // Cümlenin tüm karakterlerini tek tek kontrol ediyoruz
    for (int i = 0; i < strlen(mesaj); i++) {
        if (mesaj[i] == 'a' || mesaj[i] == 'A')
            sayac++; // Küçük ya da büyük 'a' bulunduysa sayaç artırılır
    }

    // Toplam sonucu ekrana yazdır
    cout << "Bu cumlede " << sayac << " adet a vardir.";
    return 0;
}
