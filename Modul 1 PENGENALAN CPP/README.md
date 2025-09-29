# <h1 align="center">Laporan Praktikum Modul 1 <br> Pengenalan CPP</h1>
<p align="center">Zulfan Hanif - 103112430221</p>

## Dasar Teori

yang panjang dikit

## Guided

### Soal 1

aku mengerjakan perulangan

### Soal 2

### Soal 3

### Soal 4

### Soal 5

### Soal 6


## Unguided

### Soal 1

Buatlah program yang menerima inputan dua buah bilangan betipe float, kemudian memberikan outputan hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```cpp
#include <iostream> 
using namespace std;

int main() {
    float bil1, bil2;

    cout << "Masukkan bilangan pertama (float): ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua (float): ";
    cin >> bil2;

    float penjumlahan = bil1 + bil2;
    float pengurangan = bil1 - bil2;
    float perkalian   = bil1 * bil2;

    if (bil2 != 0) {
        float pembagian = bil1 / bil2;
        cout << "\nHasil Pembagian: " << pembagian << endl;
    } else {
        cout << "\nHasil Pembagian: Tidak dapat dibagi dengan nol" << endl;
    }
    cout << "Hasil Penjumlahan: " << penjumlahan << endl;
    cout << "Hasil Pengurangan: " << pengurangan << endl;
    cout << "Hasil Perkalian  : " << perkalian << endl;

    return 0; 
}
```

> Output
> ![Screenshot bagian x](output/ss1.png)

> Penjelasan

Tujuan dari program ini adalah untuk menerima input berupa dua bilangan bertipe float dari pengguna, kemudian melakukan perhitungan aritmatika dasar terhadap kedua bilangan tersebut. Operasi yang dilakukan yaitu penjumlahan dari kedua bilangan, pengurangan antara bilangan pertama dan kedua, perkalian dari kedua bilangan, pembagian antara bilangan pertama dan kedua dengan pengecekan agar tidak terjadi pembagian dengan nol. Hasil dari setiap operasi tersebut kemudian ditampilkan ke layar sebagai output.

1. Menggunakan library <iostream>

Library tersebut digunakan untuk melakukan proses input (cin) dan output (cout) pada program.

2. *using namespace std;*

Berguna supaya kita tidak perlu menulis std::cout atau std::cin, cukup cout dan cin saja.

3. Deklarasi Variabel
   
Mendeklarasikan variabel

*float bil1, bil2;*

Kedua variabel ini bertipe float karena di dalam soal meminta bilangan dengan koma/desimal.

4. Proses input dari pengguna

*cout << "Masukkan bilangan pertama (float): ";*

*cin >> bil1;*

*cout << "Masukkan bilangan kedua (float): ";*

*cin >> bil2;*

untuk meminta pengguna memasukkan dua angka bertipe float dan menyimpannya dalam variabel bil1 & bil2.

5. Operasi Aritmatika

- penjumlahan = bil1 + bil2;

- pengurangan = bil1 - bil2;

- perkalian = bil1 * bil2;

- pembagian = bil1 / bil2; (dengan syarat bil2 != 0 agar tidak error).

6. Cek Pembagian dengan Nol
Jika bil2 bernilai 0, maka program akan menampilkan pesan bahwa pembagian tidak bisa dilakukan.

7. Output
Hasil ditampilkan menggunakan cout secara berurutan dari penjumlahan, pengurangan, perkalian, dan pembagian.

### Soal 2

Buatlah sebuah progam yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di input kan user adalah bilangan bulat positif mulai dari 0 s.d 100.
> Contoh: 79: tujuh puluh sembilan

```cpp
#include <iostream>
using namespace std;

string angkaKeTulisan(int n) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas",
                        "empat belas", "lima belas", "enam belas",
                        "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh",
                        "lima puluh", "enam puluh", "tujuh puluh",
                        "delapan puluh", "sembilan puluh"};

    if (n == 0) return "nol";
    if (n == 100) return "seratus";

    if (n < 10) {
        return satuan[n];
    } else if (n < 20) {
        return belasan[n - 10];
    } else {
        int puluh = n / 10;
        int sisa = n % 10;
        if (sisa == 0) {
            return puluhan[puluh];
        } else {
            return puluhan[puluh] + " " + satuan[sisa];
        }
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan cuy!" << endl;
    } else {
        cout << angka << " : " << angkaKeTulisan(angka) << endl;
    }

    return 0;
}


```

> Output
> ![Screenshot bagian x](output/ss2.png)

> Penjelasan

Tujuan dari program ini adalah untuk menerima input berupa bilangan bulat positif antara 0 hingga 100, kemudian mengeluarkan output berupa representasi angka tersebut dalam bentuk tulisan. Nantinya pengguna dapat memasukkan angka dalam bentuk numerik, setelah itu program akan mengubah angka tersebut ke bentuk tulisan penulisan angka dalam bahasa Indonesia dan hasil konversi ditampilkan di layar.

Contoh hasil: 79 : tujuh puluh sembilan

Dengan demikian, program ini mempermudah proses konversi angka ke tulisan tanpa harus dilakukan secara manual, sekaligus melatih pemahaman struktur kondisi dan penggunaan array dalam bahasa pemrograman C++.

1. *Array String satuan[], belasan[], dan puluhan[]*

satuan digunakan untuk angka 1–9.

belasan untuk angka 10–19.

puluhan untuk angka 20, 30, … sampai 90.

2. Kasus Khusus (Boundary Case)

Jika n == 0 → output "nol".

Jika n == 100 → output "seratus".

3. Jika Angka < 10
   
Misalnya 7 → "tujuh".

5. Jika Angka 10–19
   
Misalnya 13 → "tiga belas".

7. Jika Angka 20–99

puluh = n / 10 → mengambil bagian puluhan.

sisa = n % 10 → mengambil bagian satuan.

Jika sisa == 0 → angka bulat puluhan, misalnya 40 → "empat puluh".

Jika sisa != 0 → gabungan puluhan + satuan, misalnya 79 → "tujuh puluh sembilan".

6. Validasi Input
   
Jika pengguna memasukan angka di luar rentang 0–100, maka program akan menolak dengan mengeluarkan Angka diluar jangkauan cuy!.

### Soal 3

Buatlah program yang dapat memberikan input dan ouput sbb.


```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int spasi = 0; spasi < n - i; spasi++) {
            cout << "  ";
        }

        for (int kiri = i; kiri >= 1; kiri--) {
            cout << kiri << " ";
        }

        cout << "* ";

        for (int kanan = 1; kanan <= i; kanan++) {
            cout << kanan << " ";
        }

        cout << endl;
    }

    for (int spasi = 0; spasi < n; spasi++) {
        cout << "  ";
    }
    cout << "*" << endl;

    return 0;
}
```

> Output
> ![Screenshot bagian x](output/ss3.png)

> Penjelasan

1. Proses input angka n
_cout << "Masukkan angka: ";
cin >> n;_

Program akan meminta angka dari pengguna (misalnya n = 3) dan memasukan angka tersebut kedalam variabel n.

2. Loop Baris

Program mencetak dari i = n sampai i = 1. Nantinya jumlah baris utama ada n dan setelah selesai, ada baris tambahan * di paling bawah.

3. Spasi di Awal

*for (int spasi = 0; spasi < n - i; spasi++) cout << "  ";*

Supaya angka bergeser ke kanan, membentuk pola mirroring.

4. Bagian Kiri (Menurun)

*for (int kiri = i; kiri >= 1; kiri--) cout << kiri << " ";*

Menampilkan angka dari i sampai 1.

5. Tanda Bintang *

*cout << "* ";*

Selalu ada di tengah tiap baris.

6. Bagian Kanan (Menaik)

*for (int kanan = 1; kanan <= i; kanan++) cout << kanan << " ";*

Menampilkan angka dari 1 ke i.

7. Baris Terakhir

Setelah proses loop selesai, baris terakhir hanya berisi spasi dan tanda *.

## Referensi

1. https://www.w3schools.com/cpp/default.asp 

