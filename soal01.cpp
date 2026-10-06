#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3];
    int tambah[3][3], kurang[3][3], kali[3][3];
    int i, j, k;

    cout << "Masukkan elemen Matriks A (3x3):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan elemen Matriks B (3x3):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];

            kali[i][j] = 0;
            for (k = 0; k < 3; k++) {
                kali[i][j] = kali[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriks A:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriks B:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriks Penjumlahan (A + B):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << tambah[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriks Pengurangan (A - B):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << kurang[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriks Perkalian (A x B):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << kali[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}