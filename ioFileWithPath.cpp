#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukan Nama File :";
    cin >> NamaFile;

    //mmembuka file dalam mode menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout <<  ">= Menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
}