#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string Namafile;
    cout << "Masukan Nama File :";
    cin >> Namafile;
    // membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open (Namafile + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar " << endl;
    // unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam 1 baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q" )break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;

    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open(Namafile, ios :: in);
    cout << endl << ">= Membuka dan membaca file "<< endl;
    // jika file ada maka
    if (infile.is_open()){
        // melakukan perulangan setiap baris
        while (getline(infile, baris )){
            // dan tampilkan disini
            cout << baris << '\n';

        }
        // tutup file tersebut setelah selesai
        infile.close();
    }


}