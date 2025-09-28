// Amaç: 15'ten 0'a üçer üçer azalan sayıları yazdır.
#include <iostream>
using namespace std;
int main(){
    for(int i=15; i>=0; i-=3) // 15,12,9,...,0
        cout << i << endl;
    return 0;
}
