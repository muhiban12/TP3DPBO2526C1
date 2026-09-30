import java.util.ArrayList;

public class Film {
    private String idFilm;
    private String judul;
    private int tahunRilis;
    private Sutradara sutradara;
    private ArrayList<Aktor> listAktor;

    public Film() {
        this.idFilm = "";
        this.judul = "";
        this.tahunRilis = 0;
        this.sutradara = new Sutradara();
        this.listAktor = new ArrayList<>();
    }

    public Film(String idFilm, String judul, int tahunRilis, Sutradara sutradara, ArrayList<Aktor> listAktor) {
        this.idFilm = idFilm;
        this.judul = judul;
        this.tahunRilis = tahunRilis;
        this.sutradara = sutradara;
        this.listAktor = listAktor;
    }

    public String getIdFilm() { return idFilm; }
    public String getJudul() { return judul; }
    public int getTahunRilis() { return tahunRilis; }
    public Sutradara getSutradara() { return sutradara; }
    public ArrayList<Aktor> getListAktor() { return listAktor; }

    public void addAktor(Aktor aktor) {
        this.listAktor.add(aktor);
    }

    public void printInfo() {
        System.out.println("========================================================================");
        System.out.println("ID Film      : " + idFilm);
        System.out.println("Judul Film   : " + judul + " (" + tahunRilis + ")");
        System.out.println("Sutradara    : " + sutradara.getNama() + " | Exp: " + sutradara.getPengalamanTahun() + " Tahun | Lisensi: " + sutradara.getLisensi());
        System.out.println("Daftar Aktor :");
        for (int i = 0; i < listAktor.size(); i++) {
            Aktor a = listAktor.get(i);
            System.out.printf("  %d. %s (NIK: %s, Umur: %d thn | Total Film: %d | Rating: %.1f/5.0)\n",
                    (i + 1), a.getNama(), a.getNik(), a.getUmur(), a.getJumlahFilm(), a.getRating());
        }
        System.out.println("========================================================================");
    }
}