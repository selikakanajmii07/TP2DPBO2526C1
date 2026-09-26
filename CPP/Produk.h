#ifndef PRODUK_H
#define PRODUK_H

#include <string>
#include <vector>
using namespace std;

class Produk {
protected:
    int idProduk;
    string namaProduk;
    double harga;

public:
    Produk();
    Produk(int idProduk, string namaProduk, double harga);

    // Getter
    int getIdProduk();
    string getNamaProduk();
    double getHarga();

    // Setter
    void setNamaProduk(string namaProduk);
    void setHarga(double harga);

    virtual string getTipe();
    virtual vector<string> getBarisTabel();
    virtual ~Produk();
};

#endif
