# TP2DPBO2526C1

JANJI
Saya Selika Kanajmi dengan NIM 2408495 mengerjakan TP2 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan

PENJELASAN
Terdapat 3 class yang saling berhubungan yaitu produk, tiket, dan tiket VIP
- Produk menjadi class dasar.
- Tiket merupakan turunan dari Produk.
- TiketVIP merupakan turunan dari Tiket.

Class
Class produk menyimpan data seperti:
- ID produk
- Nama produk
- Harga
Untuk versi PHP terdapat atribut tambahan fotoProduk.

Class Tiket mewarisi data dari Produk dan memiliki atribut tambahan:
- Kode tiket
- Judul film
- Jam tayang

Class TiketVIP mewarisi atribut dari Produk dan Tiket, kemudian menambahkan:
- Fasilitas VIP
- Harga tambahan
- Nomor kursi

Alur Program
Pada versi C++, Java, dan Python, semua objek Produk, Tiket, dan TiketVIP disimpan dalam satu list. Program memiliki 5 data awal dan menu untuk:
1. Menambah produk biasa
2. Menambah tiket
3. Menambah tiket VIP
4. Menampilkan data
5. Keluar

Saat data ditampilkan, program memanggil getBarisTabel() dari setiap objek. Karena menggunakan polymorphism, method yang dijalankan akan menyesuaikan dengan jenis objek aslinya. Hasil akhirnya itu satu tabel yang berisi gabungan data Produk, Tiket, dan TiketVIP.

Versi PHP menggunakan data hardcode, data dari ketiga class dimasukkan ke dalam satu array lalu ditampilkan dalam tabel HTML.

Struktur Program
Setiap bahasa memiliki file class Produk, Tiket, dan TiketVIP, serta file utama untuk menjalankan program.

Dokumentasi hasil program dan Diagram ada pada folder Dokumentasi
