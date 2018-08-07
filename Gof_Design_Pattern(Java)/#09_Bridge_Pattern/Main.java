import Classes.LogitechRemoteController;
import Implementation.ITV;
import Implementation.LGTV;
import Implementation.SamsungTV;

public class Main {
    public static void main(String[] args)
    {
        ITV lgtv = new LGTV();
        ITV SSTV = new SamsungTV();
        LogitechRemoteController LGlogitechRemoteController = new LogitechRemoteController(lgtv);
        LogitechRemoteController SamsunglogitechRemoteController = new LogitechRemoteController(SSTV);
        LGlogitechRemoteController.turnON();
        LGlogitechRemoteController.setChannelKeyboard(6);
        LGlogitechRemoteController.turnOFF();
        SamsunglogitechRemoteController.turnON();
        SamsunglogitechRemoteController.setChannelKeyboard(7);
        SamsunglogitechRemoteController.turnOFF();


    }
}
