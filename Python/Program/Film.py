class Film:
    def __init__(self, id_film="", judul="", tahun_rilis=0, sutradara=None, list_aktor=None):
        self._id_film = id_film
        self._judul = judul
        self._tahun_rilis = tahun_rilis
        self._sutradara = sutradara
        self._list_aktor = list_aktor if list_aktor is not None else []

    def get_id_film(self): return self._id_film
    def get_judul(self): return self._judul
    def get_tahun_rilis(self): return self._tahun_rilis
    def get_sutradara(self): return self._sutradara
    def get_list_aktor(self): return self._list_aktor

    def add_aktor(self, aktor):
        self._list_aktor.append(aktor)

    def print_info(self):
        print("=" * 72)
        print(f"ID Film      : {self._id_film}")
        print(f"Judul Film   : {self._judul} ({self._tahun_rilis})")
        print(f"Sutradara    : {self._sutradara.get_nama()} | Exp: {self._sutradara.get_pengalaman_tahun()} Tahun | Lisensi: {self._sutradara.get_lisensi()}")
        print("Daftar Aktor :")
        for idx, aktor in enumerate(self._list_aktor, 1):
            print(f"  {idx}. {aktor.get_nama()} (NIK: {aktor.get_nik()}, Umur: {aktor.get_umur()} thn | Total Film: {aktor.get_jumlah_film()} | Rating: {aktor.get_rating()}/5.0)")
        print("=" * 72)