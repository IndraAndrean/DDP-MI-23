#include <iostream>

/*
    TUGAS MEMBUAT MEMBUAT PROGRAM PERMEN BUAT KAWAN
*/
using namespace std;


int main() {
    int A, B;
   std::cin >> A >> B;

    int permen_MasingMasing = A / B;  
    int sisa_Permen = A % B;         

    std::cout << "masing-masing " << permen_MasingMasing << endl;
    std::cout << "bersisa " << sisa_Permen << endl;

    return 0;
}
