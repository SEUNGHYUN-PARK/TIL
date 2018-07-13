package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

import java.util.Scanner;
/*
    객체지향 이전의 프로그래밍의 등장까지

    ##개요##
    소스코드 위에서부터 내려오면서 실행 절차적인 방법으로 진행된다는 점에서 편리함을 느꼈으나,
    동일한 로직의 코드가 빈번하게 재사용됨을 느끼자, 함수 또는 메소드를 만듦.
    하지만 메소드, 함수만으로도 불편함을 느낌
    데이터가 많아지고 메소드가 많아짐에 따라 코드의 양이 많아지고 유지보수에 어려움을 겪음
    따라서 등장한 방식이 객체지향 프로그래밍

    ## 자바에서의 메소드선언
    (public/private/protected) (int/String/char/void...) 메소드명([매개변수...])
    {
        메소드 내용
        return (int/String/char)
        void 는 따로 반환형이 없기때문에 그냥 return; 혹은 리턴을 선언해주지않아도된다.
    }

*/

public class HelloJava {
    public static void main(String[] args) {

        System.out.println(oddjudge(10)); // 리턴을 통해 반환된 String이 출력
        System.out.println(sum(3,4)); // 리턴을 통해 반환된 int값이 출력
        hellojava();
    }
    public static String oddjudge(int num)
    {
        String str=new String();
        if(num%2==0)
            str="짝수입니다";
        else
            str="홀수입니다";
        return str;
    }
    public static int sum(int num1,int num2)
    {
        return num1+num2;
    }
    public static void hellojava()
    {
        System.out.println("Hello_Java!");
    }
}
