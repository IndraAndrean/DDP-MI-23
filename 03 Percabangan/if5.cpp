#include <iostream>
using namespace std;
int main() {
    char IPK;
    cin >> IPK;
    
    switch(IPK){
        case 'A':
            cout << "Nilai kamu 100";
            break;
        case 'B':
            cout << "Nilai kamu 76 - 99";
                break;
        case 'C':
            cout << "Nilai kamu dibawah 76 :(";
            break;
        default:
            cout << "Nilai Invalid";
    }
            return 0;
    }