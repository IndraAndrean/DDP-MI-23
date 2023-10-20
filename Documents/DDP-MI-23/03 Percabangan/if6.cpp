#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 0){
        if (a % 2 == 0){
            cout << "Positif Genap";        
        }   else {
            cout << "Positif Ganjil";
        }
    }else  {
        cout << "Negatif";
    }
}