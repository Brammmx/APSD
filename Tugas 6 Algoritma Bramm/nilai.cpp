#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Function to calculate nilai huruf based on nilai hasil
char calculateGrade(double nilaiHasil) {
    if (nilaiHasil >= 80) {
        return 'A';
    } else if (nilaiHasil >= 70) {
        return 'B';
    } else if (nilaiHasil >= 56) {
        return 'C';
    } else if (nilaiHasil >= 47) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int banyakData;
    cout << "Masukkan banyak data: ";
    cin >> banyakData;

    vector<string> nama(banyakData);
    vector<double> nilaiUTS(banyakData);
    vector<double> nilaiUAS(banyakData);
    vector<double> nilaiHasil(banyakData);
    vector<char> nilaiHuruf(banyakData);

    // Input data
    for (int i = 0; i < banyakData; ++i) {
        cout << "Masukkan nama mahasiswa ke-" << i+1 << ": ";
        cin >> nama[i];
        cout << "Masukkan nilai UTS: ";
        cin >> nilaiUTS[i];
        cout << "Masukkan nilai UAS: ";
        cin >> nilaiUAS[i];

        // Hitung nilai hasil
        nilaiHasil[i] = (nilaiUAS[i] * 0.4) + (nilaiUTS[i] * 0.6);

        // Hitung nilai huruf
        nilaiHuruf[i] = calculateGrade(nilaiHasil[i]);
    }

    // Tampilkan tabel
    cout << "\n| No | Nama Mahasiswa | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
    cout << "+----+----------------+-----------+-----------+-------------+-------------+\n";
    for (int i = 0; i < banyakData; ++i) {
        cout << "| " << i+1 << "  | " << setw(14) << nama[i] << " | " << setw(9) << nilaiUTS[i] << " | " 
             << setw(9) << nilaiUAS[i] << " | " << setw(11) << fixed << setprecision(1) << nilaiHasil[i] << " | "
             << setw(11) << nilaiHuruf[i] << " |\n";
    }
    cout << "+----+----------------+-----------+-----------+-------------+-------------+\n";

    return 0;
}