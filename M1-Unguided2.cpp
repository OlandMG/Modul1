#include <iostream>
#include <string>
using namespace std;

class Makanan {
public:

    string nama;
    int harga;

    void displayInfo() {
        cout << "Makanan: " << nama << ", Harga: Rp" << harga << endl;
    }
};

struct Kuantitas {

    int jumlah;
};

int main() {

    Makanan ayamGoreng;
    ayamGoreng.nama = "Ayam Goreng";
    ayamGoreng.harga = 15000;

    ayamGoreng.displayInfo();

    Kuantitas pesananAyam;
    pesananAyam.jumlah = 3;

    cout << "Pesanan Ayam Goreng: " << pesananAyam.jumlah << " porsi" << endl;

    return 0;
}
