#include <iostream>
using namespace std;
int main() {
    int angkaturun;
    cin >> angkaturun;
    
    for(int angka = 1; angka >= angkaturun; angka--){
        cout << angka << " ";
    }
}