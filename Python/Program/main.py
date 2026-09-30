from Sutradara import Sutradara
from Aktor import Aktor
from Film import Film

def tampilkan_semua_film(daftar_film):
    for f in daftar_film:
        f.print_info()
        print()

def main():
    # 1. Inisialisasi Objek Aktor
    a1 = Aktor("Timothée Chalamet", "330101", 28, 15, 4.8)
    a2 = Aktor("Zendaya", "330102", 27, 18, 4.7)
    a3 = Aktor("Ryan Gosling", "330103", 43, 30, 4.9)
    a4 = Aktor("Ana de Armas", "330104", 35, 20, 4.6)

    # 2. Inisialisasi Objek Sutradara
    s1 = Sutradara("Denis Villeneuve", "310002", 56, 20, "DGA-PRO-02")

    # 3. Inisialisasi Film Awal
    f1 = Film("F010", "Dune", 2021, s1, [a1, a2])
    f2 = Film("F011", "Blade Runner 2049", 2017, s1, [a3, a4])

    daftar_film = [f1, f2]

    # --- CETAK DATA SEBELUM PENAMBAHAN ---
    print("\n" + "=" * 72)
    print("            [PYTHON] DATA FILM SEBELUM PENAMBAHAN                       ")
    print("=" * 72)
    tampilkan_semua_film(daftar_film)

    # --- PROSES PENAMBAHAN DATA BARU ---
    # Tambah Aktor Baru ke Film 1 (Dune)
    a5 = Aktor("Oscar Isaac", "330105", 45, 35, 4.8)
    daftar_film[0].add_aktor(a5)

    # Tambah Film Baru (Dune: Part Two)
    s2 = Sutradara("Denis Villeneuve", "310002", 56, 20, "DGA-PRO-02")
    a6 = Aktor("Austin Butler", "330106", 32, 12, 4.7)
    a7 = Aktor("Florence Pugh", "330107", 28, 16, 4.8)

    f3 = Film("F012", "Dune: Part Two", 2024, s2, [a1, a6, a7])
    daftar_film.append(f3)

    # --- CETAK DATA SETELAH PENAMBAHAN ---
    print("\n" + "=" * 72)
    print("            [PYTHON] DATA FILM SETELAH PENAMBAHAN                       ")
    print("=" * 72)
    tampilkan_semua_film(daftar_film)

if __name__ == "__main__":
    main()