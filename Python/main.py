from produk import Produk
from tiket import Tiket
from tiket_vip import TiketVIP

daftar_produk = []
def isi_data_awal():
    daftar_produk.append(Produk(1, "Popcorn Caramel", 25000))
    daftar_produk.append(Produk(2, "Cola Medium", 15000))
    daftar_produk.append(Tiket(3, "Tiket Reguler", 35000, "TKT001", "Inside Out 3", "14:00"))
    daftar_produk.append(Tiket(4, "Tiket Reguler", 35000, "TKT002", "Wall-E 2", "16:30"))
    daftar_produk.append(TiketVIP(5, "Tiket VIP", 75000, "TKT003", "Inside Out 3", "19:00", "Sofa Bed + Snack Combo", 40000, "VIP-A1"))


def tambah_produk():
    id_produk = int(input("Masukkan ID Produk    : "))
    nama = input("Masukkan Nama Produk  : ")
    harga = float(input("Masukkan Harga        : "))

    daftar_produk.append(Produk(id_produk, nama, harga))
    print("\nProduk berhasil ditambahkan!\n")


def tambah_tiket():
    nama = "Tiket Reguler" 
    id_produk = int(input("Masukkan ID Produk    : "))
    harga = float(input("Masukkan Harga        : "))
    kode = input("Masukkan Kode Tiket   : ")
    judul = input("Masukkan Judul Film   : ")
    jam = input("Masukkan Jam Tayang   : ")

    daftar_produk.append(Tiket(id_produk, nama, harga, kode, judul, jam))
    print("\nTiket berhasil ditambahkan!\n")


def tambah_tiket_vip():
    nama = "Tiket VIP"
    id_produk = int(input("Masukkan ID Produk        : "))
    harga = float(input("Masukkan Harga            : "))
    kode = input("Masukkan Kode Tiket       : ")
    judul = input("Masukkan Judul Film       : ")
    jam = input("Masukkan Jam Tayang       : ")
    fasilitas = input("Masukkan Fasilitas VIP    : ")
    harga_tambahan = float(input("Masukkan Harga Tambahan   : "))
    kursi = input("Masukkan Nomor Kursi      : ")

    daftar_produk.append(TiketVIP(id_produk, nama, harga, kode, judul, jam,
                                   fasilitas, harga_tambahan, kursi))
    print("\nTiket VIP berhasil ditambahkan!\n")


def tampilkan_tabel():
    header = (f"{'No':<4}{'ID':<5}{'Nama Produk':<18}{'Harga':<10}"
              f"{'Tipe':<10}{'KodeTkt':<10}{'Judul Film':<16}{'Jam':<10}"
              f"{'Fasilitas VIP':<26}{'HargaTmbhn':<14}{'NoKursi':<10}")
    print()
    print(header)
    print("-" * len(header))

    for i, produk in enumerate(daftar_produk, start=1):
        baris = produk.get_baris_tabel()
        print(f"{i:<4}{baris[0]:<5}{baris[1]:<18}{baris[2]:<10}"
              f"{baris[3]:<10}{baris[4]:<10}{baris[5]:<16}{baris[6]:<10}"
              f"{baris[7]:<26}{baris[8]:<14}{baris[9]:<10}")
    print()


def tampilkan_menu():
    print("===== MENU BIOSKOP =====")
    print("1. Tambah Produk Biasa")
    print("2. Tambah Tiket")
    print("3. Tambah Tiket VIP")
    print("4. Tampilkan Semua Data")
    print("0. Keluar")


def main():
    isi_data_awal()

    pilihan = -1
    while pilihan != 0:
        tampilkan_menu()
        pilihan = int(input("Pilih menu: "))

        if pilihan == 1:
            tambah_produk()
        elif pilihan == 2:
            tambah_tiket()
        elif pilihan == 3:
            tambah_tiket_vip()
        elif pilihan == 4:
            tampilkan_tabel()
        elif pilihan == 0:
            print("\nKeluar dari program. Sampai jumpa!")
        else:
            print("\nPilihan tidak valid!\n")


if __name__ == "__main__":
    main()