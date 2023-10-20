#include <iostream>
using namespace std;
int main()
{
    int angkaturun1, angkaturun2;
    cin >> angkaturun1 >> angkaturun2;
    
    for(int angka = angkaturun1; angka >= angkaturun2; angka-- ){
        cout << angka << " " << endl;
    }
}