#include <iostream>
#include <exception>
// untuk obyek exception yg akan digunakan 
#include <array>
// untuk obyek array yg akan kita gunakan;
using namespace std;

int main(){
    cout << "Awal Program "<< endl;
    try {
        array <int , 3> data = {10, 20, 30 };
        // pesan array integer 3 elemen 
        cout << data.at(5) << endl;
        // memanggil array elemen ke 5
            }
            catch (exception& e ){
                // penangkap menggunakan obyek exception
                cout << e.what() << endl;
                // akan dieksekusi karna array data hanya memiliki 3 elemen

            }
            cout << "Baris Program Yang terakhir " << endl;
            return 0;
}

