#include <iostream>
#include <string>
using namespace std;

double hitung_nilai_akhir(double keaktifan, double tugas, double ujian) {
    double nilai_murni_keaktifan = keaktifan * 0.20;
    double nilai_murni_tugas = tugas * 0.30;
    double nilai_murni_ujian = ujian * 0.50;
    return nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
}

char tentukan_grade(double nilai_akhir) {
    if (nilai_akhir > 80) {
        return 'A';
    } else if (nilai_akhir > 70) {
        return 'B';
    } else if (nilai_akhir > 56) {
        return 'C';
    } else if (nilai_akhir > 46) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    string nama_siswa; 
    double nilai_keaktifan, nilai_tugas, nilai_ujian;

    cout << "Nama Siswa : ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan : ";
    cin >> nilai_keaktifan;
    cout << "Nilai Tugas : ";
    cin >> nilai_tugas;
    cout << "Nilai Ujian : ";
    cin >> nilai_ujian;

    double nilai_akhir = hitung_nilai_akhir(nilai_keaktifan, nilai_tugas, nilai_ujian);
    char grade = tentukan_grade(nilai_akhir);

    cout << "\nLayar Keluaran" << endl;
    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << nilai_keaktifan * 0.20 << endl;
    cout << "Nilai Tugas * 30% : " << nilai_tugas * 0.30 << endl;
    cout << "Nilai Ujian * 50% : " << nilai_ujian * 0.50 << endl;
    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << nilai_akhir << " dengan grade " << grade << endl;

    return 0;
}

