#ifndef AKTOR_CPP
#define AKTOR_CPP

#include "Person.cpp"

// Child Class 2 (Hierarchical Inheritance)
class Aktor : public Person {
private:
    int jumlahFilm;
    double rating;

public:
    Aktor() : Person(), jumlahFilm(0), rating(0.0) {}
    Aktor(string nama, string nik, int umur, int jumlahFilm, double rating)
        : Person(nama, nik, umur), jumlahFilm(jumlahFilm), rating(rating) {}

    int getJumlahFilm() const { return jumlahFilm; }
    void setJumlahFilm(int n) { this->jumlahFilm = n; }

    double getRating() const { return rating; }
    void setRating(double r) { this->rating = r; }
};

#endif