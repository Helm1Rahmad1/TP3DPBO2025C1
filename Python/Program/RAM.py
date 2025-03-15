from Komponen import Komponen

class RAM(Komponen):
    def __init__(self, kapasitas=0, kecepatan=0, jenis="", nama="", harga=0, merk=""):
        super().__init__(nama, harga, merk)
        self.kapasitas = kapasitas
        self.kecepatan = kecepatan
        self.jenis = jenis
    
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    
    def set_kecepatan(self, kecepatan):
        self.kecepatan = kecepatan
    
    def set_jenis(self, jenis):
        self.jenis = jenis
    
    def get_kapasitas(self):
        return self.kapasitas
    
    def get_kecepatan(self):
        return self.kecepatan
    
    def get_jenis(self):
        return self.jenis
    
    def upgrade(self):
        self.kapasitas *= 2
        print(f"RAM upgraded to {self.kapasitas} GB")
    
    def get_info(self):
        super().get_info()
        print(f"Kapasitas: {self.kapasitas} GB, Kecepatan: {self.kecepatan} MHz, Jenis: {self.jenis}")

