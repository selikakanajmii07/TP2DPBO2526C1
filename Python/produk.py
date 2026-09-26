class Produk:

    def __init__(self, id_produk: int, nama_produk: str, harga: float):
        self._id_produk = id_produk
        self._nama_produk = str(nama_produk)
        self._harga = float(harga)

    # Getter
    def get_id_produk(self) -> int:
        return self._id_produk

    def get_nama_produk(self) -> str:
        return self._nama_produk

    def get_harga(self) -> float:
        return self._harga

    # Setter
    def set_nama_produk(self, nama_produk: str) -> None:
        self._nama_produk = str(nama_produk)

    def set_harga(self, harga: float) -> None:
        self._harga = float(harga)

    def get_tipe(self) -> str:
        return "Produk"

    def get_baris_tabel(self) -> list:
        return [
            self._id_produk,
            self._nama_produk,
            int(self._harga),
            self.get_tipe(),
            "-", "-", "-",
            "-", "-", "-",
        ]
