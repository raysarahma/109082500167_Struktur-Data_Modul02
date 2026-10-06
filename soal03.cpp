#include <iostream>
using namespace std;

const int N = 10;

int cariMax(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

int cariMin(int arr[], int n) {
    int mini = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    return mini;
}

void hitungRataRata(int arr[], int n, float &rata) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + arr[i];
    }
    rata = (float) total / n;
}

int main() {
    int arrA[N] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilih;
    float rataRata;

    do {
        cout << "\n--- Menu Program Array ---" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata - rata" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan : ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Isi array : ";
            for (int i = 0; i < N; i++) {
                cout << arrA[i] << " ";
            }
            cout << endl;
        } else if (pilih == 2) {
            cout << "Nilai maksimum = " << cariMax(arrA, N) << endl;
        } else if (pilih == 3) {
            cout << "Nilai minimum = " << cariMin(arrA, N) << endl;
        } else if (pilih == 4) {
            hitungRataRata(arrA, N, rataRata);
            cout << "Nilai rata - rata = " << rataRata << endl;
        } else if (pilih == 5) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak ada, coba lagi." << endl;
        }
    } while (pilih != 5);

    return 0;
}
