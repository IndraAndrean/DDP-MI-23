#include <iostream>
using namespace std;
int main() {
    int polabilanganmenurun1, polabilanganmenurun2, polabilanganmenurun3;
    cin >> polabilanganmenurun1 >> polabilanganmenurun2 >> polabilanganmenurun3;
    
    for(int angka = polabilanganmenurun1; angka >= polabilanganmenurun2; angka += polabilanganmenurun3){
        cout << angka << " ";
    }
}