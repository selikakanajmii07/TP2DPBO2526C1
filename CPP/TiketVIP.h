#ifndef TIKETVIP_H
#define TIKETVIP_H

#include "Tiket.h"

class TiketVIP : public Tiket {
private:
    string fasilitasVIP;
    double hargaTambahan;
    string nomorKursi;

public:
    TiketVIP();
    TiketVIP(int idProduk, string namaProduk, double harga,
             string kodeTiket, string judulFilm, string jamTayang,
             string fasilitasVIP, double hargaTambahan, string nomorKursi);

    // Getter
    string getFasilitasVIP();
    double getHargaTambahan();
    string getNomorKursi();

    // Setter
    void setFasilitasVIP(string fasilitasVIP);
    void setHargaTambahan(double hargaTambahan);
    void setNomorKursi(string nomorKursi);

    string getTipe() override;
    vector<string> getBarisTabel() override;
};

#endif
