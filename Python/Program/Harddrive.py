from Komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, kapasitas=0, tipe="", kecepatan_baca=0, kecepatan_tulis=0, nama="", harga=0, merk=""):
        super().__init__(nama, harga, merk)
        self.kapasitas = kapasitas
        self.tipe = tipe
        self.kecepatan_baca = kecepatan_baca
        self.kecepatan_tulis = kecepatan_tulis
    
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    
    def set_tipe(self, tipe):
        self.tipe = tipe
    
    def set_kecepatan_baca(self, kecepatan_baca):
        self.kecepatan_baca = kecepatan_baca
    
    def set_kecepatan_tulis(self, kecepatan_tulis):
        self.kecepatan_tulis = kecepatan_tulis
    
    def get_kapasitas(self):
        return self.kapasitas
    
    def get_tipe(self):
        return self.tipe
    
    def get_kecepatan_baca(self):
        return self.kecepatan_baca
    
    def get_kecepatan_tulis(self):
        return self.kecepatan_tulis
    
    def format_drive(self):
        print(f"Formatting drive {self.get_nama()}...")
        print("Drive formatted successfully!")
    
    def get_info(self):
        super().get_info()
        print(f"Kapasitas: {self.kapasitas} GB, Tipe: {self.tipe}, Kecepatan Baca: {self.kecepatan_baca} MB/s, Kecepatan Tulis: {self.kecepatan_tulis} MB/s")
