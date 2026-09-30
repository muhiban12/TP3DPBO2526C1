class Person:
    def __init__(self, nama="", nik="", umur=0):
        self._nama = nama
        self._nik = nik
        self._umur = umur

    def get_nama(self): return self._nama
    def set_nama(self, nama): self._nama = nama

    def get_nik(self): return self._nik
    def set_nik(self, nik): self._nik = nik

    def get_umur(self): return self._umur
    def set_umur(self, umur): self._umur = umur