import java.util.StringTokenizer;

public class Api_III {
    public static void main(String[] args) throws InterruptedException {

        /*
            TimerTask 클래스
        */

        TimerEx timerEx = new TimerEx();

        /*
            StringTokenizer 클래스
        */

        String str1 = "오늘의 날씨는 개덥고 빡침이 몰려오고 있습니다.";
        String str2 = "2018/07/15";

        System.out.println(str1);
        System.out.println(str2);

        StringTokenizer stringTokenizer = new StringTokenizer(str1);
        StringTokenizer stringTokenizer2 = new StringTokenizer(str2,"/");

        System.out.println(stringTokenizer.countTokens());
        System.out.println(stringTokenizer2.countTokens());

        while(stringTokenizer.hasMoreTokens())
        {
            System.out.println(stringTokenizer.nextToken());
        }
        while(stringTokenizer2.hasMoreTokens())
        {
            System.out.println(stringTokenizer2.nextToken());
        }
    }
}
