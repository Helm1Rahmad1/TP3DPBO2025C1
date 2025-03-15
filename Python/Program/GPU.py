from Komponen import Komponen

class GPU(Komponen):
    def __init__(self, memory_size=0, memory_type="", nama="", harga=0, merk=""):
        super().__init__(nama, harga, merk)
        self.memory_size = memory_size
        self.memory_type = memory_type
    
    def set_memory_size(self, memory_size):
        self.memory_size = memory_size
    
    def set_memory_type(self, memory_type):
        self.memory_type = memory_type
    
    def get_memory_size(self):
        return self.memory_size
    
    def get_memory_type(self):
        return self.memory_type
    
    def get_info(self):
        super().get_info()
        print(f"Memory Size: {self.memory_size} GB, Memory Type: {self.memory_type}")





