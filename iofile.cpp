#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    // membuka file dalam mode menulis. :
    ofstream outfile;
    // menunjuk ke sebuah nama file.
    outfile.open("contohfile.txt");
    cout << ">= Menulis file, \'q\' untuk keluar "<< endl;
    //umlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // Mendapatkan setiap karakter dalam 1 baris.
        getline(cin, baris);
        // loop akan berhenti jika anda masukan karakter q
        

    }
}