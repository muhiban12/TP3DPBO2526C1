from Person import Person

class Aktor(Person):
    def __init__(self, nama="", nik="", umur=0, jumlah_film=0, rating=0.0):
        super().__init__(nama, nik, umur)
        self._jumlah_film = jumlah_film
        self._rating = rating

    def get_jumlah_film(self): return self._jumlah_film
    def set_jumlah_film(self, n): self._jumlah_film = n

    def get_rating(self): return self._rating
    def set_rating(self, r): self._rating = r