from Komponen import Komponen

class CPU(Komponen):
    def __init__(self, core_count=0, clock_speed=0, architecture="", nama="", harga=0, merk=""):
        super().__init__(nama, harga, merk)
        self.core_count = core_count
        self.clock_speed = clock_speed
        self.architecture = architecture
    
    def set_core_count(self, core_count):
        self.core_count = core_count
    
    def set_clock_speed(self, clock_speed):
        self.clock_speed = clock_speed
    
    def set_architecture(self, architecture):
        self.architecture = architecture
    
    def get_core_count(self):
        return self.core_count
    
    def get_clock_speed(self):
        return self.clock_speed
    
    def get_architecture(self):
        return self.architecture
    
    def boost_clock(self):
        self.clock_speed += 0.2
        print(f"CPU overclocked to {self.clock_speed} GHz")
    
    def get_info(self):
        super().get_info()
        print(f"Core Count: {self.core_count}, Clock Speed: {self.clock_speed} GHz, Architecture: {self.architecture}")
