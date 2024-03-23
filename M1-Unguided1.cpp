#include <iostream>
using namespace std;

int hitungJumlah(int a, int b) {
    return a + b;
}

float hitungRataRata(int a, int b) {
    return static_cast<float>(a + b) / 2;
}

int main() {

    int num1 = 10, num2 = 20;

    int jumlah = hitungJumlah(num1, num2);
    cout << "Hasil penjumlahan dari 10 + 20 adalah: " << jumlah << endl;

    float rata_rata = hitungRataRata(num1, num2);
    cout << "Hasil Rata Rata dari penjumlahan kedua bilangan tersebut adalah: " << rata_rata << endl;

    return 0;
}
