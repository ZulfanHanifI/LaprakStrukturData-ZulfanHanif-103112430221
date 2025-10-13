
# <h1 align="center">Laporan Praktikum Modul 2 <br> ABTRACT DATA TYPE</h1>
<p align="center">ZULFAN HANIF IHSANI - 103112430221</p>

## Dasar Teori

## Guided

### Soal 1

> Output
> ![Screenshot bagian x](output/guided1.png)


### Soal 2

> Output
> ![Screenshot bagian x](output/guided2.png)

## Unguided

### Soal 1

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
> ![Screenshot bagian x](output/unguided1.png)

> Penjelasan

### Soal 2

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

## Referensi


