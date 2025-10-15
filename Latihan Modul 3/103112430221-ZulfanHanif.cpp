#include <iostream>
#include <string>
using namespace std;

// ini Struktur Node untuk menyimpan data buku
struct Buku {
    string isbn;
    string judul;
    string penulis;
    Buku* next; // pointer ke node berikutnya
};

// pointer head untuk menandai awal linked list
Buku* head = NULL;

// fungsi untuk menambahkan buku ke dalam linked list
void tambahBuku(string isbn, string judul, string penulis) {
    Buku* bukuBaru = new Buku;  // membuat node baru
    bukuBaru->isbn = isbn;
    bukuBaru->judul = judul;
    bukuBaru->penulis = penulis;
    bukuBaru->next = NULL;

    if (head == NULL) {
        head = bukuBaru; // jika list kosong, buku baru menjadi head
    } else {
        Buku* temp = head;
        while (temp->next != NULL) { // cari node terakhir
            temp = temp->next;
        }
        temp->next = bukuBaru; // tambahkan buku baru di akhir list
    }
    cout << "Buku berhasil ditambahkan!\n";
}

// fungsi untuk menampilkan semua buku dalam linked list
void tampilkanBuku() {
    if (head == NULL) {
        cout << "Tidak ada data buku.\n";
        return;
    }

    Buku* temp = head;
    cout << "\n=== Daftar Buku ===\n";
    while (temp != NULL) {
        cout << "ISBN     : " << temp->isbn << endl;
        cout << "Judul    : " << temp->judul << endl;
        cout << "Penulis  : " << temp->penulis << endl;
        cout << "----------------------\n";
        temp = temp->next;
    }
}

// fungsi untuk menghapus buku berdasarkan ISBN
void hapusBuku(string isbn) {
    if (head == NULL) {
        cout << "Tidak ada buku yang bisa dihapus.\n";
        return;
    }

    Buku* temp = head;
    Buku* prev = NULL;

    // jika node pertama yang akan dihapus
    if (temp != NULL && temp->isbn == isbn) {
        head = temp->next;
        delete temp;
        cout << "Buku dengan ISBN " << isbn << " berhasil dihapus.\n";
        return;
    }

    // mencari node dengan ISBN yang cocok
    while (temp != NULL && temp->isbn != isbn) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Buku dengan ISBN " << isbn << " tidak ditemukan.\n";
        return;
    }

    // hapus node
    prev->next = temp->next;
    delete temp;
    cout << "Buku dengan ISBN " << isbn << " berhasil dihapus.\n";
}

// Fungsi untuk memperbarui data buku berdasarkan ISBN
void perbaruiBuku(string isbn) {
    Buku* temp = head;
    while (temp != NULL) {
        if (temp->isbn == isbn) {
            cout << "Masukkan judul baru  : ";
            getline(cin, temp->judul);
            cout << "Masukkan penulis baru: ";
            getline(cin, temp->penulis);
            cout << "Data buku berhasil diperbarui!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Buku dengan ISBN " << isbn << " tidak ditemukan.\n";
}

// fungsi utama (menu interaktif)
int main() {
    int pilihan;
    string isbn, judul, penulis;

    do {
        cout << "\n===== MENU DATA BUKU =====\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Buku\n";
        cout << "3. Hapus Buku\n";
        cout << "4. Perbarui Buku\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore(); // membersihkan buffer agar getline bisa digunakan

        switch (pilihan) {
        case 1:
            cout << "Masukkan ISBN    : ";
            getline(cin, isbn);
            cout << "Masukkan Judul   : ";
            getline(cin, judul);
            cout << "Masukkan Penulis : ";
            getline(cin, penulis);
            tambahBuku(isbn, judul, penulis);
            break;
        case 2:
            tampilkanBuku();
            break;
        case 3:
            cout << "Masukkan ISBN yang ingin dihapus: ";
            getline(cin, isbn);
            hapusBuku(isbn);
            break;
        case 4:
            cout << "Masukkan ISBN buku yang ingin diperbarui: ";
            getline(cin, isbn);
            perbaruiBuku(isbn);
            break;
        case 5:
            cout << "Program selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}
