<?php
require_once __DIR__ . "/Tiket.php";
class TiketVIP extends Tiket {
    private string $fasilitasVIP;
    private float $hargaTambahan;
    private string $nomorKursi;

    public function __construct(int $idProduk, string $namaProduk, float $harga, string $fotoProduk, string $kodeTiket, string $judulFilm, string $jamTayang, string $fasilitasVIP, float $hargaTambahan, string $nomorKursi) {
        parent::__construct($idProduk, $namaProduk, $harga, $fotoProduk, $kodeTiket, $judulFilm, $jamTayang);
        $this->fasilitasVIP = $fasilitasVIP;
        $this->hargaTambahan = $hargaTambahan;
        $this->nomorKursi = $nomorKursi;
    }

    // Getter
    public function getFasilitasVIP(): string { return $this->fasilitasVIP; }
    public function getHargaTambahan(): float { return $this->hargaTambahan; }
    public function getNomorKursi(): string { return $this->nomorKursi; }

    // Setter
    public function setFasilitasVIP(string $fasilitasVIP): void { $this->fasilitasVIP = $fasilitasVIP; }
    public function setHargaTambahan(float $hargaTambahan): void { $this->hargaTambahan = $hargaTambahan; }
    public function setNomorKursi(string $nomorKursi): void { $this->nomorKursi = $nomorKursi; }

    public function getTipe(): string {
        return "TiketVIP";
    }

    public function getBarisTabel(): array {
        return [
            $this->idProduk,
            $this->namaProduk,
            (int) $this->harga,
            $this->getTipe(),
            $this->fotoProduk,
            $this->kodeTiket, $this->judulFilm, $this->jamTayang,
            $this->fasilitasVIP, (int) $this->hargaTambahan, $this->nomorKursi,
        ];
    }
}
