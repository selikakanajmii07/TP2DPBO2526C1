public class TiketVIP extends Tiket {
    private String fasilitasVIP;
    private double hargaTambahan;
    private String nomorKursi;

    public TiketVIP() {}
    public TiketVIP(int idProduk, String namaProduk, double harga,
                     String kodeTiket, String judulFilm, String jamTayang,
                     String fasilitasVIP, double hargaTambahan, String nomorKursi) {
        super(idProduk, namaProduk, harga, kodeTiket, judulFilm, jamTayang);
        this.fasilitasVIP = fasilitasVIP;
        this.hargaTambahan = hargaTambahan;
        this.nomorKursi = nomorKursi;
    }

    // Getter
    public String getFasilitasVIP() { return fasilitasVIP; }
    public double getHargaTambahan() { return hargaTambahan; }
    public String getNomorKursi() { return nomorKursi; }

    // Setter
    public void setFasilitasVIP(String fasilitasVIP) { this.fasilitasVIP = fasilitasVIP; }
    public void setHargaTambahan(double hargaTambahan) { this.hargaTambahan = hargaTambahan; }
    public void setNomorKursi(String nomorKursi) { this.nomorKursi = nomorKursi; }

    @Override
    public String getTipe() {
        return "TiketVIP";
    }

    @Override
    public String[] getBarisTabel() {
        return new String[] {
            String.valueOf(idProduk),
            namaProduk,
            String.valueOf((int) harga),
            getTipe(),
            kodeTiket, judulFilm, jamTayang,
            fasilitasVIP, String.valueOf((int) hargaTambahan), nomorKursi
        };
    }
}
