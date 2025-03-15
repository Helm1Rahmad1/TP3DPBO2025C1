public class Main {
    public static void main(String[] args) {
        System.out.println("========================================");
        System.out.println("       PROGRAM SIMULASI KOMPUTER        ");
        System.out.println("========================================");

        CPU cpu1 = new CPU(8, 3.6f, "x86_64", "Intel Core i7", 3500000, "Intel");
        CPU cpu2 = new CPU(12, 4.2f, "x86_64", "AMD Ryzen 9", 4200000, "AMD");
        RAM ram1 = new RAM(16, 3200, "DDR4", "Corsair Vengeance", 1200000, "Corsair");
        RAM ram2 = new RAM(32, 3600, "DDR4", "G.Skill Trident Z", 2500000, "G.Skill");
        Harddrive hdd1 = new Harddrive(1000, "HDD", 150, 120, "Seagate Barracuda", 800000, "Seagate");
        Harddrive ssd1 = new Harddrive(500, "SSD", 550, 520, "Samsung 970 EVO", 1500000, "Samsung");
        GPU gpu1 = new GPU(8, "GDDR6", "NVIDIA GeForce RTX 3070", 7000000, "NVIDIA");
        GPU gpu2 = new GPU(16, "GDDR6X", "NVIDIA GeForce RTX 3080", 10000000, "NVIDIA");
        PowerSupply standardPsu = new PowerSupply(650, "80+ Gold", true, 650, "80+ Gold", 0, 0);
        PowerSupplyGaming gamingPsu = new PowerSupplyGaming(true, true, 850, "80+ Platinum", true, 850, "80+ Platinum", 0, 0);

        Komputer standardPC = new Komputer("Windows 10");
        Komputer gamingPC = new Komputer("Windows 11");

        standardPC.addCPU(cpu1);
        standardPC.addRAM(ram1);
        standardPC.addHardDrive(hdd1);
        standardPC.addGPU(gpu1);
        standardPC.setPSU(standardPsu);

        gamingPC.addCPU(cpu2);
        gamingPC.addRAM(ram2);
        gamingPC.addHardDrive(ssd1);
        gamingPC.addGPU(gpu2);
        gamingPC.setPSU(gamingPsu);

        displayConfig("KOMPUTER STANDAR", standardPC);
        standardPC.bootUp();
        System.out.println("Menggunakan komputer standar...");
        standardPC.shutDown();

        displayConfig("KOMPUTER GAMING", gamingPC);
        gamingPC.bootUp();
        System.out.println("Menggunakan komputer gaming...");

        System.out.println("\n========================================");
        System.out.println("         DEMONSTRASI FITUR              ");
        System.out.println("========================================");

        cpu2.boostClock();
        ram2.upgrade();
        ssd1.formatDrive();

        if (gamingPC.getPSU() instanceof PowerSupplyGaming) {
            ((PowerSupplyGaming) gamingPC.getPSU()).enableOverclocking();
        } else {
            System.out.println("PSU tidak mendukung overclocking.");
        }

        gamingPC.shutDown();

        System.out.println("\n========================================");
        System.out.println("          PROGRAM SELESAI               ");
        System.out.println("========================================");
    }

    private static void displayConfig(String type, Komputer pc) {
        System.out.println("\n========================================");
        System.out.println("      " + type + " CONFIGURATION");
        System.out.println("========================================");
        pc.getSystemInfo();
        System.out.println("----------------------------------------");
    }
}