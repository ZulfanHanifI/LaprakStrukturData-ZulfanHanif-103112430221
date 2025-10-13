
# <h1 align="center">Laporan Praktikum Modul 2 <br> ABSTRACT DATA TYPE</h1>
<p align="center">ZULFAN HANIF IHSANI - 103112430221</p>

## Dasar Teori

1. ABSTRACT DATA TYPE(ADT)

ADT adalah TYPE dan sekumpulan PRIMITIF (operasi dasar) terhadap TYPE tersebut. Selain itu, dalam sebuah ADT yang lengkap, disertakan pula definisi invarian dari TYPE dan aksioma yang berlaku. ADT merupakan definisi STATIK.

## Guided

### Soal 1

> Output
> ![Screenshot bagian x](output/guided1.png)

> Mahasiswa.h
```cpp
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
struct mahasiswa{
    char nim[10];
    int nilai1, nilai2;
};
void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);
#endif // MAHASISWA_H_INCLUDED
```

> Mahasiswa.cpp
```cpp
#include "mahasiswa.h"
#include <iostream>
using namespace std;

void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nim;
    cout << "input nilai1 = ";
    cin >> (m).nilai1;
    cout << "input nilai2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m){
    return (m.nilai1 + m.nilai2) / 2;
}
```

> Main.cpp
```cpp
#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main()
{
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata - rata = " << rata2(mhs) << endl;
    return 0;
}
```
## Unguided

### Soal 1

```cpp

```

> Output
> ![Screenshot bagian x](output/unguided1.png)

> Penjelasan

## Referensi


