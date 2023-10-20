#include <iostream>
using namespace std;
int main() {
    int polabilanganmenaik1, polabilanganmenaik2, polabilanganmenaik3;
    cin >> polabilanganmenaik1 >> polabilanganmenaik2 >> polabilanganmenaik3;
    
    for (int angka = polabilanganmenaik1; angka <= polabilanganmenaik2; angka += polabilanganmenaik3){
        cout << angka << " ";
    }
}