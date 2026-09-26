#include "TiketVIP.h"

TiketVIP::TiketVIP() {}

TiketVIP::TiketVIP(int idProduk, string namaProduk, double harga,
                    string kodeTiket, string judulFilm, string jamTayang,
                    string fasilitasVIP, double hargaTambahan, string nomorKursi)
    : Tiket(idProduk, namaProduk, harga, kodeTiket, judulFilm, jamTayang) {
    this->fasilitasVIP = fasilitasVIP;
    this->hargaTambahan = hargaTambahan;
    this->nomorKursi = nomorKursi;
}

string TiketVIP::getFasilitasVIP() { return fasilitasVIP; }
double TiketVIP::getHargaTambahan() { return hargaTambahan; }
string TiketVIP::getNomorKursi() { return nomorKursi; }

void TiketVIP::setFasilitasVIP(string fasilitasVIP) { this->fasilitasVIP = fasilitasVIP; }
void TiketVIP::setHargaTambahan(double hargaTambahan) { this->hargaTambahan = hargaTambahan; }
void TiketVIP::setNomorKursi(string nomorKursi) { this->nomorKursi = nomorKursi; }

string TiketVIP::getTipe() { return "TiketVIP"; }

vector<string> TiketVIP::getBarisTabel() {
    return {
        to_string(idProduk),
        namaProduk,
        to_string((int)harga),
        getTipe(),
        kodeTiket, judulFilm, jamTayang,
        fasilitasVIP, to_string((int)hargaTambahan), nomorKursi
    };
}
