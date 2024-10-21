#include <iostream>
using namespace std;
int main (){
    string nama,nim;
    int angka_tbk;
    int angka_benar = 5;
    int check = 0;

    cout << "===SELAMAT DATANG===" << endl;
    cout << "Silahkan Login Terlebih Dahulu" << endl;

    do
    {
        cout << "Silahkan Masukkan Nama : ";
        cin >> nama;
        cout << "Silahkan Masukkan NIM : ";
        cin >> nim;

        if (nama == "fariz" && nim == "150")
        {
            check = 1;
        }
    } while (check == 0);
    
    cout << "===LOGIN BERHASIL===" << endl;

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
}