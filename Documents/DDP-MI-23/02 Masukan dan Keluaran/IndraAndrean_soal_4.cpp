#include <iostream>
/*
    TUGAS MEMBUAT PROGRAM CALCULATOR USER FRIENDLY
*/


using namespace std;

int main() {
    float A, B;
    std::cin >> A >> B;

    
    float HasilPenjumlahan = A + B;
    std::cout << "Hasil dari Penjumlahan " << A << " dengan " << B << " adalah " << HasilPenjumlahan << endl;

    float HasilPengurangan = A - B;
    std::cout << "Hasil dari Pengurangan " << A << " dengan " << B << " adalah " << HasilPengurangan << endl;

    float HasilPerkalian = A * B;
    std::cout << "Hasil dari Perkalian " << A << " dengan " << B << " adalah " << HasilPerkalian << endl;

    float HasilPembagian = A / B;
    std::cout << "Hasil dari Pembagian " << A << " dengan " << B << " adalah " << HasilPembagian << endl;

    return 0;
}
