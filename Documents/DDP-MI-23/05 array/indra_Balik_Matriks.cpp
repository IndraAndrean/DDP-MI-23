#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int matriks[A][B];
    
    for(int angka = 0; angka < A; angka++)
    {
        for (int angka2 = 0; angka2 < B; angka2++)
        {
            cin >> matriks [angka][angka2];
        }
    }
    for(int angka = A-1; angka >= 0;angka--)
    {
        for(int angka2 = B-1; angka2 >= 0;  angka2--)
        {
            cout << matriks [angka][angka2] << " ";
        }
        cout << endl;
    }
    
    return 0;
}