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
> %% Untuk mencantumkan screenshot, tidak boleh ada spasi di urlnya `()`, penamaan file bebas asal gak sara dan mudah dipahami aja,, dan jangan lupa hapus komen ini yah%%

Penjelasan ttg kode kalian disini

### Soal 2

Buatlah sebuah progam yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di input kan user adalah bilangan bulat positif mulai dari 0 s.d 100
Contoh: 79: tujuh puluh sembilan

```go
package main

func main() {
	fmt.Println("kode untuk soal nomor 2A")
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

