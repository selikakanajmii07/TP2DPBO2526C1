from produk import Produk


class Tiket(Produk):
    """Class turunan (Level 2) dari Produk"""

    def __init__(self, id_produk: int, nama_produk: str, harga: float,
                 kode_tiket: str, judul_film: str, jam_tayang: str):
        super().__init__(id_produk, nama_produk, harga)
        self._kode_tiket = str(kode_tiket)
        self._judul_film = str(judul_film)
        self._jam_tayang = str(jam_tayang)

    # Getter
    def get_kode_tiket(self) -> str:
        return self._kode_tiket

    def get_judul_film(self) -> str:
        return self._judul_film

    def get_jam_tayang(self) -> str:
        return self._jam_tayang

    # Setter
    def set_judul_film(self, judul_film: str) -> None:
        self._judul_film = str(judul_film)

    def set_jam_tayang(self, jam_tayang: str) -> None:
        self._jam_tayang = str(jam_tayang)

    def get_tipe(self) -> str:
        return "Tiket"

    def get_baris_tabel(self) -> list:
        return [
            self._id_produk,
            self._nama_produk,
            int(self._harga),
            self.get_tipe(),
            self._kode_tiket, self._judul_film, self._jam_tayang,
            "-", "-", "-",
        ]
