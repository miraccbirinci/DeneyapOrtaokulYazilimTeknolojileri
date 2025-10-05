// Görev: 1'den 30'a kadar 3'erli sayıları (1,4,7,...) soldan sağa göster.
#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=30; i+=3)  // her adımda +3
        cout << i << " ";
    return 0;
}
