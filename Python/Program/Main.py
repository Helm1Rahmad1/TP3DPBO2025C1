import sys
from Komponen import Komponen
from CPU import CPU
from RAM import RAM
from Harddrive import Harddrive
from PowerDevice import PowerDevice
from PowerSupply import PowerSupply
from PowerSupplyGaming import PowerSupplyGaming
from Komputer import Komputer
from GPU import GPU

def display_config(type_str, pc):
    print("\n========================================")
    print(f"      {type_str} CONFIGURATION")
    print("========================================")
    pc.get_system_info()
    print("----------------------------------------")

def main():
    print("========================================")
    print("       PROGRAM SIMULASI KOMPUTER        ")
    print("========================================")
    
    cpu1 = CPU(8, 3.6, "x86_64", "Intel Core i7", 3500000, "Intel")
    cpu2 = CPU(12, 4.2, "x86_64", "AMD Ryzen 9", 4200000, "AMD")
    ram1 = RAM(16, 3200, "DDR4", "Corsair Vengeance", 1200000, "Corsair")
    ram2 = RAM(32, 3600, "DDR4", "G.Skill Trident Z", 2500000, "G.Skill")
    hdd1 = Harddrive(1000, "HDD", 150, 120, "Seagate Barracuda", 800000, "Seagate")
    ssd1 = Harddrive(500, "SSD", 550, 520, "Samsung 970 EVO", 1500000, "Samsung")
    gpu1 = GPU(8, "GDDR6", "NVIDIA GeForce RTX 3070", 7000000, "NVIDIA")
    gpu2 = GPU(16, "GDDR6X", "NVIDIA GeForce RTX 3080", 10000000, "NVIDIA")
    standard_psu = PowerSupply(650, "80+ Gold", True, 650, "80+ Gold", 0, 0)
    gaming_psu = PowerSupplyGaming(True, True, 850, "80+ Platinum", True, 850, "80+ Platinum", 0, 0)
    
    standard_pc = Komputer("Windows 10")
    gaming_pc = Komputer("Windows 11")
    
    standard_pc.add_cpu(cpu1)
    standard_pc.add_ram(ram1)
    standard_pc.add_hard_drive(hdd1)
    standard_pc.add_gpu(gpu1)
    standard_pc.set_psu(standard_psu)
    
    gaming_pc.add_cpu(cpu2)
    gaming_pc.add_ram(ram2)
    gaming_pc.add_hard_drive(ssd1)
    gaming_pc.add_gpu(gpu2)
    gaming_pc.set_psu(gaming_psu)
    
    display_config("KOMPUTER STANDAR", standard_pc)
    standard_pc.boot_up()
    print("Menggunakan komputer standar...")
    standard_pc.shut_down()
    
    display_config("KOMPUTER GAMING", gaming_pc)
    gaming_pc.boot_up()
    print("Menggunakan komputer gaming...")
    
    print("\n========================================")
    print("         DEMONSTRASI FITUR              ")
    print("========================================")
    
    cpu2.boost_clock()
    ram2.upgrade()
    ssd1.format_drive()
    
    if isinstance(gaming_pc.get_psu(), PowerSupplyGaming):
        gaming_pc.get_psu().enable_overclocking()
    else:
        print("PSU tidak mendukung overclocking.")
    
    gaming_pc.shut_down()
    
    print("\n========================================")
    print("          PROGRAM SELESAI               ")
    print("========================================")

if __name__ == "__main__":
    main()