#include <iostream>
using namespace std;
int main() {
    
    string karakter;
    getline (cin, karakter);
    
    for(int angka = karakter.size()-1; angka >= 0; angka--){
        cout << karakter[angka];
    }
    
    return 0;
}