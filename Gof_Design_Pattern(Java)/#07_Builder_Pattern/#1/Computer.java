public class Computer {

    private String CPU;
    private String RAM;
    private String Storage;

    public Computer(String CPU, String RAM, String storage) {
        super();
        this.CPU = CPU;
        this.RAM = RAM;
        this.Storage = storage;
    }

    public String getCPU() {
        return CPU;
    }

    public void setCPU(String CPU) {
        this.CPU = CPU;
    }

    public String getRAM() {
        return RAM;
    }

    public void setRAM(String RAM) {
        this.RAM = RAM;
    }

    public String getStorage() {
        return Storage;
    }

    public void setStorage(String storage) {
        Storage = storage;
    }

    public String showDeviceInfo()
    {
        return CPU+", "+RAM+", "+Storage;
    }
}
