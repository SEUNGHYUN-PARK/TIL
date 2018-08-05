public class ComputerBuilder {
    private Computer computer;
    private ComputerBuilder()
    {
        computer = new Computer("default","default","default");
    }

    public static ComputerBuilder start()
    {
        return new ComputerBuilder();
    }

    public ComputerBuilder setCPU(String _string)
    {
        computer.setCPU(_string);
        return this;
    }
    public ComputerBuilder setRAM(String _string)
    {
        computer.setRAM(_string);
        return this;
    }
    public ComputerBuilder setStorage(String _string)
    {
        computer.setStorage(_string);
        return this;
    }
    public Computer finish()
    {
        return this.computer;
    }

}
