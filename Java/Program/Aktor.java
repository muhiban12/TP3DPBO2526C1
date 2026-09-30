public class Aktor extends Person {
    private int jumlahFilm;
    private double rating;

    public Aktor() {
        super();
        this.jumlahFilm = 0;
        this.rating = 0.0;
    }

    public Aktor(String nama, String nik, int umur, int jumlahFilm, double rating) {
        super(nama, nik, umur);
        this.jumlahFilm = jumlahFilm;
        this.rating = rating;
    }

    public int getJumlahFilm() { return jumlahFilm; }
    public void setJumlahFilm(int n) { this.jumlahFilm = n; }

    public double getRating() { return rating; }
    public void setRating(double r) { this.rating = r; }
}