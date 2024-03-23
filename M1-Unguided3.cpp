#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
    // Membuat map dengan key string (nama) dan value int (usia)
    map<string, int> dataMhs;

    // Mengisi data ke dalam map
    dataMhs["Dian"] = 22;
    dataMhs["Bambang"] = 23;
    dataMhs["Citra"] = 21;

    // Mengakses dan menampilkan data dari map
    cout << "Usia Dian: " << dataMhs["Dian"] << " tahun" << endl;
    cout << "Usia Bambang: " << dataMhs["Bambang"] << " tahun" << endl;
    cout << "Usia Citra: " << dataMhs["Citra"] << " tahun" << endl;

    return 0;
}
