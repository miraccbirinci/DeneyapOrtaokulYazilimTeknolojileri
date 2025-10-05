// Amaç: 1..19 arasındaki tek sayıları yazdırmak (while).
#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<20){
        if(i%2==1)           // tek ise yaz
            cout << i << endl;
        i++;                 // sayacı arttır
    }
    return 0;
}
