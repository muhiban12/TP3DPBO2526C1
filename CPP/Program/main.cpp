#include <iostream>
#include <vector>
#include "Film.cpp"

using namespace std;

void tampilkanSemuaFilm(const vector<Film>& daftarFilm) {
    for (const auto& film : daftarFilm) {
        film.printInfo();
        cout << "\n";
    }
}

int main() {
    // 1. Inisialisasi Objek Aktor
    Aktor a1("Leonardo DiCaprio", "320101", 49, 35, 4.9);
    Aktor a2("Joseph Gordon-Levitt", "320102", 43, 28, 4.7);
    Aktor a3("Matthew McConaughey", "320103", 54, 40, 4.8);
    Aktor a4("Anne Hathaway", "320104", 41, 32, 4.6);

    // 2. Inisialisasi Objek Sutradara
    Sutradara s1("Christopher Nolan", "310001", 53, 25, "DGA-PRO-01");

    // 3. Inisialisasi Film Awal
    vector<Aktor> aktorInception = {a1, a2};
    Film f1("F001", "Inception", 2010, s1, aktorInception);

    vector<Aktor> aktorInterstellar = {a3, a4};
    Film f2("F002", "Interstellar", 2014, s1, aktorInterstellar);

    vector<Film> daftarFilm = {f1, f2};

    // --- CETAK DATA SEBELUM PENAMBAHAN ---
    cout << "\n========================================================================\n";
    cout << "               [CPP] DATA FILM SEBELUM PENAMBAHAN                       \n";
    cout << "========================================================================\n";
    tampilkanSemuaFilm(daftarFilm);

    // --- PROSES PENAMBAHAN DATA BARU ---
    // Tambah Aktor Baru ke Film 1 (Inception)
    Aktor a5("Elliot Page", "320105", 37, 22, 4.5);
    daftarFilm[0].addAktor(a5);

    // Tambah Film Baru (Oppenheimer)
    Sutradara s2("Christopher Nolan", "310001", 53, 25, "DGA-PRO-01");
    Aktor a6("Cillian Murphy", "320106", 47, 30, 4.9);
    Aktor a7("Emily Blunt", "320107", 41, 25, 4.7);

    Film f3("F003", "Oppenheimer", 2023, s2, {a6, a7});
    daftarFilm.push_back(f3);

    // --- CETAK DATA SETELAH PENAMBAHAN ---
    cout << "\n========================================================================\n";
    cout << "               [CPP] DATA FILM SETELAH PENAMBAHAN                        \n";
    cout << "========================================================================\n";
    tampilkanSemuaFilm(daftarFilm);

    return 0;
}