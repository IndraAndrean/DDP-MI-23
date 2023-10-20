#include <iostream>
using namespace std;
int main() {
    int kiri, kanan;
    cin >> kiri >> kanan;
    
    for(int angka = 1; angka <= kiri; angka++){
        for (int angka2 = 1; angka2 <= kanan; angka2++){
            cout << angka * angka2 << " ";
        }
        cout << endl;
    }
    
    return 0;
}