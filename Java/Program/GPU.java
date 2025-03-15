public class GPU extends Komponen {
    private int memorySize;
    private String memoryType;

    public GPU() {
    }

    public GPU(int memorySize, String memoryType, String nama, float harga, String merk) {
        super(nama, harga, merk);
        this.memorySize = memorySize;
        this.memoryType = memoryType;
    }

    public void setMemorySize(int memorySize) {
        this.memorySize = memorySize;
    }

    public void setMemoryType(String memoryType) {
        this.memoryType = memoryType;
    }

    public int getMemorySize() {
        return memorySize;
    }

    public String getMemoryType() {
        return memoryType;
    }

    @Override
    public void getInfo() {
        super.getInfo();
        System.out.println("Memory Size: " + memorySize + " GB, Memory Type: " + memoryType);
    }
}