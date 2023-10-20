#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    for(int angka = a; angka >= b; angka += c){
        cout << angka << " ";
    }
}