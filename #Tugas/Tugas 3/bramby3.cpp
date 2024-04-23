#include <iostream>
#include <string>
using namespace std;

double hitung_tunjangan_jabatan(int golongan) {
    switch (golongan) {
        case 1:
            return 0.05 * 300000;
        case 2:
            return 0.10 * 300000;
        case 3:
            return 0.15 * 300000;
        default:
            return 0;
    }
}

double hitung_tunjangan_pendidikan(string pendidikan) {
    if (pendidikan == "SMA")
        return 0.025 * 300000;
    else if (pendidikan == "D1")
        return 0.05 * 300000;
    else if (pendidikan == "D3")
        return 0.20 * 300000;
    else if (pendidikan == "S1")
        return 0.30 * 300000;
    else
        return 0;
}

double hitung_honor_lembur(int jam_kerja) {
    if (jam_kerja > 8)
        return (jam_kerja - 8) * 3500;
    else
        return 0;
}

int main() {
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    string nama_karyawan, pendidikan;
    int golongan_jabatan, jumlah_jam_kerja;

    cout << "Nama Karyawan : ";
    getline(cin, nama_karyawan);
    cout << "Golongan Jabatan : ";
    cin >> golongan_jabatan;
    cout << "Pendidikan : ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja : ";
    cin >> jumlah_jam_kerja;

    double tunjangan_jabatan = hitung_tunjangan_jabatan(golongan_jabatan);
    double tunjangan_pendidikan = hitung_tunjangan_pendidikan(pendidikan);
    double honor_lembur = hitung_honor_lembur(jumlah_jam_kerja);
    double gaji_pokok = 300000;
    double total_gaji = gaji_pokok + tunjangan_jabatan + tunjangan_pendidikan + honor_lembur;

    cout << "\nLayar Keluaran" << endl;
    cout << "Karyawan yang bernama " << nama_karyawan << endl;
    cout << "Honor yang diterima" << endl;
    cout << "Gaji Pokok Rp " << gaji_pokok << endl;
    cout << "Tunjangan Jabatan Rp " << tunjangan_jabatan << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjangan_pendidikan << endl;
    cout << "Honor Lembur Rp " << honor_lembur << endl;
    cout << "Total Gaji Rp " << total_gaji << endl;

    return 0;
}

