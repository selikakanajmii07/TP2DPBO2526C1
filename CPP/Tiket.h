#ifndef TIKET_H
#define TIKET_H

#include "Produk.h"

class Tiket : public Produk {
protected:
    string kodeTiket;
    string judulFilm;
    string jamTayang;

public:
    Tiket();
    Tiket(int idProduk, string namaProduk, double harga,
          string kodeTiket, string judulFilm, string jamTayang);

    // Getter
    string getKodeTiket();
    string getJudulFilm();
    string getJamTayang();

    // Setter
    void setJudulFilm(string judulFilm);
    void setJamTayang(string jamTayang);

    string getTipe() override;
    vector<string> getBarisTabel() override;
};

#endif
