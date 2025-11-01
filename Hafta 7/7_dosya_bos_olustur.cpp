#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("deneyap.txt"); // yoksa olusturur
    // dosya.close() otomatik de kapanır ama alışkanlık olarak kapatabiliriz
    dosya.close();
    cout << "deneyap.txt olusturuldu." << endl;
    return 0;
}