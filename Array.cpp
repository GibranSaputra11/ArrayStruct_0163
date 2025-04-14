#include <iostream>
using namespace std;

// sebuah arry yang tidak memiliki ukuran
string matkul[] = {"Pemrograman", "Algoritma"};

// sebuah arry yang memiliki ukuran
float nilaiAkhir[2] = {1, 2.5};

//membuat array yang masih kosong
char grade[5];

int main()
{
    cout << "Nama Matakuliah : " << matkul[1] << endl;
    matkul[0] = "Logika Teknik Pemrograman";
    cout << "Nama Matakuliah : " << matkul[0] << endl;

    for ( int i = 0; i < 2 ; i++)
    {
        cout << "Nilai akhir ke-" << i + 1 << " = " << nilaiAkhir[i] << endl;
    }

}