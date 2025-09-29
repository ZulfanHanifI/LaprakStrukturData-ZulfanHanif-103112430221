# <h1 align="center">Laporan Praktikum Modul 1 <br> Pengenalan CPP</h1>
<p align="center">Zulfan Hanif - 103112430221</p>

## Dasar Teori

yang panjang dikit

## Unguided

### soal 1

aku mengerjakan perulangan

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
> %% Untuk mencantumkan screenshot, tidak boleh ada spasi di urlnya `()`, penamaan file bebas asal gak sara dan mudah dipahami aja,, dan jangan lupa hapus komen ini yah%%

1. Menggunakan library <iostream>

Digunakan untuk melakukan input (cin) dan output (cout).

2. using namespace std;

Berguna supaya kita tidak perlu menulis std::cout atau std::cin, cukup cout dan cin saja.

3. Deklarasi Variabel

float bil1, bil2;

Kedua variabel ini bertipe float karena soal meminta bilangan dengan koma/desimal.

4. Input dari Pengguna

cin >> bil1;
cin >> bil2;

Untuk meminta pengguna memasukkan dua angka bertipe float.

5. Operasi Aritmatika

penjumlahan = bil1 + bil2;

pengurangan = bil1 - bil2;

perkalian = bil1 * bil2;

pembagian = bil1 / bil2; (dengan syarat bil2 != 0 agar tidak error).

6. Cek Pembagian dengan Nol
Jika bil2 bernilai 0, program akan menampilkan pesan bahwa pembagian tidak bisa dilakukan.

7. Output
Hasil ditampilkan menggunakan cout secara berurutan: penjumlahan, pengurangan, perkalian, dan pembagian.

### Soal 2

Buatlah sebuah progam yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di input kan user adalah bilangan bulat positif mulai dari 0 s.d 100
Contoh: 79: tujuh puluh sembilan

```cpp
#include <iostream>
using namespace std;

// Fungsi untuk mengubah angka menjadi kata
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
        cout << "Angka di luar jangkauan!" << endl;
    } else {
        cout << angka << " : " << angkaKeTulisan(angka) << endl;
    }

    return 0;
}


```

> Output

penjelasan kode

### Soal 3

Buatlah program yang dapat memberikan input dan ouput sbb.

```go
package main

func main() {
	fmt.Println("kode untuk soal nomor 2B")
}
```

> Output

penjelasan bedanya sesuai soal

## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla 

