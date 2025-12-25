
# <h1 align="center">Laporan Praktikum Modul 13 <br> MULTI LINKED LIST </h1>
<p align="center">ZULFAN HANIF IHSANI - 103112430221</p>

## Dasar Teori


## Guided

### Soal 1

> Output
> ![Screenshot bagian x](output/guided1.png)

```cpp
#include <iostream>
#include <string>
using namespace std;

struct ChildNode
{
    string info;
    ChildNode *next;
};

struct ParentNode
{
    string info;
    ChildNode *childHead;
    ParentNode *next;
};

ParentNode *createParent(string info)
{
    ParentNode *newNode = new ParentNode;
    newNode->info = info;
    newNode->childHead = NULL;
    newNode->next = NULL;
    return newNode;
}

ChildNode *createChild(string info)
{
    ChildNode *newNode = new ChildNode;
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}

void insertParent(ParentNode *&head, string info)
{
    ParentNode *newNode = createParent(info);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        ParentNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertChild(ParentNode *head, string parentInfo, string childInfo)
{
    ParentNode *p = head;
    while (p != NULL && p->info != parentInfo)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        ChildNode *newChild = createChild(childInfo);
        if (p->childHead == NULL)
        {
            p->childHead = newChild;
        }
        else
        {
            ChildNode *c = p->childHead;
            while (c->next != NULL)
            {
                c = c->next;
            }
            c->next = newChild;
        }
    }
}

void printAll(ParentNode *head)
{
    ParentNode *p = head;
    while (p != NULL)
    {
        cout << p->info;
        ChildNode *c = p->childHead;
        if (c != NULL)
        {
            while (c != NULL)
            {
                cout << " -> " << c->info;
                c = c->next;
            }
        }
        cout << endl;
        p = p->next;
    }
}

int main()
{
    ParentNode *list = NULL;
    insertParent(list, "Parent Node 1");
    insertParent(list, "Parent Node 2");
    printAll(list);
    cout << "\n";
    insertChild(list, "Parent Node 1", "Child Node A");
    insertChild(list, "Parent Node 1", "Child Node B");
    insertChild(list, "Parent Node 2", "Child Node C");
    printAll(list);
    return 0;
}
```

## Unguided

### Soal 1

Buatlah ADT Doubly Linked list sebagai berikut di dalam file “Doublylist.h”:

```
Type infotype : kendaraan <
    nopol : string
    warna : string
    thnBuat : integer
>
Type address : pointer to ElmList
Type ElmList <
    info : infotype
    next :address
    prev : address
>

Type List <
    First : address
    Last : address
>

procedure CreateList( input/output L : List )
function alokasi( x : infotype ) → address
procedure dealokasi(input/output P : address )
procedure printInfo( input L : List )
procedure insertLast(input/output L : List,
   input P : address )
```

Buatlah implementasi ADT Doubly Linked list pada file “Doublylist.cpp” dan coba hasil implementasi ADT pada file “main.cpp”.

```
Masukkan nomor polisi: D001  
Masukkan warna kendaraan: hitam  
Masukkan tahun kendaraan: 90  

Masukkan nomor polisi: D003  
Masukkan warna kendaraan: putih  
Masukkan tahun kendaraan: 70  

Masukkan nomor polisi: D001  
Masukkan warna kendaraan: merah  
Masukkan tahun kendaraan: 80  
Nomor polisi sudah terdaftar  

Masukkan nomor polisi: D004  
Masukkan warna kendaraan: kuning  
Masukkan tahun kendaraan: 90
```

Contoh Ouput
```
No Polisi : D004  
Warna     : kuning  
Tahun     : 90  

No Polisi : D003  
Warna     : putih  
Tahun     : 70  

No Polisi : D001  
Warna     : hitam  
Tahun     : 90  
```

> Output
> ![Screenshot bagian x](output/unguided1.png)

> Penjelasan

### Soal 2

Carilah elemen dengan nomor polisi D001 dengan membuat fungsi baru. fungsi findElm( L : List, x : infotype ) : address

```
Masukkan Nomor Polisi yang dicari : 111

Nomor Polisi : 111
Warna        : merah
Tahun        : 2023

Nomor Polisi : 222
Warna        : ijo
Tahun        : 2022
```

> Output
> ![Screenshot bagian x](output/unguided1.png)

> Penjelasan

### Soal 3

Hapus elemen dengan nomor polisi D003 dengan procedure delete.

```
procedure deleteFirst( input/output L : List,  
P : address ) - -
procedure deleteLast( input/output L : List,  
P : address )
procedure deleteAfter( input Prec : address,  
input/output P : address )
```

Contoh Output

```
Masukkan Nomor Polisi yang akan dihapus : 222
Data dengan nomor polisi D003 berhasil dihapus.

DATA LIST 1

Nomor Polisi : 111
Warna        : merah
Tahun        : 2023
```

## Referensi

