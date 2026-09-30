public class Person {
    protected String nama;
    protected String nik;
    protected int umur;

    public Person() {
        this.nama = "";
        this.nik = "";
        this.umur = 0;
    }

    public Person(String nama, String nik, int umur) {
        this.nama = nama;
        this.nik = nik;
        this.umur = umur;
    }

    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    public String getNik() { return nik; }
    public void setNik(String nik) { this.nik = nik; }

    public int getUmur() { return umur; }
    public void setUmur(int umur) { this.umur = umur; }
}