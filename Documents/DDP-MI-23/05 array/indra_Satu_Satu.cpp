#include <iostream>
using namespace std;
int main() {
    
    string karakter;
    getline (cin, karakter);
    
    for(int angka = 0;  angka < karakter.size(); angka++){
        cout << karakter[angka] << endl;
    }
    return 0;
}