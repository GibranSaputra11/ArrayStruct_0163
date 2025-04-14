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
    Hero arhero;

    cout << "Masukan nama hero = ";
    cin >> arhero.Nama;
    cout << "Masukan role hero = ";
    cin >> arhero.Role;
    cout << "Masukan tipe hero = ";
    cin >> arhero.Tipe;

    cout << endl;
    cout << "==== Menampilkan Hero ====";

    cout << endl;
    cout << "Nama Hero = " << arhero.Nama << endl;
    cout << endl;

    cout << "Role Hero = " << arhero.Role << endl;
    cout << endl;

    cout << "Tipe Hero = " << arhero.Tipe << endl;
    cout << endl;


}