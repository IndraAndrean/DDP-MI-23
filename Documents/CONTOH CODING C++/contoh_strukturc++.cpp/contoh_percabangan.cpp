#include <iostream>
using namespace std;

int main() {
    int pil;
    cin >> pil;

    if(pil == 1){
        cout << "jenis kelamain saya adalah laki laki";
    } else if (pil == 2){
        cout << "jenis kelamin saya adalah perempuan";
    } else {
        cout << "inputkan kode tidak tersedia";
    }
}