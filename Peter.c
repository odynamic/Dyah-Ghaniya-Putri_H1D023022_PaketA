#include <stdio.h>

// Fungsi untuk mencetak array
void cetakArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Definisikan Array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};
    int *bab = arr;

    // Cetak isi array sebelum perubahan
    printf("Daftar Halaman Sebelum Perubahan:\n");
    cetakArray(arr, 6);

    // Ubah value pada Array menggunakan pointer
    *(bab + 1) += 2;  
    *(bab + 2) += 3; 
    *(bab + 4) += 1; 

    // Cetak isi array setelah perubahan
    printf("Daftar Halaman Setelah Perubahan:\n");
    cetakArray(arr, 6);

    return 0;
}
