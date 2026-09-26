<?php
class Produk {
    protected int $idProduk;
    protected string $namaProduk;
    protected float $harga;
    protected string $fotoProduk;

    public function __construct(int $idProduk, string $namaProduk, float $harga, string $fotoProduk = "-") {
        $this->idProduk = $idProduk;
        $this->namaProduk = $namaProduk;
        $this->harga = $harga;
        $this->fotoProduk = $fotoProduk;
    }

    // Getter
    public function getIdProduk(): int { return $this->idProduk; }
    public function getNamaProduk(): string { return $this->namaProduk; }
    public function getHarga(): float { return $this->harga; }
    public function getFotoProduk(): string { return $this->fotoProduk; }

    // Setter
    public function setNamaProduk(string $namaProduk): void { $this->namaProduk = $namaProduk; }
    public function setHarga(float $harga): void { $this->harga = $harga; }
    public function setFotoProduk(string $fotoProduk): void { $this->fotoProduk = $fotoProduk; }

    public function getTipe(): string {
        return "Produk";
    }

    public function getBarisTabel(): array {
        return [
            $this->idProduk,
            $this->namaProduk,
            (int) $this->harga,
            $this->getTipe(),
            $this->fotoProduk,
            "-", "-", "-",
            "-", "-", "-",
        ];
    }
}
