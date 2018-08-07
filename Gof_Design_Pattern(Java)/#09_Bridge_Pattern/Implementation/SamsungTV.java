package Implementation;

public class SamsungTV implements ITV {
    public SamsungTV() {
        System.out.println("Samsung TV가 생성되었습니다");
    }

    @Override
    public void tvTURNON() {
        System.out.println("Samsung TV Turned On");
    }

    @Override
    public void tvTURNOFF() {
        System.out.println("Samsung TV Turned Off");
    }

    @Override
    public void switchChannel(int _channel) {
        System.out.println("Samsung TV 체널 변경 완료 - "+_channel);
    }
}
