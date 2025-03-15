public class PowerDevice {
    private int wattage;
    private String efficiencyRating;
    private int kecepatanBaca;
    private int kecepatanTulis;

    public PowerDevice() {
    }

    public PowerDevice(int wattage, String efficiencyRating, int kecepatanBaca, int kecepatanTulis) {
        this.wattage = wattage;
        this.efficiencyRating = efficiencyRating;
        this.kecepatanBaca = kecepatanBaca;
        this.kecepatanTulis = kecepatanTulis;
    }

    public void setWattage(int wattage) {
        this.wattage = wattage;
    }

    public void setEfficiencyRating(String efficiencyRating) {
        this.efficiencyRating = efficiencyRating;
    }

    public void setKecepatanBaca(int kecepatanBaca) {
        this.kecepatanBaca = kecepatanBaca;
    }

    public void setKecepatanTulis(int kecepatanTulis) {
        this.kecepatanTulis = kecepatanTulis;
    }

    public int getWattage() {
        return wattage;
    }

    public String getEfficiencyRating() {
        return efficiencyRating;
    }

    public int getKecepatanBaca() {
        return kecepatanBaca;
    }

    public int getKecepatanTulis() {
        return kecepatanTulis;
    }

    public void getPowerInfo() {
        System.out.println("Wattage: " + wattage + " W, Efficiency Rating: " + efficiencyRating + ", Kecepatan Baca: " + kecepatanBaca + " MB/s, Kecepatan Tulis: " + kecepatanTulis + " MB/s");
    }
}