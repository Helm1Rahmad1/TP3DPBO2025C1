public class Harddrive extends Komponen {
    private int kapasitas;
    private String tipe;
    private int kecepatanBaca;
    private int kecepatanTulis;

    public Harddrive() {
    }

    public Harddrive(int kapasitas, String tipe, int kecepatanBaca, int kecepatanTulis, String nama, float harga, String merk) {
        super(nama, harga, merk);
        this.kapasitas = kapasitas;
        this.tipe = tipe;
        this.kecepatanBaca = kecepatanBaca;
        this.kecepatanTulis = kecepatanTulis;
    }

    public void setKapasitas(int kapasitas) {
        this.kapasitas = kapasitas;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public void setKecepatanBaca(int kecepatanBaca) {
        this.kecepatanBaca = kecepatanBaca;
    }

    public void setKecepatanTulis(int kecepatanTulis) {
        this.kecepatanTulis = kecepatanTulis;
    }

    public int getKapasitas() {
        return kapasitas;
    }

    public String getTipe() {
        return tipe;
    }

    public int getKecepatanBaca() {
        return kecepatanBaca;
    }

    public int getKecepatanTulis() {
        return kecepatanTulis;
    }

    public void formatDrive() {
        System.out.println("Formatting drive " + getNama() + "...");
        System.out.println("Drive formatted successfully!");
    }

    @Override
    public void getInfo() {
        super.getInfo();
        System.out.println("Kapasitas: " + kapasitas + " GB, Tipe: " + tipe + ", Kecepatan Baca: " + kecepatanBaca + " MB/s, Kecepatan Tulis: " + kecepatanTulis + " MB/s");
    }
}