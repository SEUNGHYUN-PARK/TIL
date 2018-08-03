public class ProcessManager {

    private static ProcessManager instance;
    private ProcessManager()
    {

    }
    public static ProcessManager getInstance()
    {
        if(instance == null)
        {
            System.out.println("인스턴스를 생성합니다.");
            instance  = new ProcessManager();
        }
        return instance;
    }
}
