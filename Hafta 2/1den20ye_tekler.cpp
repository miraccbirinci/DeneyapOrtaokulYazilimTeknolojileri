// Görev: 1'den 20'ye kadar olan tek sayıları ekranda göster.
#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=20; i++)   // 1..20
        if(i%2==1)             // tekse
            cout << i << " ";  // yaz
    return 0;
}
