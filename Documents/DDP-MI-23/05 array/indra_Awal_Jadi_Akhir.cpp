#include <iostream>
using namespace std;
int main() {
    int awaljadiakhir;
    cin >> awaljadiakhir;
    getchar();
    
    string karakter[awaljadiakhir];
    
    for (int angka = 0; angka < awaljadiakhir; angka++){
        getline(cin, karakter[angka]);
    }
    for (int angka = awaljadiakhir-1; angka >= 0; angka--){
        cout << karakter[angka] << endl;
    }
    return 0;
}