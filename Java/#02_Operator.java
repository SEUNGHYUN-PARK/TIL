package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

public class HelloJava {

    /*
        연산자의 정의
        일정한 규칙을 가지고 계산하는 것, 우리가 일상생활에서 사용하고 있는 덧셈 뺼셈 곱셈 나눗셈을 비롯하여
        프로그램에서는 자동증감,동등비교,비트연산등 많은 연산자가 있다
    */

    public static void main(String[] args) {
        //자바에서는 시작 메소드는 main 메소드에서 시작한다
        int i = 10;
        int j = 3;
        int h = 5;

        System.out.println("=== 산술 연산자 ===");
        System.out.println("덧셈 : "+(i+j)); // 괄호를 안치면 103이 나옴 주의할것, 정답 : 13
        System.out.println("뺄셈 : "+(i-j)); // 괄호를 안치면 에러 발생, 정답 : 7
        System.out.println("곱셈 : "+(i*j)); // 정답 30
        System.out.println("나눗셈 : "+(i/j)); // 3
        System.out.println("나머지 : "+(i%j)); // 1
        System.out.println("연산결과 : "+(i+j)+" "+(i-j)+" "+(i*j)+" "+(i/j)+" "+(i%j));
        // 이런식으로 연결해서 쓸 수 있음, 다만 구분의 용이함을 위해 중간에 " "를 넣는것이 좋다

        System.out.println();// 없으면 단순개행

        System.out.println("=== 자동증감 연산자 ===");
        System.out.println(i);
        i++; //i = i+1;
        System.out.println(i);
        ++i;
        System.out.println(i);
        --i; // i= i-1;
        System.out.println(i);
        i--;
        System.out.println(i);
        System.out.println(i++);
        System.out.println(++i);
        System.out.println(i--);
        System.out.println(--i);
        //++ 혹은 --연산자가 변수 앞에 붙으면 먼저 연산처리를한후 다음라인
        // ++ 혹은 --연산자가 변수 뒤에 붙으면 다음라인으로 넘어가고 나서 연산처리

        System.out.println();

        System.out.println("=== 논리 연산자 ===");
        //&&은 둘다 true 일때 true
        //||은 한쪽만 true 일때 true
        System.out.println("i>j && i>h 's result : "+ (i>j&&i>h));
        System.out.println("i>j && i<h 's result : "+ (i>j&&i<h));
        System.out.println("i>j || i<h 's result : "+ (i>j||i<h));
        System.out.println("i>j || i>h 's result : "+ (i>j||i>h));

        System.out.println();

        System.out.println("=== 삼항 연산자 ===");
        System.out.println("h!=5가 참이면 1, 거짓이면 2 : "+ (h!=5?1:2));
        // h==5인데 h!=5라 했고 이는 거짓 따라서 2를 반환

        System.out.println();

        System.out.println("=== 할당 연산자 ===");
        System.out.println(i);
        i=10000;
        System.out.println(i); // 10000
        i=h;
        System.out.println(i); // 5

        System.out.println();

        System.out.println("=== 줄여쓰는 연산자 ===");
        System.out.println(i+=5);
        System.out.println(i-=5);
        System.out.println(i*=5);
        System.out.println(i/=5);
        System.out.println(i%=5);

    }
}
