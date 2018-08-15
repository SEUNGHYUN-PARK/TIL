import ComputerParts.*;

public class Computer {
    private CPU cpu;
    private RAM ram;
    private SSD ssd;

    public void startComputer()
    {
        this.cpu = new CPU();
        this.ram = new RAM();
        this.ssd = new SSD();
        cpu.freeze();
        ram.load(0,ssd.read(1000,1000));
        cpu.jump(0);
        cpu.execute();

    }

}
