<?php
require_once __DIR__ . "/Produk.php";

class Tiket extends Produk {
    protected string $kodeTiket;
    protected string $judulFilm;
    protected string $jamTayang;

    public function __construct(int $idProduk, string $namaProduk, float $harga, string $fotoProduk, string $kodeTiket, string $judulFilm, string $jamTayang) {
        parent::__construct($idProduk, $namaProduk, $harga, $fotoProduk);
        $this->kodeTiket = $kodeTiket;
        $this->judulFilm = $judulFilm;
        $this->jamTayang = $jamTayang;
    }

    // Getter
    public function getKodeTiket(): string { return $this->kodeTiket; }
    public function getJudulFilm(): string { return $this->judulFilm; }
    public function getJamTayang(): string { return $this->jamTayang; }

    // Setter
    public function setJudulFilm(string $judulFilm): void { $this->judulFilm = $judulFilm; }
    public function setJamTayang(string $jamTayang): void { $this->jamTayang = $jamTayang; }

    public function getTipe(): string {
        return "Tiket";
    }

    public function getBarisTabel(): array {
        return [
            $this->idProduk,
            $this->namaProduk,
            (int) $this->harga,
            $this->getTipe(),
            $this->fotoProduk,
            $this->kodeTiket, $this->judulFilm, $this->jamTayang,
            "-", "-", "-",
        ];
    }
}
