#include <iostream>
#include <iomanip>
#include <string>
#include "Komponen.cpp"
#include "CPU.cpp"
#include "RAM.cpp"
#include "HardDrive.cpp"
#include "PowerDevice.cpp"
#include "PowerSupply.cpp"
#include "PowerSupplyGaming.cpp"
#include "Komputer.cpp"
#include "GPU.cpp"

using namespace std;

void displayConfig(const string& type, Komputer& pc) {
    cout << "\n========================================\n";
    cout << "      " << type << " CONFIGURATION";
    cout << "\n========================================\n";
    pc.getSystemInfo();
    cout << "----------------------------------------\n";
}

int main() {
    cout << fixed << setprecision(1); 
    cout << "========================================\n";
    cout << "       PROGRAM SIMULASI KOMPUTER        \n";
    cout << "========================================\n";

    CPU cpu1(8, 3.6, "x86_64", "Intel Core i7", 3500000, "Intel");
    CPU cpu2(12, 4.2, "x86_64", "AMD Ryzen 9", 4200000, "AMD");

    RAM ram1(16, 3200, "DDR4", "Corsair Vengeance", 1200000, "Corsair");
    RAM ram2(32, 3600, "DDR4", "G.Skill Trident Z", 2500000, "G.Skill");

    Harddrive hdd1(1000, "HDD", 150, 120, "Seagate Barracuda", 800000, "Seagate");
    Harddrive ssd1(500, "SSD", 550, 520, "Samsung 970 EVO", 1500000, "Samsung");

    GPU gpu1(8, "GDDR6", "NVIDIA GeForce RTX 3070", 7000000, "NVIDIA");
    GPU gpu2(16, "GDDR6X", "NVIDIA GeForce RTX 3080", 10000000, "NVIDIA");

    PowerSupply* standardPsu = new PowerSupply(650, "80+ Gold", true, 650, "80+ Gold", 0, 0);
    PowerSupplyGaming* gamingPsu = new PowerSupplyGaming(true, true, 850, "80+ Platinum", true, 850, "80+ Platinum", 0, 0);

    Komputer standardPC("Windows 10"), gamingPC("Windows 11");

    standardPC.addCPU(cpu1); standardPC.addRAM(ram1); standardPC.addHardDrive(hdd1); standardPC.addGPU(gpu1); standardPC.setPSU(standardPsu);
    gamingPC.addCPU(cpu2); gamingPC.addRAM(ram2); gamingPC.addHardDrive(ssd1); gamingPC.addGPU(gpu2); gamingPC.setPSU(gamingPsu);

    displayConfig("KOMPUTER STANDAR", standardPC);
    standardPC.bootUp();
    cout << "Menggunakan komputer standar...\n";
    standardPC.shutDown();

    displayConfig("KOMPUTER GAMING", gamingPC);
    gamingPC.bootUp();
    cout << "Menggunakan komputer gaming...\n";

    cout << "\n========================================\n";
    cout << "         DEMONSTRASI FITUR              \n";
    cout << "========================================\n";
    
    cpu2.boostClock();
    ram2.upgrade();
    ssd1.formatDrive();
    
    if (auto* psuPointer = dynamic_cast<PowerSupplyGaming*>(gamingPC.getPSU())) {
        psuPointer->enableOverclocking();
    } else {
        cout << "PSU tidak mendukung overclocking.\n";
    }
    
    gamingPC.shutDown();

    cout << "\n========================================\n";
    cout << "          PROGRAM SELESAI               \n";
    cout << "========================================\n";
    
    return 0;
}
