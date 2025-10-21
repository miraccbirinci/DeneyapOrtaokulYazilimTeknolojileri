/**
 * C++ Hafta 5 - Fonksiyonlar
 * -------------------------------------------------------------
 * Bu dosya, "Bölüm 5: Fonksiyonlar" için verilen tüm görevleri
 * (temel ve gelişmiş) TEK BİR PROJE dosyasında toplar.
 * - Her görev ayrı bir fonksiyonla ve zenginleştirilmiş yorumlarla sunulur.
 * - main() içinde basit bir menü ile örnek çalıştırmalar yapılabilir.
 *
 * Derlemek için (g++ yüklü ise):
 *   g++ -std=c++17 hafta5_fonksiyonlar.cpp -o hafta5
 * Çalıştırmak için:
 *   ./hafta5
 */

#include <iostream>
#include <string>
using namespace std;

/* -------------------------------------------------------------------------- */
/*  TEMEL NOTLAR
    - Fonksiyon İmzası:  dönüş_tipi fonksiyon_ismi(parametreler)
    - void    : "geri dönüş değeri yok" anlamına gelir
    - Parametreler: fonksiyonun ihtiyacı olan dış veriler
    - return : fonksiyonun bir değer döndürmesini sağlar (void değilse)
    - İsimlendirme: anlamlı ve ne yaptığını anlatacak isimler seçin
*/
/* -------------------------------------------------------------------------- */

/* =============================  TEMEL GÖREVLER  ============================ */

/* Görev 1
   Ekrana 10 kez "Deneyap" ardından 2 kez "Merhaba!" yazdıran
   ekrana_yaz() isimli bir fonksiyon yazalım.
   - Geri dönüş yok → void
*/
void ekrana_yaz() {
    for (int i = 0; i < 10; i++) {
        cout << "Deneyap" << endl;
    }
    for (int i = 0; i < 2; i++) {
        cout << "Merhaba!" << endl;
    }
}

/* Görev 2
   Üçgen alanı hesaplayan fonksiyon:
   - İstenilen yapı: void ucgen_alan_hesapla(double taban, double yukseklik)
   - Bu örnekte sonucu ekrana yazdırıyoruz (geri dönüş yok)
*/
void ucgen_alan_hesapla(double taban, double yukseklik) {
    double alan = (taban * yukseklik) / 2.0;
    cout << "Ucgen alani: " << alan << endl;
}

/* Görev 3
   Fonksiyona gönderilen sayı 5 ile tam bölünüyorsa "tam bolunur."
   değilse kalanı yazdıran fonksiyon.
*/
void bes_ile_bolme(int sayi) {
    if (sayi % 5 == 0) {
        cout << "tam bolunur." << endl;
    } else {
        cout << "kalan: " << (sayi % 5) << endl;
    }
}

/* Görev 4
   Fonksiyona gönderilen iki sayıdan BÜYÜK OLANI geriye döndür.
   (İsmi metinde "hangisi_buyuk" olarak geçiyor ama işlev büyük olanı döndürmek.)
*/
int hangisi_buyuk(int sayi1, int sayi2) {
    if (sayi1 > sayi2) return sayi1;
    else               return sayi2;
}

/* ==========================  GELİŞMİŞ GÖREVLER  =========================== */

/* Gelişmiş Görev 1
   Tam sayı tipindeki bir dizinin en büyük elemanını EKRANA YAZAN fonksiyon.
   - Sabit uzunluk: 5
   - Geri dönüş yok (void), sadece yazdırır
*/
void en_buyuk_yaz(const int dizi[5]) {
    int enbuyuk = dizi[0];
    for (int i = 1; i < 5; i++) {
        if (enbuyuk < dizi[i]) enbuyuk = dizi[i];
    }
    cout << "En buyuk (void versiyon): " << enbuyuk << endl;
}

/* Gelişmiş Görev 2
   Bir dizinin en büyük elemanını GERİ DÖNDÜREN fonksiyon.
   - Böylece bu değeri başka işlemlerde (örn. toplama) kullanabiliriz.
*/
int en_buyuk_dondur(const int dizi[5]) {
    int enbuyuk = dizi[0];
    for (int i = 1; i < 5; i++) {
        if (enbuyuk < dizi[i]) enbuyuk = dizi[i];
    }
    return enbuyuk;
}

/* Gelişmiş Görev 3
   2x2 boyutundaki bir matrisin TUM ELEMANLARININ TOPLAMINI döndüren fonksiyon.
*/
int matris_toplami(const int matris[2][2]) {
    int toplam = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            toplam += matris[i][j];
        }
    }
    return toplam;
}

/* =========================  EK: ÖRNEK GERÇEK HAYAT  ======================= */
/* Örnek: Sosyal medyada bir fotoğraf yorumlama fonksiyonu
   - Fonksiyon ismi: yorum_yap
   - Parametreler: foto_id, yorum metni
   - Dönüş tipi: bool → basari/başarısızlık
   Not: Bu sadece SENARYO örneğidir; gerçek sistem bağlantısı yoktur.
*/
bool yorum_yap(int foto_id, const string& yorum) {
    // Burada normalde: veritabanına bağlan, API çağır, doğrulamalar yap, vb.
    if (foto_id <= 0 || yorum.empty()) {
        // Hatalı giriş durumu:
        return false;
    }
    // Simülasyon: her şey yolunda → true
    return true;
}

/* ===============================  YARDIMCILAR  ============================ */

void baslik(const string& t) {
    cout << "\n=== " << t << " ===\n";
}

void ornek_cizgisi() {
    cout << "------------------------\n";
}

/* =============================  DEMO MENÜSÜ  ============================== */
/*
   Bu menü, tüm fonksiyonları hızlıca test edebilmen için hazırlandı.
   - Kendi veri setlerinle denemek için cin ile giriş alabilirsin.
   - Varsayılan örnekleri aşağıda gösteriyoruz.
*/

void demo_temel_gorevler() {
    baslik("TEMEL GOREVLER");

    baslik("Gorev 1: ekrana_yaz()");
    ekrana_yaz();
    ornek_cizgisi();

    baslik("Gorev 2: ucgen_alan_hesapla(2, 4)");
    ucgen_alan_hesapla(2, 4);
    ornek_cizgisi();

    baslik("Gorev 3: bes_ile_bolme(11), (15), (12)");
    bes_ile_bolme(11);
    bes_ile_bolme(15);
    bes_ile_bolme(12);
    ornek_cizgisi();

    baslik("Gorev 4: hangisi_buyuk(10,20) ve (22,11)");
    cout << "Buyuk olan: " << hangisi_buyuk(10, 20) << endl;
    cout << "Buyuk olan: " << hangisi_buyuk(22, 11) << endl;
}

void demo_gelismis_gorevler() {
    baslik("GELISMIS GOREVLER");

    baslik("Gorev 1: en_buyuk_yaz({5,3,4,5,8})");
    int sayilar1[5] = {5, 3, 4, 5, 8};
    en_buyuk_yaz(sayilar1);
    ornek_cizgisi();

    baslik("Gorev 2: iki dizinin en buyuklerinin toplami");
    int dizi1[5] = {5, 3, 4, 5, 8};
    int dizi2[5] = {9, 3, 4, 5, 8};
    int en1 = en_buyuk_dondur(dizi1);
    int en2 = en_buyuk_dondur(dizi2);
    cout << "1. dizinin en buyugu: " << en1 << endl;
    cout << "2. dizinin en buyugu: " << en2 << endl;
    cout << "Toplam: " << (en1 + en2) << endl;
    ornek_cizgisi();

    baslik("Gorev 3: 2x2 matris toplami");
    int M[2][2] = { {1, 2}, {3, 4} };
    cout << "Matris toplami: " << matris_toplami(M) << endl;
}

void demo_gercek_hayat() {
    baslik("EK: Sosyal Medya - yorum_yap() senaryosu");
    bool ok1 = yorum_yap(123, "Harika foto!");
    bool ok2 = yorum_yap(-5, "bos yorum testi");
    cout << "Yorum 1 (ID=123): " << (ok1 ? "Basarili" : "Basarisiz") << endl;
    cout << "Yorum 2 (ID=-5): " << (ok2 ? "Basarili" : "Basarisiz") << endl;
}

/* ----------------------------------- MAIN --------------------------------- */

int main() {
    cout << "C++ Hafta 5 - Fonksiyonlar Demo\n";
    cout << "1) Temel Gorevler\n";
    cout << "2) Gelismis Gorevler\n";
    cout << "3) Gercek Hayat Ornegi (yorum_yap)\n";
    cout << "4) Hepsini calistir\n";
    cout << "0) Cikis\n";

    int secim;
    cout << "\nSeciminiz: ";
    if (!(cin >> secim)) {
        cerr << "Gecersiz giris. Cikis yapiliyor.\n";
        return 0;
    }

    switch (secim) {
        case 1: demo_temel_gorevler(); break;
        case 2: demo_gelismis_gorevler(); break;
        case 3: demo_gercek_hayat(); break;
        case 4: demo_temel_gorevler(); demo_gelismis_gorevler(); demo_gercek_hayat(); break;
        case 0: cout << "Cikis yapildi.\n"; return 0;
        default: cout << "Gecersiz secim.\n"; break;
    }

    cout << "\nProgram bitti.\n";
    return 0;
}
