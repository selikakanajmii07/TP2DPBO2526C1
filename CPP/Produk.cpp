#include "Produk.h"

Produk::Produk() {}

Produk::Produk(int idProduk, string namaProduk, double harga) {
    this->idProduk = idProduk;
    this->namaProduk = namaProduk;
    this->harga = harga;
}

int Produk::getIdProduk() { return idProduk; }
string Produk::getNamaProduk() { return namaProduk; }
double Produk::getHarga() { return harga; }

void Produk::setNamaProduk(string namaProduk) { this->namaProduk = namaProduk; }
void Produk::setHarga(double harga) { this->harga = harga; }

string Produk::getTipe() { return "Produk"; }

vector<string> Produk::getBarisTabel() {
    return {
        to_string(idProduk),
        namaProduk,
        to_string((int)harga),
        getTipe(),
        "-", "-", "-", 
        "-", "-", "-" 
    };
}

Produk::~Produk() {}
