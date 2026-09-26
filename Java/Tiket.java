public class Tiket extends Produk {
    protected String kodeTiket;
    protected String judulFilm;
    protected String jamTayang;

    public Tiket() {}

    public Tiket(int idProduk, String namaProduk, double harga,
                 String kodeTiket, String judulFilm, String jamTayang) {
        super(idProduk, namaProduk, harga);
        this.kodeTiket = kodeTiket;
        this.judulFilm = judulFilm;
        this.jamTayang = jamTayang;
    }

    // Getter
    public String getKodeTiket() { return kodeTiket; }
    public String getJudulFilm() { return judulFilm; }
    public String getJamTayang() { return jamTayang; }

    // Setter
    public void setJudulFilm(String judulFilm) { this.judulFilm = judulFilm; }
    public void setJamTayang(String jamTayang) { this.jamTayang = jamTayang; }

    @Override
    public String getTipe() {
        return "Tiket";
    }

    @Override
    public String[] getBarisTabel() {
        return new String[] {
            String.valueOf(idProduk),
            namaProduk,
            String.valueOf((int) harga),
            getTipe(),
            kodeTiket, judulFilm, jamTayang,
            "-", "-", "-"
        };
    }
}
