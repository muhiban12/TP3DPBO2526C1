#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <string>

using namespace std;

// Parent Class (Base)
class Person {
protected:
    string nama;
    string nik;
    int umur;

public:
    Person() : nama(""), nik(""), umur(0) {}
    Person(string nama, string nik, int umur) : nama(nama), nik(nik), umur(umur) {}

    string getNama() const { return nama; }
    void setNama(string nama) { this->nama = nama; }

    string getNik() const { return nik; }
    void setNik(string nik) { this->nik = nik; }

    int getUmur() const { return umur; }
    void setUmur(int umur) { this->umur = umur; }

    virtual ~Person() {}
};

#endif