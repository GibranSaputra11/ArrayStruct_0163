#include <iostream>
using namespace std;

struct Hero
{
    string Nama;
    string Role;
    string Tipe;
};

int main()
{
    Hero arhero[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Hero Ke-" << i + 1 << endl;
        cout << "Masukan nama hero = ";
        cin >> arhero[i].Nama;
        cout << "Masukan role hero = ";
        cin >> arhero[i].Role;
        cout << "Masukan tipe hero = ";
        cin >> arhero[i].Tipe;
    }

    cout << endl;
    cout << "==== Menampilkan Hero ====" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Menampilkan Hero ke-" <<  i + 1 << endl;

        cout << "Nama Hero = " << arhero[i].Nama << endl;
        cout << "Role Hero = " << arhero[i].Role << endl;
        cout << "Tipe Hero = " << arhero[i].Tipe << endl;
    }
}