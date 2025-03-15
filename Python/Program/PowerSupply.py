from PowerDevice import PowerDevice

class PowerSupply(PowerDevice):
    def __init__(self, daya=0, sertifikasi="", modular=False, wattage=0, efficiency_rating="", kecepatan_baca=0, kecepatan_tulis=0):
        super().__init__(wattage, efficiency_rating, kecepatan_baca, kecepatan_tulis)
        self.daya = daya
        self.sertifikasi = sertifikasi
        self.modular = modular
    
    def set_daya(self, daya):
        self.daya = daya
    
    def set_sertifikasi(self, sertifikasi):
        self.sertifikasi = sertifikasi
    
    def set_modular(self, modular):
        self.modular = modular
    
    def get_daya(self):
        return self.daya
    
    def get_sertifikasi(self):
        return self.sertifikasi
    
    def get_modular(self):
        return self.modular
    
    def is_modular(self):
        return self.modular
    
    def turn_on(self):
        print("Power supply turned on.")
    
    def turn_off(self):
        print("Power supply turned off.")
    
    def get_info(self):
        self.get_power_info()
        print(f"Daya: {self.daya} W, Sertifikasi: {self.sertifikasi}, Modular: {'Ya' if self.modular else 'Tidak'}")
