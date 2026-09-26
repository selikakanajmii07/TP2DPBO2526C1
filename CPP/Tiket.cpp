#include "Tiket.h"

Tiket::Tiket() {}

Tiket::Tiket(int idProduk, string namaProduk, double harga,
             string kodeTiket, string judulFilm, string jamTayang)
    : Produk(idProduk, namaProduk, harga) {
    this->kodeTiket = kodeTiket;
    this->judulFilm = judulFilm;
    this->jamTayang = jamTayang;
}

string Tiket::getKodeTiket() { return kodeTiket; }
string Tiket::getJudulFilm() { return judulFilm; }
string Tiket::getJamTayang() { return jamTayang; }

void Tiket::setJudulFilm(string judulFilm) { this->judulFilm = judulFilm; }
void Tiket::setJamTayang(string jamTayang) { this->jamTayang = jamTayang; }

string Tiket::getTipe() { return "Tiket"; }

vector<string> Tiket::getBarisTabel() {
    return {
        to_string(idProduk),
        namaProduk,
        to_string((int)harga),
        getTipe(),
        kodeTiket, judulFilm, jamTayang,
        "-", "-", "-" 
    };
}
