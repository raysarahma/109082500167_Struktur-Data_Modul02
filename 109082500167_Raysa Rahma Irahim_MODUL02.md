# <h1 align="center"> Laporan Praktikum Modul 2 - PENGENALAN BAHASA C++ (BAGIAN KEDUA) </h1>

<p align="center"> Raysa Rahma Irahim - 109082500167 </p>

## Dasar Teori
### A. Array <br/>
Array adalah kumpulan data yang disimpan dengan satu nama dan memiliki tipe data yang sama. Setiap data di dalam array dapat diakses menggunakan indeks. Indeks array dimulai dari 0, jadi jika array memiliki 5 data maka indeksnya adalah 0 sampai 4. Array satu dimensi biasanya digunakan untuk menyimpan data dalam bentuk satu baris, sedangkan array dua dimensi dapat digunakan untuk menyimpan data dalam bentuk tabel atau matriks.

### B. Pointer dan Alamat Memori <br/>
Setiap data yang digunakan dalam program akan disimpan di dalam memori, dan setiap lokasi memori memiliki alamatnya masing-masing. Operator & digunakan untuk mengetahui alamat dari suatu variabel. Sedangkan pointer adalah variabel yang digunakan untuk menyimpan alamat memori dari variabel lain. Operator * digunakan untuk mengambil nilai dari alamat yang ditunjuk oleh pointer.

Pointer biasanya digunakan ketika kita ingin mengakses atau mengubah data melalui alamat memorinya. Karena yang digunakan adalah alamat dari variabel, perubahan nilai melalui pointer juga dapat mengubah nilai variabel aslinya, termasuk ketika pointer digunakan di dalam fungsi.

### C. Pointer dan Array <br/>
Array dan pointer mempunyai hubungan yang erat. Alamat elemen pertama array dapat disimpan ke pointer, misalnya pa = &a[0]. Jika pointer menunjuk elemen pertama, perpindahan pointer dapat digunakan untuk mengakses elemen berikutnya. Konsep ini menunjukkan bahwa elemen array tersimpan pada lokasi memori yang berurutan.

### D. String <br/>
String digunakan untuk mengolah data berupa teks. Dalam bentuk dasar C++, string dapat direpresentasikan sebagai array karakter yang diakhiri karakter null atau \0. Input menggunakan cin hanya membaca sampai spasi, sedangkan getline dapat digunakan jika ingin membaca satu baris penuh.

### E. Fungsi <br/>
Fungsi merupakan blok kode yang dibuat untuk menjalankan tugas tertentu. Fungsi membantu membuat program lebih terstruktur dan mengurangi pengulangan kode. Fungsi pada umumnya mempunyai parameter sebagai masukan dan menghasilkan nilai balik melalui return. Contohnya adalah fungsi untuk mencari nilai maksimum.

### F. Prosedur <br/>
Dalam C++, prosedur dapat diwujudkan sebagai fungsi void, yaitu fungsi yang menjalankan tugas tertentu tetapi tidak mengembalikan nilai melalui return. Prosedur cocok digunakan ketika tujuan utama adalah melakukan suatu proses atau menampilkan hasil.


## Guided

### GUIDE 1

```C++
#include <iostream>
using namespace std;
int main(){
    int x, y;
    int *px;
    x=87;
    px=&x;
    y= *px;
    
    cout<<"Alamat x= "<<&x<<endl;
    cout<<"Isi px= "<<px<<endl;
    cout<<"Isi x= "<<x<<endl;
    cout<<"Nilai yang ditunjuk px= "<<*px<<endl;
    cout<<"Nilai y= "<<y<<endl;
    return 0;
}
```

penjelasan singkat guided 1 : px berisi alamat x, sedangkan *px menghasilkan nilai yang tersimpan pada alamat tersebut. Karena x bernilai 87, maka nilai yang diperoleh melalui *px juga 87.

### GUIDE 2

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
    int i, j; 
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun [MAX][MAX]=
    {   {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };
    for (i=0; i<MAX;i++){
        cout<<"masukan nilai ke-"<<i+1<<endl;
        cin>>nilai[i];
    } 
    cout<<"\ndata nilai siswa: \n";
    for (i=0; i<MAX;i++)
        cout<<"nilai k-"<<i+1<<nilai[i]<<endl;
    cout<<"\nnilai tahunan: \n";
    
    for (i=0;i<MAX;i++){
        for (j=0; j<MAX;j++)
            cout<<nilai_tahun[i][j];
        cout<<"\n";
    }
    return 0;
}
```

penjelasan singkat guided 2 : fungsi maks3 mengembalikan satu nilai integer. Nilai pertama dijadikan nilai maksimum sementara, kemudian dibandingkan dengan nilai kedua dan ketiga.

### GUIDE 3

```C++
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main(){
    int x,y,z;
    cout<<"masukan nilai bilangan ke-1=";
    cin>>x;
    cout<<"masukan nilai bilangan ke-2=";
    cin>>y;
    cout<<"masukan nilai bilangan ke-3";
    cin>>z;
    cout<<"nilai maksimumnya adalah="<<maks3(x,y,z);
    return 0;
}
int maks3(int a, int b, int c){
    int temp_max = a;
    if (b> temp_max)
    temp_max = b ;
    if(c>temp_max)
    temp_max = c;
    return (temp_max);
}
```

penjelasan singkat guided 3 : tulis tidak mengembalikan nilai sehingga menggunakan void. Setelah jumlah baris dimasukkan, main memanggil prosedur tulis untuk melakukan proses pencetakan.

### GUIDE 4

```C++
#include<iostream>
using namespace std;

void tulis (int x);
int main(){
    int jum;
    cout<< "jumlah baris kata=";
    cin>>jum;
    tulis(jum);
    return 0;
}

void tulis (int x){
    for (int i=0; i<x; i++)
    cout<<"baris ke-"<<i+1<<endl;
}
```

penjelasan singkat guided 4 : Di fungsi main, program bakal minta kita nginput angka yang disimpen ke variabel jum.
Angka itu trus dilempar jadi parameter ke prosedur tulis() (fungsi void alias nggak ada return value). Di dalem prosedurnya, ada looping yang bakal nge-print teks "baris ke-" ke bawah sebanyak angka yang kita inputin tadi.

### GUIDE 5

```C++
#include<iostream>
using namespace std;

void tukarValue(int x, int y){
    int temp = x;
    x= y;
    y= temp;
}

void tukarPointer(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y){
    int temp = x;
    x = y ;
    y =  temp;
}
int main(){
    int a = 4, b=6;
    tukarValue(a,b);
    cout<<"setelah call by Value        -> a = "<<a<<", b= "<<b<<"(tetap)"<<endl;

    tukarPointer(&a,&b);
    cout<<"setelah call by Pointer      -> a = "<<a<<", b= "<<b<<"(Berubah!)"<<endl;

    tukarReference(a, b);
    cout<<"setelah call by Reference    -> a = "<<a<<", b= "<<b<<"(Berubah Lagi!)"<<endl;

    return 0;
}
```

penjelasan singkat guided 5 : Pada tukarValue (pass by value), fungsi cuma menerima salinan datanya, jadi nilai variabel asli di main nggak berubah. Pada tukarPointer (pass by pointer), yang dikirim adalah alamat memori lewat simbol &, jadi nilai asli di main ikut tertukar. Sementara tukarReference (pass by reference) efeknya sama kayak pointer karena nilai aslinya juga ketukar, tapi cara manggilnya lebih simpel karena nggak perlu pakai & saat dipanggil.


## Unguided

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3.

```C++
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

    // hitung penjumlahan, pengurangan, dan perkalian
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
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/raysarahma/109082500167_Struktur-Data_Modul02/blob/main/output/soal01_output1.png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/raysarahma/109082500167_Struktur-Data_Modul02/blob/main/output/soal01_output2.png)

penjelasan unguided 1 : Program ini menyiapkan matriks A dan B untuk input, lalu tiga matriks lain untuk menyimpan hasil penjumlahan, pengurangan, dan perkalian. Matriks A dan B diisi lewat for bersarang, satu untuk baris dan satu untuk kolom, sehingga elemennya diminta satu per satu dari baris pertama sampai terakhir. Setelah itu, penjumlahan dan pengurangan dihitung dengan menjumlah atau mengurangi elemen yang posisinya sama, sedangkan perkalian memakai satu perulangan tambahan untuk mengalikan baris matriks A dengan kolom matriks B lalu menjumlahkan hasilnya, dengan nilai awal 0 supaya tidak ada nilai sampah. Terakhir, semua matriks ditampilkan berurutan dengan judul masing-masing, memakai tab supaya kolomnya rapi dan baris baru supaya tiap baris matriks turun ke bawah.

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.

```C++
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Nilai awal : "
         << a << " " << b << " " << c << endl;

    tukarPointer(&a, &b, &c);
    cout << "Setelah pointer : "
         << a << " " << b << " " << c << endl;

    tukarReference(a, b, c);
    cout << "Setelah reference : "
         << a << " " << b << " " << c << endl;

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/raysarahma/109082500167_Struktur-Data_Modul02/blob/main/output/soal02.png)

penjelasan unguided 2 : Program ini punya dua fungsi untuk menukar tiga variabel dengan cara memutar nilainya, yaitu a diisi nilai b, b diisi nilai c, dan c diisi nilai a yang awal. Nilai a disimpan dulu ke variabel temp supaya tidak hilang tertimpa. Fungsi pertama memakai pointer, jadi saat dipanggil yang dikirim adalah alamat variabel dengan tanda &, dan di dalam fungsi nilainya diakses dengan tanda *. Fungsi kedua memakai reference, jadi cukup mengirim nama variabelnya karena parameternya memakai tanda & dan langsung terhubung ke variabel aslinya. Di main, a, b, dan c diisi 10, 20, 30, lalu kedua fungsi dipanggil berurutan dan hasilnya dicetak tiap tahap, yaitu 20 30 10 setelah pointer dan 30 10 20 setelah reference. Nilainya berubah di main karena kedua cara ini mengubah variabel aslinya, bukan salinan.

### 3. Diketahui sebuah array 1 dimensi sebagai berikut : arrA = {48, 2, 7 , 21, 5, 20, 77, 9, 10, 1} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Kerjakan soal dengan ketentuan : - Untuk mencari nilai minimum dan maksimum, harus dibuat menjadi sebuah function. - Untuk mencari rata-rata harus dibuat menjadi sebuah procedure. - Buat output di fungsi utama (main) untuk menampilkan nilai rata-rata yang sudah didapatkan melalui procedure sebelumnya. (Gunakan metode pass by reference atau pass by pointer) - Buat menu sederhana untuk menjalankan setiap procedure

```C++
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
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/raysarahma/109082500167_Struktur-Data_Modul02/blob/main/output/soal03_output1.png)
![Screenshot Output Unguided 3_1](https://github.com/raysarahma/109082500167_Struktur-Data_Modul02/blob/main/output/soal03_output01.png)

penjelasan unguided 3 : Program ini menampilkan menu yang terus diulang sampai user memilih keluar. Nilai maksimum dan minimum dicari lewat function yang membandingkan semua elemen array dengan elemen pertama sebagai acuan, lalu hasilnya dikembalikan dengan return (77 dan 1). Rata-rata dihitung lewat procedure yang menjumlahkan semua elemen lalu membaginya dengan jumlah elemen, dan hasilnya (20) dikirim balik ke main memakai parameter reference supaya bisa ditampilkan di main.

## Kesimpulan
Pada Modul 02 saya memahami bahwa array digunakan untuk menyimpan sekumpulan data dengan tipe yang sama, sedangkan pointer digunakan untuk menyimpan dan mengakses alamat memori. Fungsi dan prosedur membantu membagi program menjadi bagian-bagian yang lebih terstruktur. Perbedaan cara melewatkan parameter juga terlihat saat mengerjakan latihan, terutama antara call by value, pointer, dan reference. Pada latihan, konsep array dua dimensi diterapkan untuk operasi matriks, pointer dan reference diterapkan untuk menukar tiga variabel, sedangkan function dan procedure diterapkan untuk mencari nilai minimum, maksimum, dan rata-rata array. Dari pengerjaan tersebut, penggunaan struktur program menjadi lebih teratur karena setiap proses dibuat sesuai tugasnya.

## Referensi
[1] Modul 02 Struktur Data. Pengenalan Bahasa C++ (Bagian Kedua). Materi praktikum: Array, Pointer, Fungsi, Prosedur, dan Parameter.<br/>
[2] Hasanah, F. N. (2021). Pemahaman Konsep Pemrograman Melalui Modul Problem Based Learning. Edu Komputika Journal, 8(1). https://doi.org/10.15294/edukomputika.v8i1.45516<br/>
[3] Hasanah, F. N., Wiguna, A., Shofiyah, N., & Handayani, N. F. (2024). Implementation of Project-Based Visual Programming Modules on Problem-Solving Skills Information Technology Education students to Support the SDG’s. Edu Komputika Journal, 11(1), 50–56. https://doi.org/10.15294/edukom.v11i1.10804<br/>
[4] Template-Laprak-Strukdat.pdf. Struktur laporan praktikum: Dasar Teori, Guided, Unguided, Kesimpulan, dan Referensi.
