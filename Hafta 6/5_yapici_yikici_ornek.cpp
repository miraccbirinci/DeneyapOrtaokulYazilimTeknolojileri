// Bu dosya ekran görüntüsündeki sınıf iskeletini aynen içerir.
// Not: Görselde main() yok; burada da eklemedik.

class Ceptelefonu
{
public:
    char  model[30];    // ÜYE: model (metin)
    float fiyat;        // ÜYE: fiyat
    bool  aramaDurum;   // ÜYE: arama durumu
    void  arama();      // ÜYE FONKSİYON bildirimi

    // Yapıcı Metot (Constructs): Nesne oluşturulurken otomatik çalışır
    Ceptelefonu(){
        aramaDurum = false;  // başlangıç değeri
    }

    // Yıkıcı Metot (Deconstructs): Nesne yok edilirken otomatik çalışır
    ~Ceptelefonu(){
        // Görselde gövde boş bırakılmış
    }
};
