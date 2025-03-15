public class PowerSupply extends PowerDevice {
    private int daya;
    private String sertifikasi;
    private boolean modular;

    public PowerSupply() {
    }

    public PowerSupply(int daya, String sertifikasi, boolean modular, int wattage, String efficiencyRating, int kecepatanBaca, int kecepatanTulis) {
        super(wattage, efficiencyRating, kecepatanBaca, kecepatanTulis);
        this.daya = daya;
        this.sertifikasi = sertifikasi;
        this.modular = modular;
    }

    public void setDaya(int daya) {
        this.daya = daya;
    }

    public void setSertifikasi(String sertifikasi) {
        this.sertifikasi = sertifikasi;
    }

    public void setModular(boolean modular) {
        this.modular = modular;
    }

    public int getDaya() {
        return daya;
    }

    public String getSertifikasi() {
        return sertifikasi;
    }

    public boolean isModular() {
        return modular;
    }

    public void turnOn() {
        System.out.println("Power supply turned on.");
    }

    public void turnOff() {
        System.out.println("Power supply turned off.");
    }

    public void getInfo() {
        getPowerInfo();
        System.out.println("Daya: " + daya + " W, Sertifikasi: " + sertifikasi + ", Modular: " + (modular ? "Ya" : "Tidak"));
    }
}