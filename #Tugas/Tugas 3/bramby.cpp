#include <iostream>
#include <string>
using namespace std;

double hitung_rata_rata(double nilai1, double nilai2, double nilai3) {
    return (nilai1 + nilai2 + nilai3) / 3;
}

string tentukan_juara(double nilai_rata_rata) {
    if (nilai_rata_rata > 80) {
        return "Juara I";
    } else if (nilai_rata_rata > 75) {
        return "Juara II";
    } else if (nilai_rata_rata > 65) {
        return "Juara III";
    } else {
        return "Tidak juara";
    }
}

int main() {
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    string nama_siswa;
    double nilai1, nilai2, nilai3;

    cout << "Nama Siswa : ";
    getline(cin, nama_siswa);
    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    double rata_rata = hitung_rata_rata(nilai1, nilai2, nilai3);
    string juara = tentukan_juara(rata_rata);

    cout << "\nLayar Keluaran\n";
    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata << " dan menjadi juara " << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}

