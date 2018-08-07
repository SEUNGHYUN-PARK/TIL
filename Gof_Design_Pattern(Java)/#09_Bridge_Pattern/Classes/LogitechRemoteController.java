package Classes;

import Implementation.ITV;

public class LogitechRemoteController extends AbstRemoteController{

    public LogitechRemoteController(ITV _itv) {
        super(_itv);
    }
    public void setChannelKeyboard(int channel) {
        setChannel(channel);
    }
}
