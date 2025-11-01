#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Kullanıcının adı ve soyadı
    char mesaj[] = "Ahmet Yilmaz";
    bool bosluk = false; // Boşluk görüldü mü kontrol değişkeni

    // Cümlenin tüm karakterlerini sırayla geziyoruz
    for (int i = 0; i < strlen(mesaj); i++) {
        // Eğer boşluk bulunduysa (yani soyad kısmındaysak),
        // karakteri büyük harfe çeviriyoruz.
        if (bosluk)
            mesaj[i] = toupper(mesaj[i]);

        // Eğer karakter boşluk ise,
        // bir sonraki karakterden itibaren soyad başlıyor demektir.
        if (mesaj[i] == ' ')
            bosluk = true;
    }

    // Sonuç: Soyadı büyük harflerle yazılmış hâli ekrana basılır.
    cout << mesaj;
    return 0;
}
