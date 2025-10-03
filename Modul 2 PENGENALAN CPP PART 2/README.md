# <h1 align="center">Laporan Praktikum Modul 2 <br> Pengenalan CPP Part 2</h1>
<p align="center">ZULFAN HANIF IHSANI - 103112430221</p>

## Dasar Teori

Pada pertemuan dua ini, melanjutkan dari apa yang udah 

1. Array

   Array merupakan kumpulan data dengan nama yang sama dan setiap elemen bertipe data sama. Untuk mengakses setiap komponen / elemen array berdasarkan indeks dari setiap elemen.

## Guided

### Soal 1

Aku mengerjakan sebuah program dalam bahasa C++ yang memanfaatkan konsep call by reference menggunakan pointer. Program ini berfungsi untuk menukar nilai dari dua variabel, yaitu a dan b, dengan bantuan sebuah prosedur bernama tukar. 

Tujuan dari program ini adalah:
1. Menunjukkan bagaimana penggunaan pointer dalam C++.
2. Mempraktikkan call by reference, di mana variabel asli yang dikirimkan ke fungsi bisa langsung berubah nilainya tanpa perlu mengembalikan nilai.
3. Membuktikan perbedaan nilai variabel sebelum dan sesudah proses pertukaran dengan memanggil fungsi tukar.

```cpp
#include <iostream>
using namespace std;


void tukar(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Sebelum ditukar: a = " << a << ", b = " << b << endl;
    tukar(&a, &b);
    cout << "Setelah ditukar: a = " << a << ", b = " << b << endl;
    return 0;
}
```

> Output
> ![Screenshot bagian x](output/guided1.png)


### Soal 2

aku mengerjakan perulangan

```cpp
#include <iostream>
using namespace std;

void tukar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Sebelum ditukar: a = " << a << ", b = " << b << endl;
    tukar(a, b);
    cout << "Setelah ditukar: a = " << a << ", b = " << b << endl;
    return 0;
}
```

> Output
> ![Screenshot bagian x](output/guided2.png)

## Unguided

### Soal 1

Buatlah sebuah program untuk melakukan transpose pada sebuah matriks persegi berukuran 3x3. Operasi transpose adalah mengubah baris menjadi kolom dan sebaliknya. Inisialisasi matriks awal di dalam kode, kemudian buat logika untuk melakukan transpose dan simpan hasilnya ke dalam matriks baru. Terakhir, tampilkan matriks awal dan matriks hasil transpose. 

Contoh Output: 

```
Matriks awal :

1 2 3
4 5 6
7 8 9 

Matriks hasil transpose:

1 4 7
2 5 8
3 6 9
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transpose[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "Matriks awal :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriks hasil transpose :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

> Output
> ![Screenshot bagian x](output/screenshot_soal1.png)
> %% Untuk mencantumkan screenshot, tidak boleh ada spasi di urlnya `()`, penamaan file bebas asal gak sara dan mudah dipahami aja,, dan jangan lupa hapus komen ini yah%%

Penjelasan ttg kode kalian disini

### Soal 2

Buatlah program yang menunjukan penggunaan call by reference. Buat sebuah prosedur bernama kuadratkan yang menerima satu parameter integer secara referensi(&). Prosedur ini akan mengubah nilai asli variabel yang dilewatkan dengan nilai kuadratnya. Tampilkan nilai variabel di main() sebelum dan sesudah memanggil prosedur untuk membuktikan perubahannya.

Contoh Output:

```
Nilai awal: 5
Nilai setelah dikuadratkan: 25
```

```cpp
#include <iostream>
using namespace std;

void kuadratkan(int &x) {
    x = x * x;  
}

int main() {
    int angka;

    cout << "Nilai Awal: ";
    cin >> angka;

    kuadratkan(angka);

    cout << "Nilai setelah dikuadratkan: " << angka << endl;

    return 0;
}
```

> Output
> ![Screenshot bagian x](output/unguided2.png)

> Penjelasan

1. Prosedur kuadratkan

```cpp
void kuadratkan(int &x) {
    x = x * x;
}
```

Prosedur ini menerima parameter dengan tanda & yang artinya adalah call by reference. Call by reference berarti prosedur tidak membuat salinan variabel baru, tetapi langsung mengacu ke alamat memori variabel asli.

Pada code operasi _x = x * x;_ code akan langsung mengubah nilai asli variabel yang dipanggil di main().

2. Fungsi main()

```cpp
int angka;
cout << "Masukkan sebuah bilangan: ";
cin >> angka;
```

   Di dalam fungsi main(), pertama program akan mengeluarakan perintah kepada user menggunakan fungsi cout, setelah itu user memasukkan sebuah bilangan bulat ke variabel angka.

```cpp
kuadratkan(angka);
```

Setelah user melakukan input, program masuk ke pemanggilan prosedur menggunakan call by reference. Variabel angka langsung berubah nilainya menjadi kuadrat dari bilangan semula.

```cpp
cout << "Nilai setelah dipanggil prosedur kuadratkan: " << angka << endl;
```

Setelah proses prosedur telah selesai, program menampilkan nilai angka, dimana angka sudah berubah menjadi kuadrat.

## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)

