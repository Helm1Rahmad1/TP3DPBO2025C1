public class RAM extends Komponen {
    private int kapasitas;
    private int kecepatan;
    private String jenis;

    public RAM() {
    }

    public RAM(int kapasitas, int kecepatan, String jenis, String nama, float harga, String merk) {
        super(nama, harga, merk);
        this.kapasitas = kapasitas;
        this.kecepatan = kecepatan;
        this.jenis = jenis;
    }

    public void setKapasitas(int kapasitas) {
        this.kapasitas = kapasitas;
    }

    public void setKecepatan(int kecepatan) {
        this.kecepatan = kecepatan;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    public int getKapasitas() {
        return kapasitas;
    }

    public int getKecepatan() {
        return kecepatan;
    }

    public String getJenis() {
        return jenis;
    }

    public void upgrade() {
        kapasitas *= 2;
        System.out.println("RAM upgraded to " + kapasitas + " GB");
    }

    @Override
    public void getInfo() {
        super.getInfo();
        System.out.println("Kapasitas: " + kapasitas + " GB, Kecepatan: " + kecepatan + " MHz, Jenis: " + jenis);
    }
}