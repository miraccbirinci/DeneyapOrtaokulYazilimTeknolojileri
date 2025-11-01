# README.md — Hafta 7: Kütüphane Kullanımı ve Dosyalama İşlemleri

## Giriş

Bu hafta C++'ta iki önemli şeyi öğreniyoruz:

1. **Kütüphaneler**: Programımıza hazır özellikler kazandırır (ör. ekrana yazdırma, dosya işlemleri, metin işleme).
2. **Dosyalama**: Verileri **kalıcı** olarak saklarız (bilgisayar kapanınca da silinmez).

---

## 1. Sık Kullanılan Kütüphaneler

* `#include <iostream>`: Ekrana yazdırma (`cout`), klavyeden okuma (`cin`).
* `#include <string>`: Metinleri (string) yönetme.
* `#include <cstring>`: C-tipi karakter dizileri için fonksiyonlar (`strlen`, `strcpy` vb.).
* `#include <fstream>`: Dosya işlemleri (**okuma**, **yazma**).

---

## 2. Neden Dosyalama?

* Verileri **kalıcı** saklamak için (ör. not listesi, sonuçlar, ayarlar).
* Sonradan **okuyup** kullanabilmek için.
* Kullanıcı girdilerini saklayıp **analiz** edebilmek için.

---

## 3. Dosya Sınıfları (fstream ailesi)

* `ifstream`: **Okuma** için.
* `ofstream`: **Yazma** için.
* `fstream`: **Hem okuma hem yazma** için.

### Temel işlemler

* `open()`  : Dosyayı açar.
* `is_open()`: Açılıp açılmadığını kontrol eder.
* `<<` ve `>>` veya `getline()` : Yazma/okuma akışları.
* `close()` : Dosyayı kapatır.

### Açma kipleri (modlar)

* `ios::in`   : Okuma.
* `ios::out`  : Yazma (varsa içeriği baştan yazar; üzerine yazar).
* `ios::app`  : Ekleme (dosyanın sonuna yazar).
* `ios::trunc`: Dosyayı açarken içeriği temizler.

> Not: Bazı kaynaklarda `ios::nocreate` geçer; bu modern standart C++'ta yoktur. "Var mı?" diye kontrol etmek için dosyayı `ifstream` ile açmayı deneyip `is_open()` ile yoklayabilirsiniz.

---

## 4. Metin Üzerinde Çalışma (Kütüphane ile)

* `string` (C++ string): Kolay metin yönetimi.
* `char[]` + `<cstring>`: C-tipi karakter dizileri; `strlen()`, `strcpy()` gibi fonksiyonlar.

---

## 5. Örnek Uygulamalar (aşağıdaki .cpp dosyalarına bakınız)

* **Kelime sayma**: Bir cümledeki kelime sayısını bulma.
* **Boş dosya oluşturma ve yazma**.
* **Kullanıcıdan sayıları okuyup dosyaya yazma**.
* **Dosyadan okuma ve ekrana yazdırma**.
* **Dosyaya ekleme (append) modu**.
* **`getline` ile güvenli satır okuma**.

---

## 6. İpuçları

* `is_open()` ile daima dosya açılışını kontrol edin.
* İşiniz bitince `close()` çağırın.
* `getline(cin, değişken)` tam satır okur (boşluklarla birlikte).
* `cin` sonrası `getline` kullanmadan önce gerekirse `cin.ignore()` ile giriş tamponunu temizleyin.

---

## 7. Ödevler

1. Kullanıcıdan isimler alın, her ismi `isimler.txt` dosyasına ekleyin; sonra dosyayı okuyup ekran çıktısı oluşturun.
2. `notlar.txt` dosyasındaki sayıları satır satır okuyup ortalamasını hesaplayın.
3. Kullanıcıdan bir cümle alıp, kelime sayısını bulup `rapor.txt` dosyasına yazın (hem ekrana hem dosyaya).

---
