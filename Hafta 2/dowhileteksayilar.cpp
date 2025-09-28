// Amaç: 1..19 arasındaki tek sayıları yazdırmak (do-while).
#include <iostream>
using namespace std;
int main(){
    int i=1;
    do{
        if(i%2==1)           // tek ise yaz
            cout << i << endl;
        i++;                 // sayacı arttır
    }while(i<20);            // koşul kontrolü en sonda
    return 0;
}
