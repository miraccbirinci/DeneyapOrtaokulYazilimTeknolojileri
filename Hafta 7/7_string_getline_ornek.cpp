#include <iostream>
#include <string>
using namespace std;

int main() {
    string cumle;
    cout << "Bir cumle giriniz: ";
    getline(cin, cumle);

    cout << "Mesaj: " << cumle << endl;
    return 0;
}