// Amaç: 1..19 arasındaki tek sayıları yazdırmak (for).
#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<20; i++)  // 1'den 19'a
        if(i%2==1)           // tek kontrolü
            cout << i << endl;
    return 0;
}
