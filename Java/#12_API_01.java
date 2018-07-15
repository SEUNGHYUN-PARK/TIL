import java.util.Calendar;

public class Api_I {
    /*
        Java 다른 언어에 비해서 접하기 쉽고, 배우기 쉽다는 장점이 있음 -> 개발자들이 편리하게 이용할 수 있는 풍부한 클래스들이많기때문
        이러한 클래스들을 이용해, 개발자들은 깊은 지식이없이, 그냥 사용만 하면되고, 이러한 기능들을 정의해둔 클래스들을 API라고 칭함
        그냥 API란 누군가가 만들어놓은 기능들이라 생각하면 편함

    */

    public static void main(String[] args) {


        /*
        String의 이해
        스트링은 분명 객체 자료형임
        따라서 객체 자료형 선언의 원칙인 new 를 활용한 객체 생성을 해줘야 사용이 가능하다.
        하지만 객체자료형의 고유 특징과는 다르게 String 만큼은 초기화를 하고 진행해도 된다.
        물론 객체자료형 원칙에 맞춰 객체 생성후 진행하는것도 된다.
        */

        System.out.println("=== String의 이해 ===");
        String str = "Hello_world";
        String allostr = new String("Hello_World");
        System.out.println(str);
        System.out.println(allostr);
        System.out.println();

        /*
            # String 클래스의 여러가지 형태 메소드

            concat : 문자열 연결
            substring : 문자열 자르기
            length : 문자열 길이
            toUpperCase : 대문자로 만들기
            toLowerCase : 소문자로 만들기
            charAt : 특정위치의 글자 찾기
            indexOf : 특정문자열 위치
            equals : 문자열 비교
            trim : 문자열 공백제거
            replace : 특정문자 변경
            replaceAll : 특정문자열 변경
        */

        System.out.println("=== String 클래스의 여러가지 형태 메소드 ===");
        String str1 = "abcdefg";
        String str2 = "HIJKLMN";
        String str3 = "opqrstu";
        String str4 = " abc def ghi ";

        System.out.println("String 형태의 두 문자열을 합치는 메소드(Concat())결과 : " + str1.concat(str2));
        System.out.println("n번쨰 문자를 기준으로 부분문자열 생성(substring)의 결과 : " + str1.substring(3) );
        System.out.println("문자열의 크기를 구하는 메소드(length)의 결과 : "+ str.length()); // 배열은 length을 이
        System.out.println("문자열을 전부 대문자로 바꾸는 메소드(toUpperCase()) : "+ str1.toUpperCase());
        System.out.println("문자열을 전부 소문자로 바꾸는 메소드(toLowerCase()) : "+ str2.toLowerCase());
        System.out.println("문자열에서 특정인덱스의 문자를 찾는 메소 드 (charAt()) : "+ str1.charAt(4));
        System.out.println("문자열에서 특정문자열의 위치를 찾는 메소드 (indexOf()) : "+ str1.indexOf("cdf")); // 찾았을 땐 인덱스 범위내의 숫자를, 못찾을 땐 -1출력
        System.out.println("두 문자열이 같은지 같지않은지 비교하기위한 메소드 (equals()) : "+ str1.equals(str3)); // 같으면 true 아니면 false 출력
        System.out.println("문자열의 전체를 기준으로 좌우여백을 잘라주는 trim() : " + str4.trim());
        System.out.println("한 문자열의 특정 문자만 바꾸는 메소드 replace() : " + str1.replace('a','Z'));
        System.out.println("한 문자열 내 특정 문자열을 바꾸는 메소드 replaceAll() : "+ str2.replaceAll("abcd","ZZZZZZZ"));
        System.out.println(str1);
        System.out.println();

        /*
            String의 문제점
            String
            String는 메모리를 과소비 한다
            String 객체의 경우 처음 초기화 된 데이터에 변화가 생기면 기존 것을 재활용 하기보다는 새것을 찾음
            따라서 String의 대안으로 StringBuffer StringBuilder 만듦
        */

        System.out.println("=== String의 문제점 & StringBuilder, StringBuffer ===");
        String sStr = "Hello string!";
        StringBuilder stringBuilder = new StringBuilder("Hello_stringbuilder!");
        System.out.println(stringBuilder);
        stringBuilder.append(" & Hello_Java!");
        System.out.println(stringBuilder);
        stringBuilder.insert(4,"ooo"); // 스트링빌더 내의 문자열 중 offset index를 기준으로 "ooo"삽입)
        System.out.println(stringBuilder);
        stringBuilder.delete(4,7); //스트링빌더 내의 문자열중 패러미터로 넘어간 영역의 문자삭제
        System.out.println(stringBuilder);
        stringBuilder.deleteCharAt(10); // 특정문자 하나만을 지우는 메소드
        System.out.println(stringBuilder);
        System.out.println();

        /*
            날짜와 시간을 표현할 때 많이 쓰이는 Calendar 클래스
        */

        System.out.println("=== 날짜API ===");
        Calendar calendar = Calendar.getInstance(); //얘는 인스턴스로 바로 받아오네
        System.out.println(calendar.get(Calendar.YEAR));
        System.out.println(calendar.get(Calendar.MONTH)+1); // 얘는 숫자 1을 더해줘야함
        System.out.println(calendar.get(Calendar.DAY_OF_MONTH)); // 오늘의 날짜
        System.out.println(calendar.get(Calendar.HOUR_OF_DAY)); // 오전오후 구분없이 0~23까지의 수
        System.out.println(calendar.get(Calendar.MINUTE)); // 현재 시간
        System.out.println(calendar.get(Calendar.SECOND)); // 현재 초
        System.out.println();

        /*
            개발 테스트에 많이쓰이는 System.currentTiemMills()
            현재 시간을 1/1000초 단위로 표시
        */
        System.out.println(System.currentTimeMillis());
        String strs = "A";
        long startNum = System.currentTimeMillis();

        for (int i = 0; i <50000 ; i++) {
            strs=strs+"A";
        }
        long endNum = System.currentTimeMillis();
        System.out.println(endNum-startNum);
    }
}
