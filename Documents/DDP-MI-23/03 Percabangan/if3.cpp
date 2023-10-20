#include <iostream>
using namespace std;

int main() {
      int a;
    cin >> a;
    if(a > -1 && a < 10) {
        cout << "Satuan" << endl;
    } else if( a > 9 && a < 100){
        cout << "Puluhan" << endl;
    } else if(a > 99 && a < 1000){
        cout << "Ratusan" << endl;
    }else {
        cout << "Tidak Tahu";
    }
    
    return 0;
}
