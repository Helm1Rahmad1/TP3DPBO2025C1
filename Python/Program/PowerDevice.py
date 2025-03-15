class PowerDevice:
    def __init__(self, wattage=0, efficiency_rating="", kecepatan_baca=0, kecepatan_tulis=0):
        self.wattage = wattage
        self.efficiency_rating = efficiency_rating
        self.kecepatan_baca = kecepatan_baca
        self.kecepatan_tulis = kecepatan_tulis
    
    def set_wattage(self, wattage):
        self.wattage = wattage
    
    def set_efficiency_rating(self, efficiency_rating):
        self.efficiency_rating = efficiency_rating
    
    def set_kecepatan_baca(self, kecepatan_baca):
        self.kecepatan_baca = kecepatan_baca
    
    def set_kecepatan_tulis(self, kecepatan_tulis):
        self.kecepatan_tulis = kecepatan_tulis
    
    def get_wattage(self):
        return self.wattage
    
    def get_efficiency_rating(self):
        return self.efficiency_rating
    
    def get_kecepatan_baca(self):
        return self.kecepatan_baca
    
    def get_kecepatan_tulis(self):
        return self.kecepatan_tulis
    
    def get_power_info(self):
        print(f"Wattage: {self.wattage} W, Efficiency Rating: {self.efficiency_rating}, Kecepatan Baca: {self.kecepatan_baca} MB/s, Kecepatan Tulis: {self.kecepatan_tulis} MB/s")
