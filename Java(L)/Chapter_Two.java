/*
 * 변수 : 단 하나의 값을 저장할 수 있는 공간
 * 변수 선언
 * 변수의 타입과 이름을 함께 선언해줘야 함
 *
 * 명명규칙
 * 대소문자가 구분되며 길이에 제한이 없다.
 * 예약어를 사용해서는 안 됨
 * 숫자로 시작해서는 안 됨
 * 특수문자는 _과 $만 허용
 *
 * 클래스의 이름의 첫글자는 항상 대문자 / 변수와 메서드는 첫글자 항상 소문자
 * 여러 단어로 이루어진 이름은 단어의 첫 글자를 대문자로 함
 * 상수는 모두 대문자로, 여러 단어로 이루어진 경우 _로 구분
 *
 * 변수 타입
 * 기본형 : 논리형 문자형 정수형 실수형
 * 참조형 : 8개의 기본형을 제외한 나머지타입, 객체의 주소를 저장.
 *
 * 논리형 <용도 : 조건식과 논리식 계산에 사용>
 * 1. boolean
 *    크기 : 1바이트
 *    데이터 값의 범위  : true / false
 *    용도 :
 *
 * 문자형 <용도 : 문자를 저장하는데 사용됨, 변수당 하나의 문자만을 저장할 수 있음>
 * 1. char
 *    크기 : 2바이트 <C언어는 1바이트> => C언어는 아스키코드 확장판인 반면 Java는 유니코드
 *    데이터 값의 범위 : 0 ~ 2^16-1(65535)
 *
 *
 * 정수형 <용도 : 정수 값을 저장하는데 사용된다. 주로 사용되는 것이 int,long byte는 이진데이터, short는 C언어와의 호환을 위해서 추가>
 * 1. byte
 *    크기 : 1바이트
 *    데이터 값의 범위 : -2^7~2^7-1
 *
 * 2. short
 *    크기 : 2바이트
 *    데이터 값의 범위 : -2^15~2^15-1
 *
 * 3. int
 *    크기 : 4바이트
 *    데이터 값의 범위 : -2^31-1~2^31-1
 *
 * 4. long
 *    크기 : 8바이트
 *    데이터 값의 범위 : -2^63~2^63-1
 *
 *
 * 실수형 <용도 : 실수값을 저장하는데 사용>
 * 1. float
 *    크기 : 4바이트
 *    데이터 값의 범위 : 1.4e-45~3.4028235E38
 *
 * 2. double
 *    크기 : 8바이트
 *    데이터 값의 범위 : 4.9E-324~1.7976931348623157E308
 */

public class Chapter_Two {

    public static void main(String[] args)
    {
        boolean power = true; // boolean형 변수 선언 및 초기화
        char ch = 'A'; //  char ch = '\u0041'로 바꿔써도 같다 -> 유니코드
        int code = (int)ch; //ch에 저장된 값을 int형으로 변환하여 저장
        int code2 = 65; // int code = 0x0041;
        char ch2 = (char)code2;

        System.out.println(ch);
        System.out.println(code);
        System.out.println(ch2);
        System.out.println(code2);

        char single = '\''; // ' 출력, single = '''와 같이 할 수 없다.
        String dblQuote = "\"Hello\""; // 큰따옴표 출력은 \"로
        String root = "C:\\"; //역슬래시 하나는 두개를 입력해줘야함

        System.out.println(single);
        System.out.println(dblQuote);
        System.out.println(root);

        String a = " "+7; // 한칸을 띄워줘야 공간이 생김
        String b = 7+" ";
        System.out.println(a);
        System.out.println(b); // 기본형과 참조혀의 구별없이 어떤 타입의 변수도 덧셈연산을 수행하면 그 결과는 문자열이됨

        byte by= 127; // 범위를 넘어서 초기화는 컴파일 에러 발생 ex) byte by=128은 에러
        for(int i=by;i<130;i++)
        {
            System.out.println(by++); // 값의 오퍼플로가 생
        }

        float f = 1.23456789f; // float는 f를 붙여줘야한다 안그럼 에러 소수점 7자리까지만 출력 이후는 반올
        double d = 1.23456789; // double은 안붙여도됨
        //float보다 double이 높은 정밀도를 가지고 있다.
        System.out.println(f);
        System.out.println(d);

    }
}
