import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        //쿠키런 만들어보기
        //그냥 용감한 쿠키 만들기
        Cookie bravecookie = new BraveCookie();

        //우유를 얹은 용감한 쿠키만들기
        Cookie milkbravecookie = new MilkTopping(bravecookie);

        //그위에 초콜릿을 얹은 용감한 쿠키만들기
        Cookie chocolateMilkBraveCookie = new ChocolateTopping(milkbravecookie);

        //그 위에 우유를 한번 더 넣은 용감한 쿠키만들기
        Cookie DoubleChocolateMilkBraveCookie = new MilkTopping(chocolateMilkBraveCookie);

        System.out.println(DoubleChocolateMilkBraveCookie.getName());

        //소다 쿠키만들기
        Cookie SodaCookie = new Cookie()
        {
            @Override
            public String getName() {
                return "소다쿠키";
            }
        };
        //초콜릿을 두번 넣은 소다쿠키 만들기

        SodaCookie = new ChocolateTopping(new ChocolateTopping(SodaCookie));

        System.out.println(SodaCookie.getName());

        //데커레이터 활용 예
        //BufferedReader br = new BufferedReader(new FileReader(new File("txt.txt")));
        //유연하게 기능확장을 할 수 있지만, 대신 각각 데커레이터 클래스들이 어떤 기능을 수행하는지 알고 있어야 하고 자잘한 클래스들이 많이 생기는것이 단점
    }
}
