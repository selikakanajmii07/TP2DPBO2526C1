public class Produk {
    protected int idProduk;
    protected String namaProduk;
    protected double harga;

    public Produk() {}

    public Produk(int idProduk, String namaProduk, double harga) {
        this.idProduk = idProduk;
        this.namaProduk = namaProduk;
        this.harga = harga;
    }

    // Getter
    public int getIdProduk() { return idProduk; }
    public String getNamaProduk() { return namaProduk; }
    public double getHarga() { return harga; }

    // Setter
    public void setNamaProduk(String namaProduk) { this.namaProduk = namaProduk; }
    public void setHarga(double harga) { this.harga = harga; }

    public String getTipe() {
        return "Produk";
    }

    public String[] getBarisTabel() {
        return new String[] {
            String.valueOf(idProduk),
            namaProduk,
            String.valueOf((int) harga),
            getTipe(),
            "-", "-", "-",
            "-", "-", "-"
        };
    }
}
