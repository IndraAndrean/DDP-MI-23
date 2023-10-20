#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int matriks[A][B];
    
    for(int z = 0; z < A; z++)
    {
        for (int f = 0; f < B; f++)
        {
            cin >> matriks [z][f];
        }
    }
    for(int z = A-1; z >= 0; z--)
    {
        for(int f = B-1; f >= 0;  f--)
        {
            cout << matriks [z][f] << " ";
        }
        cout << endl;
    }
    
    return 0;
}