public class CPU extends Komponen {
    private int coreCount;
    private float clockSpeed;
    private String architecture;

    public CPU() {
    }

    public CPU(int coreCount, float clockSpeed, String architecture, String nama, float harga, String merk) {
        super(nama, harga, merk);
        this.coreCount = coreCount;
        this.clockSpeed = clockSpeed;
        this.architecture = architecture;
    }

    public void setCoreCount(int coreCount) {
        this.coreCount = coreCount;
    }

    public void setClockSpeed(float clockSpeed) {
        this.clockSpeed = clockSpeed;
    }

    public void setArchitecture(String architecture) {
        this.architecture = architecture;
    }

    public int getCoreCount() {
        return coreCount;
    }

    public float getClockSpeed() {
        return clockSpeed;
    }

    public String getArchitecture() {
        return architecture;
    }

    public void boostClock() {
        clockSpeed += 0.2;
        System.out.println("CPU overclocked to " + clockSpeed + " GHz");
    }

    @Override
    public void getInfo() {
        super.getInfo();
        System.out.println("Core Count: " + coreCount + ", Clock Speed: " + clockSpeed + " GHz, Architecture: " + architecture);
    }
}