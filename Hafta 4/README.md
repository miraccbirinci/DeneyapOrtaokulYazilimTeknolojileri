# C++ Diziler (Arrays) ve Katarlar (Strings) Ders Notları

## Giriş
Program yazarken bazen birçok veriyi aynı anda saklamak isteriz:
- “5 öğrencinin notlarını tutmak.”
- “10 sayının ortalamasını almak.”
- “Bir ismi harf harf çözümlemek.”

İşte bu tür durumlarda **diziler (arrays)** ve **karakter dizileri (strings)** kullanırız.

---

## Diziler (Arrays)

Diziler, **aynı türden birden fazla veriyi** tek bir değişkende saklamamızı sağlar.  
Her elemana **indis (index)** numarasıyla ulaşırız.
> Dikkat: Dizilerde indeks **0’dan başlar.**

---

### 1. Dizi Tanımlama
Bir dizi tanımlarken **türü** ve **boyutu** belirtilir:
```cpp
int sayilar[5];        // 5 elemanlı bir tamsayı dizisi
float notlar[3];       // 3 elemanlı ondalıklı sayı dizisi
char harfler[4];       // 4 karakterlik dizi
```

İstersen diziyi **başlangıçta değerlerle** de oluşturabilirsin:
```cpp
int yaslar[5] = {15, 14, 17, 12, 16};
```

---

### 2. Dizi Elemanlarına Erişim
Her eleman indeks numarasıyla çağrılır:
```cpp
cout << yaslar[0]; // 15
cout << yaslar[4]; // 16
```

Bir döngü kullanarak tüm elemanları gezebiliriz:
```cpp
for(int i = 0; i < 5; i++) {
    cout << yaslar[i] << endl;
}
```

---

### 3. Kullanıcıdan Dizi Elemanı Almak
Dizilere klavyeden değer de girebiliriz:
```cpp
int notlar[5];
for(int i = 0; i < 5; i++) {
    cout << i + 1 << ". notu gir: ";
    cin >> notlar[i];
}
```

---

### 4. Dizilerle Koşul Kullanımı
Diziler üzerinde **if** yapılarıyla kontrol yapılabilir.

**5’e bölünebilen sayıları sayma:**
```cpp
if(sayilar[i] % 5 == 0)
    sayac++;
```

**Tek ve çift sayıları ayırma:**
```cpp
if(sayilar[i] % 2 == 0)
    cift++;
else
    tek++;
```

---

### 5. Dizide Arama Yapmak
Bir değerin dizide olup olmadığını kontrol etmek için **döngü** kullanılır:
```cpp
if(sayilar[i] == aranan)
    cout << "Sayi bulundu!";
```

---

### 6. Dizide En Büyük Elemanı Bulmak
Bir dizideki **en büyük değeri** bulmak için:
```cpp
int maks = sayilar[0];
for(int i = 1; i < n; i++) {
    if(sayilar[i] > maks)
        maks = sayilar[i];
}
```

---

### 7. Diziyi Sıralamak (Selection Sort)
Dizideki elemanları küçükten büyüğe sıralamak için:
```cpp
for(int i = 0; i < n-1; i++) {
    int minIndex = i;
    for(int j = i+1; j < n; j++) {
        if(sayilar[j] < sayilar[minIndex])
            minIndex = j;
    }
    int temp = sayilar[i];
    sayilar[i] = sayilar[minIndex];
    sayilar[minIndex] = temp;
}
```

---

### 8. Diziler Arasında İşlem Yapmak
İki dizinin aynı sıradaki elemanlarını toplayabiliriz:
```cpp
hafta3[i] = hafta1[i] + hafta2[i];
```

---

## Katarlar (Strings)

---

### 1. Tanım
**Katar (string)**, karakterlerden oluşan bir veri türüdür.  
C++’ta iki şekilde tanımlanabilir:
- `string` türüyle
- `char` dizisiyle

---

### 2. `string` Kullanımı
```cpp
string isim = "Mirac";
cout << "Merhaba " << isim;
```

---

### 3. `char` Dizisi ile Kullanım
```cpp
char isim[5] = {'A', 'y', 's', 'e', '\0'};
cout << isim;
```
> `\0` karakteri, dizinin **bittiğini** gösterir.  
> Bu karakter olmazsa ekrana hatalı veri yazılabilir.

---

### 4. Karakterlere Erişim
Her harfe indeksle ulaşılabilir:
```cpp
cout << isim[0];  // A
cout << isim[3];  // e
```

---

## Örnek Projelerden Ne Öğrendik?
- **Dizilerle** birden fazla veriyi aynı anda saklayabildik.
- **If** yapılarıyla dizi elemanlarını karşılaştırmayı öğrendik.
- **For döngüsüyle** dizi elemanlarını gezebildik.
- **Katarlarla** (strings) metinleri depolamayı ve yazdırmayı gördük.

---

## Ödev
Aşağıdaki alıştırmaların **hepsini yapın:**

1. 5 elemanlı bir dizi oluştur, en küçük sayıyı bul.
2. Kullanıcıdan bir kelime al ve tersten yazdır.
3. 10 elemanlı diziye sayılar gir, sadece **çift sayıları** ekrana yazdır.
4. 2 dizinin elemanlarını toplayarak yeni bir dizi oluştur.

---
