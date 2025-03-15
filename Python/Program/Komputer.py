from CPU import CPU
from RAM import RAM
from Harddrive import Harddrive
from PowerSupply import PowerSupply
from GPU import GPU

class Komputer:
    def __init__(self, os=""):
        self.cpus = []
        self.rams = []
        self.harddrives = []
        self.gpus = []
        self.psu = None
        self.os = os
    
    def set_psu(self, p):
        self.psu = p
    
    def get_psu(self):
        return self.psu
    
    def add_cpu(self, c):
        self.cpus.append(c)
    
    def add_ram(self, r):
        self.rams.append(r)
    
    def add_hard_drive(self, h):
        self.harddrives.append(h)
    
    def add_gpu(self, g):
        self.gpus.append(g)
    
    def boot_up(self):
        print(f"\n[ Booting {self.os} ]")
        if not self.psu:
            print("No PSU installed!")
            return
        self.psu.turn_on()
        print("System Ready!")
    
    def shut_down(self):
        print(f"\n[ Shutting Down {self.os} ]")
        if self.psu:
            self.psu.turn_off()
        print("System Off!")
    
    def get_system_info(self):
        print("\n==== CONFIGURATION ====")
        print(f"OS: {self.os}")
        for i in range(len(self.cpus)):
            print("CPU: ", end="")
            self.cpus[i].get_info()
        for i in range(len(self.gpus)):
            print("GPU: ", end="")
            self.gpus[i].get_info()
        for i in range(len(self.rams)):
            print("RAM: ", end="")
            self.rams[i].get_info()
        for i in range(len(self.harddrives)):
            print("HDD: ", end="")
            self.harddrives[i].get_info()
        print(f"PSU: {'Installed' if self.psu else 'Not Installed'}")
        print("=======================")
