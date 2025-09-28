# 📘 C++ Karar Yapıları ve Döngüler Ders Notları

## Giriş
Merhaba çocuklar!  
Bugün sizlerle bilgisayar programlarında çok önemli olan **karar yapıları** ve **döngüleri** öğreneceğiz.  

Program yazarken bazen şunu sormak isteriz:  
- “Eğer sayı pozitifse şunu yap, değilse başka bir şey yap.”  
- “Bir işlemi 10 kere tekrarla.”  

İşte bunları **karar yapıları** ve **döngüler** ile yapıyoruz.  

---

## Karar Yapıları

### 1. `if` ve `else`
- `if` → “Eğer … doğruysa bunu yap.”  
- `else` → “Değilse başka bir şey yap.”  

**Örnek:**
```cpp
int sayi = 5;
if(sayi > 0) {
    cout << "Pozitif sayi!";
} else {
    cout << "Negatif sayi!";
}
```

### 2. `else if`
Birden fazla ihtimali kontrol etmek için kullanılır.  
```cpp
if(sayi < 0) {
    cout << "Negatif";
} else if(sayi == 0) {
    cout << "Sifir";
} else {
    cout << "Pozitif";
}
```

### 3. `switch`
Bir değişkenin değerine göre seçim yapar. Özellikle menülerde kullanılır.  

```cpp
char islem = '+';
switch(islem) {
    case '+': cout << "Toplama"; break;
    case '-': cout << "Cikarma"; break;
    default: cout << "Hatali giris!";
}
```

---

## Döngüler

Döngüler, bilgisayara **aynı işlemi tekrar tekrar yaptırmak** için kullanılır.

### 1. `for` Döngüsü
Önceden kaç kere çalışacağını biliyorsak kullanırız.  
```cpp
for(int i=1; i<=5; i++) {
    cout << i << " ";   // 1 2 3 4 5
}
```

### 2. `while` Döngüsü
Bir şart **doğru olduğu sürece** çalışır.  
```cpp
int i=1;
while(i<=5) {
    cout << i << " ";
    i++;
}
```

### 3. `do-while` Döngüsü
En az bir kere çalışır, sonra koşulu kontrol eder.  
```cpp
int i=1;
do {
    cout << i << " ";
    i++;
} while(i<=5);
```

---

## Örnek Projelerden Ne Öğrendik?
- **Karar yapıları** ile sayının 3’e bölünüp bölünmediğini bulduk.  
- **If-else** ile yaşa göre bilet fiyatı hesapladık.  
- **Switch-case** ile basit bir hesap makinesi yaptık.  
- **For döngüsü** ile 1’den 20’ye kadar tek sayıları yazdırdık.  
- **While döngüsü** ile 100’den geriye saydık.  
- **Do-while** ile en az 1 kere çalışan döngü kurduk.  

---

## Ödev
Şimdi sıra sizde! Aşağıdaki problemlerden **birini seçin ve çözün**:

1. 1’den 50’ye kadar olan **çift sayıları** ekrana yazdıran programı yaz.  
2. Kullanıcıdan yaşını alan ve şu çıktıyı veren programı yaz:  
   - 0–12 yaş: “Çocuk”  
   - 13–17 yaş: “Genç”  
   - 18+ yaş: “Yetişkin”  
3. Kullanıcıdan bir sayı iste ve bu sayının **çarpım tablosunu** (1’den 10’a kadar) ekrana yazdır.  

---
