#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;

    //membuka file dalam mode menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contoh.txt");

    cout << ">= Menulis file, \'q\' untuk keluar"; << endl;

}