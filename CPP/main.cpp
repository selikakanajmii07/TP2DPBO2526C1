#include <iostream>
#include <vector>
#include <iomanip>
#include "Produk.h"
#include "Tiket.h"
#include "TiketVIP.h"
using namespace std;

vector<Produk*> daftarProduk;

void tambahProduk() {
    int id;
    string nama;
    double harga;

    cout << "Masukkan ID Produk    : ";
    cin >> id;
    cin.ignore();
    cout << "Masukkan Nama Produk  : ";
    getline(cin, nama);
    cout << "Masukkan Harga        : ";
    cin >> harga;

    daftarProduk.push_back(new Produk(id, nama, harga));
    cout << "\nProduk berhasil ditambahkan!\n\n";
}

void tambahTiket() {
    int id;
    string kode, judul, jam;
    double harga;
    string nama = "Tiket Reguler";

    cout << "Masukkan ID Produk    : ";
    cin >> id;
    cin.ignore();
    cout << "Masukkan Harga        : ";
    cin >> harga;
    cin.ignore();
    cout << "Masukkan Kode Tiket   : ";
    getline(cin, kode);
    cout << "Masukkan Judul Film   : ";
    getline(cin, judul);
    cout << "Masukkan Jam Tayang   : ";
    getline(cin, jam);

    daftarProduk.push_back(new Tiket(id, nama, harga, kode, judul, jam));
    cout << "\nTiket berhasil ditambahkan!\n\n";
}

void tambahTiketVIP() {
    int id;
    string kode, judul, jam, fasilitas, kursi;
    double harga, hargaTambahan;
    string nama = "Tiket VIP";

    cout << "Masukkan ID Produk        : ";
    cin >> id;
    cin.ignore();
    cout << "Masukkan Harga            : ";
    cin >> harga;
    cin.ignore();
    cout << "Masukkan Kode Tiket       : ";
    getline(cin, kode);
    cout << "Masukkan Judul Film       : ";
    getline(cin, judul);
    cout << "Masukkan Jam Tayang       : ";
    getline(cin, jam);
    cout << "Masukkan Fasilitas VIP    : ";
    getline(cin, fasilitas);
    cout << "Masukkan Harga Tambahan   : ";
    cin >> hargaTambahan;
    cin.ignore();
    cout << "Masukkan Nomor Kursi      : ";
    getline(cin, kursi);

    daftarProduk.push_back(new TiketVIP(id, nama, harga, kode, judul, jam, fasilitas, hargaTambahan, kursi));
    cout << "\nTiket VIP berhasil ditambahkan!\n\n";
}

void tampilkanTabel() {
    cout << "\n";
    cout << left
         << setw(4)  << "No"
         << setw(5)  << "ID"
         << setw(18) << "Nama Produk"
         << setw(10) << "Harga"
         << setw(10) << "Tipe"
         << setw(10) << "KodeTkt"
         << setw(16) << "Judul Film"
         << setw(10) << "Jam"
         << setw(26) << "Fasilitas VIP"
         << setw(14) << "HargaTmbhn"
         << setw(10) << "NoKursi"
         << endl;
    cout << string(133, '-') << "\n";

    for (size_t i = 0; i < daftarProduk.size(); i++) {
        vector<string> baris = daftarProduk[i]->getBarisTabel();

        cout << left
             << setw(4)  << (i + 1)
             << setw(5)  << baris[0]
             << setw(18) << baris[1]
             << setw(10) << baris[2]
             << setw(10) << baris[3]
             << setw(10) << baris[4]
             << setw(16) << baris[5]
             << setw(10) << baris[6]
             << setw(26) << baris[7]
             << setw(14) << baris[8]
             << setw(10) << baris[9]
             << endl;
    }
    cout << "\n";
}

void isiDataAwal() {
    daftarProduk.push_back(new Produk(1, "Popcorn Caramel", 25000));
    daftarProduk.push_back(new Produk(2, "Cola Medium", 15000));
    daftarProduk.push_back(new Tiket(3, "Tiket Reguler", 35000, "TKT001", "Inside Out 3", "14:00"));
    daftarProduk.push_back(new Tiket(4, "Tiket Reguler", 35000, "TKT002", "Wall-E 2", "16:30"));
    daftarProduk.push_back(new TiketVIP(5, "Tiket VIP", 75000, "TKT003", "Inside Out 3", "19:00", "Sofa Bed + Snack Combo", 40000, "VIP-A1"));
}

void tampilkanMenu() {
    cout << "===== MENU BIOSKOP =====\n";
    cout << "1. Tambah Produk Biasa\n";
    cout << "2. Tambah Tiket\n";
    cout << "3. Tambah Tiket VIP\n";
    cout << "4. Tampilkan Semua Data\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

int main() {
    isiDataAwal();

    int pilihan;
    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahProduk();
            break;
            case 2: tambahTiket();
            break;
            case 3: tambahTiketVIP();
            break;
            case 4: tampilkanTabel();
            break;
            case 0: cout << "\nKeluar dari program. Sampai jumpa!\n";
            break;
            default: cout << "\nPilihan tidak valid!\n\n";
            break;
        }
    } while (pilihan != 0);

    for (size_t i = 0; i < daftarProduk.size(); i++) {
        delete daftarProduk[i];
    }

    return 0;
}