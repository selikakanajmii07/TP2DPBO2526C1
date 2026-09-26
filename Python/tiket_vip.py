from tiket import Tiket


class TiketVIP(Tiket):

    def __init__(self, id_produk: int, nama_produk: str, harga: float,
                 kode_tiket: str, judul_film: str, jam_tayang: str,
                 fasilitas_vip: str, harga_tambahan: float, nomor_kursi: str):
        super().__init__(id_produk, nama_produk, harga,
                          kode_tiket, judul_film, jam_tayang)
        self._fasilitas_vip = str(fasilitas_vip)
        self._harga_tambahan = float(harga_tambahan)
        self._nomor_kursi = str(nomor_kursi)

    # Getter
    def get_fasilitas_vip(self) -> str:
        return self._fasilitas_vip

    def get_harga_tambahan(self) -> float:
        return self._harga_tambahan

    def get_nomor_kursi(self) -> str:
        return self._nomor_kursi

    # Setter
    def set_fasilitas_vip(self, fasilitas_vip: str) -> None:
        self._fasilitas_vip = str(fasilitas_vip)

    def set_harga_tambahan(self, harga_tambahan: float) -> None:
        self._harga_tambahan = float(harga_tambahan)

    def set_nomor_kursi(self, nomor_kursi: str) -> None:
        self._nomor_kursi = str(nomor_kursi)

    def get_tipe(self) -> str:
        return "TiketVIP"

    def get_baris_tabel(self) -> list:
        return [
            self._id_produk,
            self._nama_produk,
            int(self._harga),
            self.get_tipe(),
            self._kode_tiket, self._judul_film, self._jam_tayang,
            self._fasilitas_vip, int(self._harga_tambahan), self._nomor_kursi,
        ]
