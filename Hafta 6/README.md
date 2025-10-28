# C++ Nesne Yönelimli Programlama (OOP) Ders Notları

## Giriş

Gerçek dünyada her şey birer **nesne**dir: bir araba, bir öğrenci, bir futbolcu veya bir nokta.
Nesnelerin **özellikleri** (renk, yaş, hız) ve **davranışları** (hareket etme, konuşma, hesaplama) vardır.
Bilgisayarda bu fikirleri modellemek için **Nesne Yönelimli Programlama (OOP)** kullanılır.

C++ dili OOP'yi destekleyen en güçlü dillerden biridir.

---

## 1. Sınıf (Class) ve Nesne (Object)

**Sınıf**, bir nesnenin planıdır.
**Nesne**, o sınıfın örneğidir.

```cpp
class Araba {
public:
    string marka;
    int hiz;

    void hizlan() {
        hiz += 10;
        cout << "Yeni hiz: " << hiz << endl;
    }
};

int main() {
    Araba araba1;
    araba1.marka = "Toyota";
    araba1.hiz = 90;
    araba1.hizlan();
}
```

---

## 2. Yapıcı (Constructor) ve Yıkıcı (Destructor) Fonksiyonlar

**Constructor**: Nesne oluşturulduğunda otomatik çalışan özel fonksiyondur.
**Destructor**: Nesne yok edilirken otomatik çalışır.

```cpp
class Futbolcu {
public:
    string ad;
    int formaNo;

    Futbolcu(string isim, int no) {   // Yapıcı
        ad = isim;
        formaNo = no;
        cout << ad << " olusturuldu!" << endl;
    }

    ~Futbolcu() {                     // Yıkıcı
        cout << ad << " nesnesi yok edildi!" << endl;
    }
};

int main() {
    Futbolcu f1("Burak", 10);
}
```

---

## 3. Kapsülleme (Encapsulation)

Kapsülleme, verileri **koruma altına almak** demektir.
Bazı değişkenleri dışarıdan gizleyip sadece belirli fonksiyonlarla erişilmesini sağlarız.

```cpp
class Ogrenci {
private:
    int yas;  // Gizli veri

public:
    void setYas(int y) {
        if (y > 0) yas = y;
    }

    int getYas() {
        return yas;
    }
};

int main() {
    Ogrenci o1;
    o1.setYas(15);
    cout << "Yas: " << o1.getYas();
}
```

Burada `yas` değişkeni dışarıdan doğrudan değiştirilemez.
Sadece `setYas` ve `getYas` ile erişilir.

---

## 4. Kalıtım (Inheritance)

Bir sınıf, başka bir sınıfın özelliklerini **miras** alabilir.
Bu sayede kod tekrarını azaltırız.

```cpp
class Hayvan {
public:
    void sesCikar() {
        cout << "Bir hayvan ses cikardi!" << endl;
    }
};

class Kedi : public Hayvan {
public:
    void miyavla() {
        cout << "Miyav!" << endl;
    }
};

int main() {
    Kedi k;
    k.sesCikar();  // Üst sınıftan geldi
    k.miyavla();   // Alt sınıfa özel
}
```

---

## 5. Fonksiyon Aşırı Yükleme (Overloading)

Aynı isimde birden fazla fonksiyon tanımlayabiliriz,
ama **parametre sayısı** veya **türü** farklı olmalıdır.

```cpp
class Hesap {
public:
    int topla(int a, int b) {
        return a + b;
    }

    double topla(double a, double b) {
        return a + b;
    }
};

int main() {
    Hesap h;
    cout << h.topla(2, 3) << endl;
    cout << h.topla(2.5, 3.7) << endl;
}
```

---

## 6. Polimorfizm (Polymorphism)

Polimorfizm, bir fonksiyonun **farklı şekillerde davranabilmesidir**.
Aynı isimli fonksiyonlar farklı sınıflarda farklı işler yapabilir.

```cpp
class Hayvan {
public:
    void sesCikar() {
        cout << "Hayvan ses cikardi!" << endl;
    }
};

class Kedi : public Hayvan {
public:
    void sesCikar() {
        cout << "Kedi miyavladi!" << endl;
    }
};

class Kopek : public Hayvan {
public:
    void sesCikar() {
        cout << "Kopek havladi!" << endl;
    }
};

int main() {
    Hayvan h;
    Kedi k;
    Kopek kp;

    h.sesCikar();
    k.sesCikar();
    kp.sesCikar();
}
```

Her sınıf kendi `sesCikar()` fonksiyonunu yazarak davranışını değiştirir.

---

## 7. Gerçek Hayat Örneği – Nokta Sınıfı

```cpp
class Nokta {
    int x, y;
public:
    void git(int yeni_x, int yeni_y) {
        x = yeni_x;
        y = yeni_y;
    }

    void goster() {
        cout << "X: " << x << ", Y: " << y << endl;
    }

    void sifirMi() {
        if (x == 0 && y == 0)
            cout << "Nokta sifir noktasinda." << endl;
        else
            cout << "Nokta sifir noktasinda degil." << endl;
    }
};
```

---

## 8. Kazanımlar

* Sınıf ve nesne kavramlarını öğrendik.
* Constructor ve destructor farkını kavradık.
* Verileri korumak için kapsülleme kullandık.
* Kalıtım ile kod tekrarını azalttık.
* Overloading ile aynı isimde farklı işlevler tanımladık.
* Polimorfizm ile aynı davranışı farklı nesnelerde değiştirdik.

---

## Ödevler

1. **Ogrenci** sınıfına yaş ve not ortalaması ekle.
   * `yas` private olmalı.
   * Ortalama hesaplayan fonksiyon yaz.

2. **Hayvan** sınıfından türetilen **Kuş** sınıfı oluştur.
   * `sesCikar()` fonksiyonunu değiştir.

3. **Matematik** sınıfı oluştur.
   * Aynı isimli `carp()` fonksiyonlarını farklı parametrelerle tanımla.

---