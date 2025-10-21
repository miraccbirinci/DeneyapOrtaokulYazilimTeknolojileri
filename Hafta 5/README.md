# C++ Fonksiyonlar (Functions) Ders Notları

## Giriş

Program yazarken çoğu zaman:

* "Aynı işlemi tekrar tekrar yapma."
* "Büyük programı parçalara bölme."
* "Aynı kodu her yerde kopyalamak yerine bir kez yaz, her yerde kullan."

İşte bu ihtiyaçları **fonksiyonlar** karşılar. Fonksiyonlar; belirli bir işi yapan, gerekirse **değer döndüren** mini program parçacıklarıdır.

---

## Fonksiyonlar 

Fonksiyon; **dönüş tipi + isim + parametreler + gövde**'den oluşur.

```cpp
donus_tipi fonksiyon_ismi(parametreler) {
    // yapılacak işlemler
    // gerekirse return ile değer döndürülür
}
```

---

### 1. Fonksiyon Tanımlama

```cpp
int topla(int a, int b) {     // dönüş tipi: int
    return a + b;             // sonucu geri döndür
}
```

> **İpucu:** İsimler anlamlı olmalı: `topla`, `ortalama_al`, `ucgen_alan_hesapla` gibi.

---

### 2. Fonksiyon Çağırma

```cpp
int sonuc = topla(3, 4);   // fonksiyonu çağır ve dönen değeri al
cout << sonuc;             // 7
```

> Parantez `()` fonksiyon çağrısı yapıldığını gösterir. Parametre varsa değerler parantez içinde verilir.

---

### 3. Parametreler

Bir fonksiyon çalışmak için **parametre** alabilir.

```cpp
void tekrar_yaz(char karakter, int adet) {   // geri dönüş yok → void
    for (int i = 0; i < adet; i++)
        cout << karakter;
    cout << endl;
}
```

Çağırma:

```cpp
tekrar_yaz('z', 5);   // zzzzz
```

---

### 4. Dönüş Tipleri

Fonksiyon bir **değer** döndürebilir.

* `int` → tam sayı
* `double/float` → ondalıklı sayı
* `bool` → doğru/yanlış
* `char`/`string` → karakter/metin
* `void` → **hiçbir şey döndürmez** (sadece iş yapar)

Örnekler:

```cpp
bool cift_mi(int x) { return x % 2 == 0; }
double ortalama(double x, double y) { return (x + y) / 2.0; }
```

---

### 5. `void` Fonksiyonlar (Sadece İş Yapar)

```cpp
void ekrana_yaz() {
    for (int i = 0; i < 10; i++) cout << "Deneyap" << endl;
    for (int i = 0; i < 2;  i++) cout << "Merhaba!" << endl;
}
```

Çağırma:

```cpp
ekrana_yaz();   // çıktı üretir ama değer döndürmez
```

> `return;` yazılabilir ama **değer** içermez.

---

### 6. `return` ile Akış

`return` çalıştığı anda fonksiyon **biter**.

```cpp
int mutlak(int n) {
    if (n < 0) return -n;   // buradan sonra fonksiyon biter
    return n;
}
```

---

### 7. Değişken Kapsamı — Global & Yerel

```cpp
int sayi = 2;        // global

void fonksiyon1() {  // globali değiştirir
    sayi = 5;
}

void fonksiyon2() {  // yerel (local) sayi → globali ETKİLEMEZ
    int sayi = 7;
}

int main() {
    fonksiyon1();    // global sayi = 5
    fonksiyon2();    // local sayi = 7 (sadece fonksiyon içinde)
    cout << sayi;    // 5
}
```

> Aynı isimli **yerel** değişken, sadece kendi fonksiyonu içinde geçerlidir.

---

### 8. Dizileri ve Matrisleri Fonksiyona Göndermek

Diziler parametre olarak gönderilebilir. **Değiştirilmesini istemiyorsak** `const` kullanırız.

**a) Dizide en büyüğü döndürme**

```cpp
int en_buyuk(const int dizi[5]) {
    int enb = dizi[0];
    for (int i = 1; i < 5; i++)
        if (dizi[i] > enb) enb = dizi[i];
    return enb;
}
```

**b) 2×2 matrisin toplamı**

```cpp
int matris_toplami(const int M[2][2]) {
    int toplam = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            toplam += M[i][j];
    return toplam;
}
```

---

## Örnek Projelerden Ne Öğrendik?

* **Fonksiyon tanımı ve çağırmayı** öğrendik.
* **Parametre ve dönüş tipi** farklarını gördük.
* `void` fonksiyonların **çıktı üretip değer döndürmediğini** pekiştirdik.
* **Dizi/matris** gibi yapıları fonksiyonlara **parametre** olarak göndermeyi uyguladık.
* **Değişken kapsamı** (global–yerel) kavramını anladık.

---

## Ödev

Aşağıdaki alıştırmaların **hepsini yapın**:

1. `int kare(int x)` fonksiyonunu yaz ve bir sayının karesini döndür.
2. `bool tam_bolunur_mu(int sayi, int b)` fonksiyonu: `sayi` `b`'ye tam bölünüyorsa **true**, değilse **false** döndürsün.
3. `int dizi_topla(int d[5])` fonksiyonu: 5 elemanlı dizinin toplamını döndürsün.
4. `void yaz_tekrar(string s, int n)` fonksiyonu: `s`'yi `n` kez yan yana yazsın.
5. `int matris_2x2_carpraz_toplam(int M[2][2])` fonksiyonu: `M[0][0] + M[1][1]` değerini döndürsün.

---