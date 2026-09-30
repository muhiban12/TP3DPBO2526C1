import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void tampilkanSemuaFilm(ArrayList<Film> daftarFilm) {
        for (Film f : daftarFilm) {
            f.printInfo();
            System.out.println();
        }
    }

    public static void main(String[] args) {
        // 1. Inisialisasi Objek Aktor
        Aktor a1 = new Aktor("Shameik Moore", "340101", 29, 12, 4.7);
        Aktor a2 = new Aktor("Hailee Steinfeld", "340102", 27, 25, 4.8);
        Aktor a3 = new Aktor("Miles Teller", "340103", 37, 22, 4.6);
        Aktor a4 = new Aktor("JK Simmons", "340104", 69, 80, 4.9);

        // 2. Inisialisasi Objek Sutradara
        Sutradara s1 = new Sutradara("Peter Ramsey", "310003", 61, 18, "DGA-PRO-03");
        Sutradara s2 = new Sutradara("Damien Chazelle", "310004", 39, 12, "DGA-PRO-04");

        // 3. Inisialisasi Film Awal
        Film f1 = new Film("F020", "Into the Spider-Verse", 2018, s1, new ArrayList<>(Arrays.asList(a1, a2)));
        Film f2 = new Film("F021", "Whiplash", 2014, s2, new ArrayList<>(Arrays.asList(a3, a4)));

        ArrayList<Film> daftarFilm = new ArrayList<>(Arrays.asList(f1, f2));

        // --- CETAK DATA SEBELUM PENAMBAHAN ---
        System.out.println("\n========================================================================");
        System.out.println("              [JAVA] DATA FILM SEBELUM PENAMBAHAN                       ");
        System.out.println("========================================================================");
        tampilkanSemuaFilm(daftarFilm);

        // --- PROSES PENAMBAHAN DATA BARU ---
        // Tambah Aktor Baru ke Film 1 (Into the Spider-Verse)
        Aktor a5 = new Aktor("Jake Johnson", "340105", 46, 30, 4.7);
        daftarFilm.get(0).addAktor(a5);

        // Tambah Film Baru (La La Land)
        Aktor a6 = new Aktor("Ryan Gosling", "340106", 43, 30, 4.9);
        Aktor a7 = new Aktor("Emma Stone", "340107", 35, 28, 4.9);

        Film f3 = new Film("F022", "La La Land", 2016, s2, new ArrayList<>(Arrays.asList(a6, a7)));
        daftarFilm.add(f3);

        // --- CETAK DATA SETELAH PENAMBAHAN ---
        System.out.println("\n========================================================================");
        System.out.println("              [JAVA] DATA FILM SETELAH PENAMBAHAN                       ");
        System.out.println("========================================================================");
        tampilkanSemuaFilm(daftarFilm);
    }
}