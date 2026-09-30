# Tugas Praktikum 3 (TP3) DPBO - Hierarchical Inheritance & Composition

## JANJI
Saya Muhiban Fadlan Nursaid dengan NIM 2400382 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

## Deskripsi Program
Program ini merupakan **Sistem Manajemen Data Film, Sutradara, dan Aktor** yang dibangun menggunakan prinsip Pemrograman Berorientasi Objek (OOP) dengan fokus pada kombinasi **Hierarchical Inheritance** dan **Composition**.

Program dibuat dan diimplementasikan secara konsisten pada 3 bahasa pemrograman:
* **C++** (CLI) - Menggunakan `std::vector` untuk penyimpanan objek dinamis.
* **Python** (CLI) - Menggunakan *List of Objects* dan *dynamic formatting*.
* **Java** (CLI - Bonus) - Menggunakan `ArrayList` dan `System.out.printf`.

---

## Desain Diagram Program (UML Diagram)

*NOTE : Untuk gambar desainnya yang telah di sesuaikan ada di folder tambahan bernama TP3/Desain

---


## Penjelasan Desain Program
1. Hierarchical Inheritance (Pewarisan Hirarki)
    - Kelas Person bertindak sebagai Base Class (Parent) yang menampung atribut umum manusia (nama, nik, umur).
    - Turunan dari kelas Person terbagi menjadi dua Derived Class (Child) yang sejajar:
        - Sutradara: Mewarisi atribut Person dan menambahkan spesifikasi pekerjaan sutradara (pengalamanTahun, lisensi).
        - Aktor: Mewarisi atribut Person dan menambahkan spesifikasi rekam jejak aktor (jumlahFilm, rating).

2. Composition (Komposisi)
    - Kelas Film bertindak sebagai entitas utama yang membentuk hubungan kepemilikan kuat (Part-Of) terhadap objek-objek penyusunnya:
        - 1 Objek Sutradara: Setiap film dibentuk dan dimiliki oleh tepat satu sutradara.
        - Array of Objects (listAktor): Setiap film menampung daftar/kumpulan objek Aktor menggunakan kontainer dinamis (vector / ArrayList / list).


---


## Penjelasan Atribut dan Methods Setiap Kelas
1. Kelas Person (Base Class)
    - Atribut:
        - nama (string/protected) : Nama lengkap individu.
        - nik (string/protected) : Nomor Induk Kependudukan.
        - umur (int/protected) : Umur individu dalam tahun.

    - Methods:
        - Constructor (default & parameter)
        - Getter dan Setter untuk nama, nik, dan umur.

2. Kelas Sutradara (Child Class dari Person
    - Atribut:
        - pengalamanTahun (int/private) : Total tahun pengalaman menyutradarai.
        - lisensi (string/private) : Kode/nomor lisensi sutradara profesional.

    - Methods:
        - Constructor (memanggil super/Person constructor)
        - Getter dan Setter untuk pengalamanTahun dan lisensi.

4. Kelas Aktor (Child Class dari Person)
    - Atribut:
        - jumlahFilm (int/private) : Jumlah film yang pernah dibintangi.
        - rating (double/private) : Nilai performa akting (skala 0.0 - 5.0).

    - Methods:
        - Constructor (memanggil super/Person constructor)
        - Getter dan Setter untuk jumlahFilm dan rating.

5. Kelas Film (Composition Class)
    - Atribut:
        - idFilm (string/private) : Kode unik film.
        - judul (string/private) : Judul karya film.
        - tahunRilis (int/private) : Tahun perilisan film.
        - sutradara (Sutradara/private) : Objek Sutradara penanggung jawab.
        - listAktor (List/private) : Kumpulan objek Aktor yang membintangi film.

    - Methods:
        - Constructor (menginisialisasi seluruh atribut dan objek komposisi)
        - Getter untuk seluruh atribut.
        - addAktor(Aktor) : Menambahkan objek Aktor baru ke dalam daftar listAktor.
        - printInfo() : Menampilkan detail film, sutradara, dan seluruh aktor secara terstruktur.

---


## Penjelasan Alur Program (System Flow)
```text
[ Start Program ]
        │
        ▼
[ Instansiasi Objek Aktor & Sutradara ]
        │
        ▼
[ Instansiasi Objek Film Awal ] ──► (Memasukkan Sutradara & List Aktor ke dalam Film)
        │
        ▼
[ Tampilkan Data SEBELUM Penambahan ] ──► (Memanggil printInfo() untuk seluruh Film)
        │
        ▼
[ Proses Penambahan Data ]
        ├── 1. Tambah Objek Aktor Baru ke Film yang Sudah Ada (addAktor())
        └── 2. Tambah Objek Film Baru lengkap dengan Sutradara & List Aktor Baru
        │
        ▼
[ Tampilkan Data SETELAH Penambahan ] ──► (Cetak ulang seluruh data Film yang diperbarui)
        │
        ▼
[ End Program ]

---

Struktur Repositori
TP3/
├── CPP/
│   ├── Program/
│   │   ├── Person.cpp
│   │   ├── Sutradara.cpp
│   │   ├── Aktor.cpp
│   │   ├── Film.cpp
│   │   └── main.cpp
│   └── Dokumentasi/
│       ├── show_sebelum_cpp.png
│       └── show_setelah_cpp.png
├── Python/
│   ├── Program/
│   │   ├── Person.py
│   │   ├── Sutradara.py
│   │   ├── Aktor.py
│   │   ├── Film.py
│   │   └── main.py
│   └── Dokumentasi/
│       ├── show_sebelum_py.png
│       └── show_setelah_py.png
├── Java/
│   ├── Program/
│   │   ├── Person.java
│   │   ├── Sutradara.java
│   │   ├── Aktor.java
│   │   ├── Film.java
│   │   └── Main.java
│   └── Dokumentasi/
│       ├── show_sebelum_java.png
│       └── show_setelah_java.png
└── Readme.md

---

## Dokumentasi Hasil Eksekusi
Tangkapan layar (screenshot) bukti keberhasilan eksekusi program sebelum dan sesudah penambahan data di tiap bahasa pemrograman dapat dilihat pada folder Dokumentasi/ di masing-masing direktori bahasa (CPP/Dokumentasi/, Python/Dokumentasi/, dan Java/Dokumentasi/).

---
