from Person import Person

class Sutradara(Person):
    def __init__(self, nama="", nik="", umur=0, pengalaman_tahun=0, lisensi=""):
        super().__init__(nama, nik, umur)
        self._pengalaman_tahun = pengalaman_tahun
        self._lisensi = lisensi

    def get_pengalaman_tahun(self): return self._pengalaman_tahun
    def set_pengalaman_tahun(self, exp): self._pengalaman_tahun = exp

    def get_lisensi(self): return self._lisensi
    def set_lisensi(self, lisensi): self._lisensi = lisensi