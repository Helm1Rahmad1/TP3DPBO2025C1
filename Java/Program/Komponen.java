public class Komponen {
    private String nama;
    private float harga;
    private String merk;

    public Komponen() {
    }

    public Komponen(String nama, float harga, String merk) {
        this.nama = nama;
        this.harga = harga;
        this.merk = merk;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setHarga(float harga) {
        this.harga = harga;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public String getNama() {
        return nama;
    }

    public float getHarga() {
        return harga;
    }

    public String getMerk() {
        return merk;
    }

    public void getInfo() {
        System.out.println("Nama: " + nama + ", Harga: " + harga + ", Merk: " + merk);
    }
}