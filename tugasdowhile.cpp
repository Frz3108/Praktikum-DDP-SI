#include <iostream>
using namespace std;
int main (){
    int angka_tbk;
    int angka_benar = 5;
    cout << "===Selamat Datang di Permainan Angka===" << endl;
    do
    {
        cout << "Tebak Angka dari 1-10 : ";
        cin >> angka_tbk;
        if (angka_tbk > angka_benar)
        {
            cout << "Angka Terlalu Besar" << endl;
        } else if (angka_tbk < angka_benar)
        {
            cout << "Angka Terlalu Kecil"<< endl;
        } else {
            cout << "Selamat Angka Tebakan Anda Benar : " << angka_benar;
            break;
        }
        
    } while (angka_tbk = angka_benar);
    return 0;
} 