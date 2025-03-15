class Komponen:
    def __init__(self, nama="", harga=0, merk=""):
        self.nama = nama
        self.harga = harga
        self.merk = merk
    
    def set_nama(self, nama):
        self.nama = nama
    
    def set_harga(self, harga):
        self.harga = harga
    
    def set_merk(self, merk):
        self.merk = merk
    
    def get_nama(self):
        return self.nama
    
    def get_harga(self):
        return self.harga
    
    def get_merk(self):
        return self.merk
    
    def get_info(self):
        print(f"Nama: {self.nama}, Harga: {self.harga}, Merk: {self.merk}")
