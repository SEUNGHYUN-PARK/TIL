import java.util.Random;
import java.util.Scanner;

public class Api_II {
    public static void main(String[] args) {

        /*
            Random 클래스
            개발을 할 때 가장 많이 쓰이는 기능중에 하나 : 랜덤수 구하기
            예전에는  Math.random()을 자주이용했으나, 요즘은 Random 클래스활용함
        */

        System.out.println("=== Random클래스와 Math.random() ===");
        double d = Math.random();
        System.out.println((int)(d*100)); //0부터 뒤에 곱하는 수까지의 수중 랜덤으로 하나의 수 출력 0~100
        System.out.println((int)(d*10)); //0부터 뒤에 곱하는 수까지의 수중 랜덤으로 하나의 수 출력 0~10

        Random random = new Random();
        System.out.println(random.nextInt(100)); //bound 매개변수로 들어가는 수 중 랜덤으로 한 수 출력
        System.out.println();

        /*
            Scanner 클래스
            키보드에서 타이핑하는 문자열 또는 입출력 프로그래밍에서 문자열을 읽어올 때 사용
        */

        System.out.println("=== Scanner클래스 ===");
        Scanner scanner = new Scanner(System.in);
        String sc_str_next = new String(scanner.nextLine()); // 개행문자를 기준으로 문자열을 받음(한단어부터 한문장까지) 이미 콘솔상에는 한줄이 넘어가고 그 칸이비어있다.
        System.out.println(sc_str_next); // 이 위치를 이렇게 바꿔주면 개행문자의 간섭이 없기때문에 가능하다
        int sc_i = scanner.nextInt(); // 숫자
        System.out.println(sc_i);
        String sc_str = new String(scanner.next()); // 띄어쓰기 혹은 개행문자 전까지 한 어절의 문자열만 입력가능(오로지 한단어)
        System.out.println(sc_str);

        /*
            Wrapper 클래스의 이해
            기초데이터를 객체데이터로 변환

            byte -> Byte
            short -> Short
            int -> Integer // 이건 외워야해
            long -> Long
            double -> Double
            float -> Float
            boolean -> Boolean
            char -> Character // 이것두 외우장
        */

        int i=0;
        Integer integer = new Integer(5);
        System.out.println(i);
        System.out.println(integer);

        /*
            String to int
            Integer.parseInt(String) 를 이용하자
        */

        String num = "12345";
        System.out.println(Integer.parseInt(num));
        int add = 5;
        add += Integer.parseInt(num);
        System.out.println(add);
    }
}
