// Görev: 5 öğrencinin notunu klavyeden al ve sırayla yazdır.
#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){     // 5 tekrar
        int notu;                // her öğrenci için not
        cout << i << ". ogrenci notu: ";
        cin >> notu;             // notu al
        cout << "Not: " << notu << endl;
    }
    return 0;
}
