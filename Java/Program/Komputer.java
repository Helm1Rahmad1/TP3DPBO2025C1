import java.util.ArrayList;
import java.util.List;

public class Komputer {
    private List<CPU> cpus = new ArrayList<>();
    private List<RAM> rams = new ArrayList<>();
    private List<Harddrive> harddrives = new ArrayList<>();
    private List<GPU> gpus = new ArrayList<>();
    private PowerSupply psu;
    private String os;

    public Komputer(String os) {
        this.os = os;
    }

    public void setPSU(PowerSupply psu) {
        this.psu = psu;
    }

    public PowerSupply getPSU() {
        return psu;
    }

    public void addCPU(CPU cpu) {
        cpus.add(cpu);
    }

    public void addRAM(RAM ram) {
        rams.add(ram);
    }

    public void addHardDrive(Harddrive harddrive) {
        harddrives.add(harddrive);
    }

    public void addGPU(GPU gpu) {
        gpus.add(gpu);
    }

    public void bootUp() {
        System.out.println("\n[ Booting " + os + " ]");
        if (psu == null) {
            System.out.println("No PSU installed!");
            return;
        }
        psu.turnOn();
        System.out.println("System Ready!");
    }

    public void shutDown() {
        System.out.println("\n[ Shutting Down " + os + " ]");
        if (psu != null) {
            psu.turnOff();
        }
        System.out.println("System Off!");
    }

    public void getSystemInfo() {
        System.out.println("\n==== CONFIGURATION ====");
        System.out.println("OS: " + os);
        for (CPU cpu : cpus) {
            System.out.print("CPU: ");
            cpu.getInfo();
        }
        for (GPU gpu : gpus) {
            System.out.print("GPU: ");
            gpu.getInfo();
        }
        for (RAM ram : rams) {
            System.out.print("RAM: ");
            ram.getInfo();
        }
        for (Harddrive harddrive : harddrives) {
            System.out.print("HDD: ");
            harddrive.getInfo();
        }
        System.out.println("PSU: " + (psu != null ? "Installed" : "Not Installed"));
        System.out.println("=======================");
    }
}