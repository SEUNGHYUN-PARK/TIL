package Implementation;

public class LGTV implements ITV {

    public LGTV()
    {
        System.out.println("LGTV가 생성되었습니다");
    }
    @Override
    public void tvTURNON() {
        System.out.println("LG TV Turned On");
    }

    @Override
    public void tvTURNOFF() {
        System.out.println("LG TV Turned Off");
    }

    @Override
    public void switchChannel(int _channel) {
        System.out.println("LG TV 체널 변경 완료 - "+_channel);
    }
}
