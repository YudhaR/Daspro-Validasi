/*
    Program Validasi
    Ket : Program untuk cek bilangan 0
    By  : Yudha Rizqia Grafer
    Tgl : 05 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma
    cout << "Masukan Bilangan : ";
    cin >> bilangan;
    if (bilangan > 0)
    {
        cout << bilangan << " adalah bilangan > 0" << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
