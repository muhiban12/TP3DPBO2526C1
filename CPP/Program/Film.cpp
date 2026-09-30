#ifndef FILM_CPP
#define FILM_CPP

#include <vector>
#include "Sutradara.cpp"
#include "Aktor.cpp"

// Composition Class (Memuat 1 Sutradara dan Array/Vector Aktor)
class Film {
private:
    string idFilm;
    string judul;
    int tahunRilis;
    Sutradara sutradara;     // Komposisi
    vector<Aktor> listAktor; // Komposisi (Array of Objects)

public:
    Film() : idFilm(""), judul(""), tahunRilis(0) {}
    Film(string idFilm, string judul, int tahunRilis, Sutradara sutradara, vector<Aktor> listAktor)
        : idFilm(idFilm), judul(judul), tahunRilis(tahunRilis), sutradara(sutradara), listAktor(listAktor) {}

    string getIdFilm() const { return idFilm; }
    string getJudul() const { return judul; }
    int getTahunRilis() const { return tahunRilis; }
    Sutradara getSutradara() const { return sutradara; }
    vector<Aktor> getListAktor() const { return listAktor; }

    void addAktor(const Aktor& aktor) {
        listAktor.push_back(aktor);
    }

    void printInfo() const {
        cout << "========================================================================\n";
        cout << "ID Film      : " << idFilm << "\n";
        cout << "Judul Film   : " << judul << " (" << tahunRilis << ")\n";
        cout << "Sutradara    : " << sutradara.getNama() 
             << " | Exp: " << sutradara.getPengalamanTahun() << " Tahun"
             << " | Lisensi: " << sutradara.getLisensi() << "\n";
        cout << "Daftar Aktor :\n";
        for (size_t i = 0; i < listAktor.size(); ++i) {
            cout << "  " << (i + 1) << ". " << listAktor[i].getNama()
                 << " (NIK: " << listAktor[i].getNik()
                 << ", Umur: " << listAktor[i].getUmur()
                 << " thn | Total Film: " << listAktor[i].getJumlahFilm()
                 << " | Rating: " << listAktor[i].getRating() << "/5.0)\n";
        }
        cout << "========================================================================\n";
    }
};

#endif