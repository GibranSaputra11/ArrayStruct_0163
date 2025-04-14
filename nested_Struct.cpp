#include <iostream>
#include <string>

using namespace std;

struct Skill
{
    string Skill1;
    string Skill2;
    string Skill3;
};

struct Hero
{
    string Nama;
    string Role;
    string Tipe;
    Skill skilhero;
};

int main()
{
    Hero arhero[3];

    for (int i = 0; i < 3; i++) //Mengisi struktur array
    {
        cout << "Hero Ke-" << i + 1 << endl;
        cout << "Masukan nama hero = ";
        getline(cin, arhero[i].Nama);
        cout << "Masukan role hero = ";
        getline (cin, arhero[i].Role);
        cout << "Masukan tipe hero = ";
        cin >> arhero[i].Tipe;
        cin.ignore(); // agar misa memasukan data dengan format cin

        cout << "Masukan Skill 1 = ";
        getline (cin, arhero[i].skilhero.Skill1);
        cout << "Masukan Skill 2 = ";
        getline (cin, arhero[i].skilhero.Skill2);
        cout << "Masukan Skill 3 = ";
        getline (cin, arhero[i].skilhero.Skill3);
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
        cout << endl;
        cout << "Skill Hero" << endl;
        cout << "Skill 1 = " << arhero[i].skilhero.Skill1 << endl;
        cout << "Skill 2 = " << arhero[i].skilhero.Skill2 << endl;
        cout << "Skill 3 = " << arhero[i].skilhero.Skill3 << endl;

    }
}