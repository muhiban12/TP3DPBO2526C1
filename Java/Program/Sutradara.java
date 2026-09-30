public class Sutradara extends Person {
    private int pengalamanTahun;
    private String lisensi;

    public Sutradara() {
        super();
        this.pengalamanTahun = 0;
        this.lisensi = "";
    }

    public Sutradara(String nama, String nik, int umur, int pengalamanTahun, String lisensi) {
        super(nama, nik, umur);
        this.pengalamanTahun = pengalamanTahun;
        this.lisensi = lisensi;
    }

    public int getPengalamanTahun() { return pengalamanTahun; }
    public void setPengalamanTahun(int exp) { this.pengalamanTahun = exp; }

    public String getLisensi() { return lisensi; }
    public void setLisensi(String lisensi) { this.lisensi = lisensi; }
}