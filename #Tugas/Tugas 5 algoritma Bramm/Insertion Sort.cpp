#include <iostream>

// Fungsi untuk melakukan Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Pindahkan elemen dari arr[0..i-1], yang lebih besar dari key,
           ke satu posisi di depan dari posisi saat ini */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    // Meminta pengguna untuk memasukkan panjang array
    std::cout << "Masukkan panjang array: ";
    std::cin >> n;

    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Elemen " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Menampilkan array sebelum diurutkan
    std::cout << "\nArray sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Memanggil fungsi insertionSort untuk mengurutkan array
    insertionSort(arr, n);

    // Menampilkan array setelah diurutkan
    std::cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
