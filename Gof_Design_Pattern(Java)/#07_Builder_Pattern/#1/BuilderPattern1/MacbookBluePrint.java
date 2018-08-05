package BuilderPattern1;

public class MacbookBluePrint extends BluePrint{

    private Computer computer;

    public MacbookBluePrint()
    {
        computer = new Computer("default","default","default");
    }

    @Override
    public void setCPU() {
        computer.setCPU("i9");
    }

    @Override
    public void setRAM() {
        computer.setRAM("16GB");
    }

    @Override
    public void setStorage() {
        computer.setStorage("512GB");
    }

    @Override
    public Computer getcomputer() {
        return computer;
    }
}
