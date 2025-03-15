from PowerSupply import PowerSupply

class PowerSupplyGaming(PowerSupply):
    def __init__(self, rgb_lighting=False, overclock_support=False, daya=0, sertifikasi="", modular=False, wattage=0, efficiency_rating="", kecepatan_baca=0, kecepatan_tulis=0):
        super().__init__(daya, sertifikasi, modular, wattage, efficiency_rating, kecepatan_baca, kecepatan_tulis)
        self.rgb_lighting = rgb_lighting
        self.overclock_support = overclock_support
    
    def set_rgb_lighting(self, rgb_lighting):
        self.rgb_lighting = rgb_lighting
    
    def set_overclock_support(self, overclock_support):
        self.overclock_support = overclock_support
    
    def get_rgb_lighting(self):
        return self.rgb_lighting
    
    def get_overclock_support(self):
        return self.overclock_support
    
    def is_rgb_lighting(self):
        return self.rgb_lighting
    
    def is_overclock_support(self):
        return self.overclock_support
    
    def enable_overclocking(self):
        if self.overclock_support:
            print("Overclocking enabled on power supply.")
        else:
            print("This power supply does not support overclocking.")
    
    def get_info(self):
        super().get_info()
        print(f"RGB Lighting: {'Ya' if self.rgb_lighting else 'Tidak'}, Overclock Support: {'Ya' if self.overclock_support else 'Tidak'}")
