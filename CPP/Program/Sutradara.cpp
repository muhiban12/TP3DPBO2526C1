#ifndef SUTRADARA_CPP
#define SUTRADARA_CPP

#include "Person.cpp"

// Child Class 1 (Hierarchical Inheritance)
class Sutradara : public Person {
private:
    int pengalamanTahun;
    string lisensi;

public:
    Sutradara() : Person(), pengalamanTahun(0), lisensi("") {}
    Sutradara(string nama, string nik, int umur, int pengalamanTahun, string lisensi)
        : Person(nama, nik, umur), pengalamanTahun(pengalamanTahun), lisensi(lisensi) {}

    int getPengalamanTahun() const { return pengalamanTahun; }
    void setPengalamanTahun(int exp) { this->pengalamanTahun = exp; }

    string getLisensi() const { return lisensi; }
    void setLisensi(string lisensi) { this->lisensi = lisensi; }
};

#endif