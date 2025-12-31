
# <h1 align="center">Laporan Praktikum Modul 13 <br> MULTI LINKED LIST </h1>
<p align="center">ZULFAN HANIF IHSANI - 103112430221</p>

## Dasar Teori


## Guided

### Soal 1

> Output
> ![Screenshot bagian x](output/guided.png)

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

### Soal 2

Buat multilist.cpp untuk implementasi semua fungsi pada multilist.h. Buat main.cpp untuk pemanggilan fungsi-fungsi tersebut

```cpp

```

> Output
> ![Screenshot bagian x](output/unguided1.png)

> Penjelasan

### Soal 3

Buatlah ADT Multi Linked list sebagai berikut di dalam file “circularlist.h”:
```
Type infotype : mahasiswa <
    Nama:string
    Nim:string
    Jenis_kelamin:char
    Ipk:float>
Type address : pointer to ElmList
Type ElmList <
    info : infotype
    next :address>
Type List <
    First : address>
```
Terdapat 11 fungsi/prosedur untuk ADT circularlist
procedure CreateList( input/output L : List )
function alokasi( x : infotype ) → address
procedure dealokasi( input/output t P : address )
procedure insertFirst( input/output L : List, input P : address )
procedure insertAfter( input/output L : List, input Prec : address, P : address)
procedure insertLast( input/output L : List, input P : address )
procedure deleteFirst( input/output L : List, input/output P : address )
procedure deleteAfter( input/output L : List, input Prec : address,
input/output t P : address )
procedure deleteLast( input/output L : List, P : address )
function findElm( L : List, x : infotype ) → address
procedure printInfo( input L : List )

Buatlah implementasi ADT Doubly Linked list pada file “circularlist.cpp”. Tambahkan fungsi/prosedur berikut pada file “main.cpp”.

fungsi create ( in nama, nim : string, jenis_kelamin : char, ipk : float)
fungsi disediakan, ketik ulang code yang diberikan
fungsi mengalokasikan sebuah elemen list dengan info sesuai input


```cppp

```

> Output
> ![Screenshot bagian x](output/unguided1.png)

> Penjelasan

## Referensi

