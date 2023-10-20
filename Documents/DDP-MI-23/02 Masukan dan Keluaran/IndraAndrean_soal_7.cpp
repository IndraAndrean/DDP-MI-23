#include <iostream>

/*
    Tugas Membuat Program Tempat Duduk Teman
*/

using namespace std;

int main() {
    std::string TempatDudukTemen[12];
    
    std::cin >> TempatDudukTemen[0] >> TempatDudukTemen[1] >> TempatDudukTemen[2];
    std::cin >> TempatDudukTemen[3] >> TempatDudukTemen[4] >> TempatDudukTemen[5];
    std::cin >> TempatDudukTemen[6] >> TempatDudukTemen[7] >> TempatDudukTemen[8];
    std::cin >> TempatDudukTemen[9] >> TempatDudukTemen[10] >> TempatDudukTemen[11];
    
    std::cout << TempatDudukTemen[0] << " " << TempatDudukTemen[3] << " " << TempatDudukTemen[6] << " " << TempatDudukTemen[9] << endl;
    std::cout << TempatDudukTemen[1] << " " << TempatDudukTemen[4] << " " << TempatDudukTemen[7] << " " << TempatDudukTemen[10] << endl;
    std::cout << TempatDudukTemen[2] << " " << TempatDudukTemen[5] << " " << TempatDudukTemen[8] << " " << TempatDudukTemen[11] << endl;
    
    return 0;
}