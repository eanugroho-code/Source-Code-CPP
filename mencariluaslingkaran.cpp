// Program untuk menghitung luas dan keliling lingkaran
#include <iostream>
#include <cmath>

using namespace std;

// rumus  luas lingkaran
double luas(double r) {
    double luas;
    luas = M_PI * r * r;
    return luas;
}

// rumus keliling lingkaran
double keliling(double r) {
    double keliling;
    keliling = 2 * M_PI * r;
    return keliling;
}

int main()
{
    double r, luasLingkaran, kelilingLingkaran;

    // Input jari-jari
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    // Hitung luas dan keliling
    luasLingkaran = luas(r);
    kelilingLingkaran = keliling(r);

    // Tampilkan hasil
    cout << "Luas Lingkaran: " << luasLingkaran << endl;
    cout << "Keliling Lingkaran: " << kelilingLingkaran << endl;

    return 0;
}
    
