public class PowerSupplyGaming extends PowerSupply {
    private boolean RGBLighting;
    private boolean overclockSupport;

    public PowerSupplyGaming() {
    }

    public PowerSupplyGaming(boolean RGBLighting, boolean overclockSupport, int daya, String sertifikasi, boolean modular, int wattage, String efficiencyRating, int kecepatanBaca, int kecepatanTulis) {
        super(daya, sertifikasi, modular, wattage, efficiencyRating, kecepatanBaca, kecepatanTulis);
        this.RGBLighting = RGBLighting;
        this.overclockSupport = overclockSupport;
    }

    public void setRGBLighting(boolean RGBLighting) {
        this.RGBLighting = RGBLighting;
    }

    public void setOverclockSupport(boolean overclockSupport) {
        this.overclockSupport = overclockSupport;
    }

    public boolean isRGBLighting() {
        return RGBLighting;
    }

    public boolean isOverclockSupport() {
        return overclockSupport;
    }

    public void enableOverclocking() {
        if (overclockSupport) {
            System.out.println("Overclocking enabled on power supply.");
        } else {
            System.out.println("This power supply does not support overclocking.");
        }
    }

    public void getInfo() {
        super.getInfo();
        System.out.println("RGB Lighting: " + (RGBLighting ? "Ya" : "Tidak") + ", Overclock Support: " + (overclockSupport ? "Ya" : "Tidak"));
    }
}