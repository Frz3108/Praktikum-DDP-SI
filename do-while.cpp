#include <iostream>
using namespace std;

int main(){
    cout << "===Selamat Datang di Login Perusahaan===" << endl;
    cout << "Silahkan Login" << endl;
    string nama, nim;
    int check = 0;
    cout << "Masukkan Nama dan NIM" << endl;
    /*for (int i = 0; i <= 2; i++)
    {
        cout << "Nama : ";
        cin >> nama;
        cout << "NIM : ";
        cin >> nim;

        if (nama == "robi" && nim == "123")
    {
        break;
    }
    }*/
   do
   {
        cout << "Nama : ";
        cin >> nama;
        cout << "NIM : ";
        cin >> nim;

        if (nama == "robi" && nim == "123")
    {
        check = 4;
    }
    check++;
   } while (check < 3);
   
    cout << "===LOGIN BERHASIL===" << endl;
    return 0;
}