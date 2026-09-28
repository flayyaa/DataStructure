#include <iostream>
using namespace std;
struct nilaiSTD{
    int clo1;
    int clo2;
    int clo3;
    int clo4;
    double nilaiAkhir;
    string indeks;
};

double hitungNilaiAkhir(double clo1, double clo2, double clo3, double clo4) {
    double hasil=clo1*0.3 + clo2*0.3 + clo3*0.2 + clo4*0.2;
    return hasil;
}

int main() {
    nilaiSTD mahasiswa;
    cout << "Masukkan nilai CLO1: ";
    cin >> mahasiswa.clo1;
    cout << "Masukkan nilai CLO2: ";
    cin >> mahasiswa.clo2;
    cout << "Masukkan nilai CLO3: ";
    cin >> mahasiswa.clo3;
    cout << "Masukkan nilai CLO4: ";
    cin >> mahasiswa.clo4;
    mahasiswa.nilaiAkhir = hitungNilaiAkhir(mahasiswa.clo1, mahasiswa.clo2, mahasiswa.clo3, mahasiswa.clo4);
    return 0;
}