import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static ArrayList<Produk> daftarProduk = new ArrayList<>();
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        isiDataAwal();

        int pilihan;
        do {
            tampilkanMenu();
            pilihan = Integer.parseInt(scanner.nextLine().trim());

            switch (pilihan) {
                case 1: tambahProduk();
                break;
                case 2: tambahTiket();
                break;
                case 3: tambahTiketVIP();
                break;
                case 4: tampilkanTabel();
                break;
                case 0: System.out.println("\nKeluar dari program. Sampai jumpa!");
                break;
                default: System.out.println("\nPilihan tidak valid!\n");
                break;
            }
        } while (pilihan != 0);
    }

    static void isiDataAwal() {
        daftarProduk.add(new Produk(1, "Popcorn Caramel", 25000));
        daftarProduk.add(new Produk(2, "Cola Medium", 15000));
        daftarProduk.add(new Tiket(3, "Tiket Reguler", 35000, "TKT001", "Inside Out 3", "14:00"));
        daftarProduk.add(new Tiket(4, "Tiket Reguler", 35000, "TKT002", "Wall-E 2", "16:30"));
        daftarProduk.add(new TiketVIP(5, "Tiket VIP", 75000, "TKT003", "Inside Out 3", "19:00", "Sofa Bed + Snack Combo", 40000, "VIP-A1"));
    }

    static void tampilkanMenu() {
        System.out.println("===== MENU BIOSKOP =====");
        System.out.println("1. Tambah Produk Biasa");
        System.out.println("2. Tambah Tiket");
        System.out.println("3. Tambah Tiket VIP");
        System.out.println("4. Tampilkan Semua Data");
        System.out.println("0. Keluar");
        System.out.print("Pilih menu: ");
    }

    static void tambahProduk() {
        System.out.print("Masukkan ID Produk    : ");
        int id = Integer.parseInt(scanner.nextLine().trim());
        System.out.print("Masukkan Nama Produk  : ");
        String nama = scanner.nextLine();
        System.out.print("Masukkan Harga        : ");
        double harga = Double.parseDouble(scanner.nextLine().trim());

        daftarProduk.add(new Produk(id, nama, harga));
        System.out.println("\nProduk berhasil ditambahkan!\n");
    }

    static void tambahTiket() {
        String nama = "Tiket Reguler";
        System.out.print("Masukkan ID Produk    : ");
        int id = Integer.parseInt(scanner.nextLine().trim());
        System.out.print("Masukkan Harga        : ");
        double harga = Double.parseDouble(scanner.nextLine().trim());
        System.out.print("Masukkan Kode Tiket   : ");
        String kode = scanner.nextLine();
        System.out.print("Masukkan Judul Film   : ");
        String judul = scanner.nextLine();
        System.out.print("Masukkan Jam Tayang   : ");
        String jam = scanner.nextLine();

        daftarProduk.add(new Tiket(id, nama, harga, kode, judul, jam));
        System.out.println("\nTiket berhasil ditambahkan!\n");
    }

    static void tambahTiketVIP() {
        String nama = "Tiket VIP";
        System.out.print("Masukkan ID Produk        : ");
        int id = Integer.parseInt(scanner.nextLine().trim());
        System.out.print("Masukkan Harga            : ");
        double harga = Double.parseDouble(scanner.nextLine().trim());
        System.out.print("Masukkan Kode Tiket       : ");
        String kode = scanner.nextLine();
        System.out.print("Masukkan Judul Film       : ");
        String judul = scanner.nextLine();
        System.out.print("Masukkan Jam Tayang       : ");
        String jam = scanner.nextLine();
        System.out.print("Masukkan Fasilitas VIP    : ");
        String fasilitas = scanner.nextLine();
        System.out.print("Masukkan Harga Tambahan   : ");
        double hargaTambahan = Double.parseDouble(scanner.nextLine().trim());
        System.out.print("Masukkan Nomor Kursi      : ");
        String kursi = scanner.nextLine();

        daftarProduk.add(new TiketVIP(id, nama, harga, kode, judul, jam,
                fasilitas, hargaTambahan, kursi));
        System.out.println("\nTiket VIP berhasil ditambahkan!\n");
    }

    static void tampilkanTabel() {
        String format = "%-4s%-5s%-18s%-10s%-10s%-10s%-16s%-10s%-26s%-14s%-10s%n";

        System.out.println();
        System.out.printf(format, "No", "ID", "Nama Produk", "Harga", "Tipe", "KodeTkt", "Judul Film", "Jam", "Fasilitas VIP", "HargaTmbhn", "NoKursi");
        System.out.println("-".repeat(133));

        for (int i = 0; i < daftarProduk.size(); i++) {
            String[] baris = daftarProduk.get(i).getBarisTabel();

            System.out.printf(format, String.valueOf(i + 1),
                    baris[0], baris[1], baris[2], baris[3], baris[4],
                    baris[5], baris[6], baris[7], baris[8], baris[9]);
        }
        System.out.println();
    }
}