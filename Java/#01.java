package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

public class HelloJava {

    /*
        변수 : 모든것을 담을 수 있는 요술주머니
        즉 Java에 존재하는 모든 언어적 요소(숫자,문자,문자열,클래스...)를 담을 수 있는 존재

        프로젝트생성시 클래스의 이름은 대/소문자구분없다.
        클래스생성시 클래스의 이름은 항상 대문자로 시작한다

        기본자료형 : Java언어에 이미 존재하고 있는 데이터 타입, 주로 간단한 데이터들 (int, double, boolean, char 등등...) => 전부 소문자로 시작
           # 메모리에 직접 할당이 된다.
           # char(문자형) 은 크기가 2byte이다. *** C/C++은 char의 크기가 1byte 인거를 유의 ***
        객체자료형 : 여러가지 데이터들이 모여 있는 복잡한 데이터, 기본 자료형에 비해 크기가 크다 (String,System,ArrayList 등등...) => 전부 대문자로 시작
           # 메모리에 직접 할당이 되지않고 객체자료형 변수를 참고하고있는 주소값이 메모리에 할당이 된다.

        형변환
        자바에서는 자료형이 굉장히 엄격하다 따라서 자료형이 일치하지 않을 경우 명시적인 형변환을 해줘야한다.
        두 자료형의 변수 중,
        크기가 작은 자료형의 데이터를 크기가 큰 자료형의 데이터에 복사할 경우, 에러가 뜨지않는다.
        하지만 크기가 큰 자료형의 데이터를 크기가 작은 데이터에 복사할 경우, 에러가 뜬다. => 따라서 명시적인 형변환을 통해 데이터를 변환해준다
    */

    public static void go(int _a)
    {
        System.out.println("helloworld!");
//        sout을 통해서 해당구문완성
    }
    public static void main(String[] args) {
        //psvm을 통해 자동완성

        int i = 10;
        int j = 20;
        int h = 30;

        char c = 'A';
        char d = 'a';
        char e = 'B';

        char q = 'C';
        int w = 10;
        double a = 3.14159265;
        boolean b = true;

        int k=5;
        double l =10.9865434d;
        int m = (int)l; // 에러가 뜨고
        double n = k; // 에러가 뜨지않는다.
        //다만 넣고자하는 변수의 크기가 맞춰 강제로형변환을 진행하면 데이터입력이 가능해짐

        System.out.println(i);
        System.out.println(j);
        System.out.println(h);

        System.out.println(c);
        System.out.println(d);
        System.out.println(e);

        System.out.println(q);
        System.out.println(w);
        System.out.println(a);
        System.out.println(b);

        System.out.println(m); // 10만 출력되고
        System.out.println(n); // 5.0이 출력된다.

        go(123);

        /*
            for (String arg : args) {

            } //iter를 통해 for-each 구문 완성

            for (int k = 0; k < ; k++) {

            } // fori를 통한 구문 자동완성

            control+shift+/를 통해 구역 주석처리
        */
    }

    /*
    추가적으로 알아두면 좋을 IntelliJ 단축키 (맥기준)
    control + Shift + /  : *//*....*//* 주석처리
    command + / : //주석처리
    control + Space : 기본적인 자동 완성 기능
    Ctrl + Shift + Backspace : 마지막으로 코드 수정했던 곳으로 이동
    Ctrl + P : 메소드의 파라미터 정보 보여줌, Overload 된 메소드의 정보 까지 한눈에 보여줌
    control + D : 디버그
    control + R : 런
    sout : eclipse의 sysout 기능-> System.out.println 자동완성
    psvm : public static void main(String args[]) 자동완성
    iter : for-each 구문생성
    fori: for문 생성
    */
}
