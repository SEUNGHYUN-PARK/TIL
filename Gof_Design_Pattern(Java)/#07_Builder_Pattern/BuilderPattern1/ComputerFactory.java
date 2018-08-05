package BuilderPattern1;

public class ComputerFactory {

    private BluePrint bluePrint;

    public void setBluePrint(BluePrint _blueprint)
    {
        bluePrint=_blueprint;
    }
    public void make()
    {
        bluePrint.setCPU();
        bluePrint.setRAM();
        bluePrint.setStorage();
    }
    public Computer getComputer()
    {
        return bluePrint.getcomputer();
    }
}
