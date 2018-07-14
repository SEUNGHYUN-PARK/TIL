package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

import java.util.Scanner;

/*
   static
    # static의 이해
    - 두글자로 표현하면 공유!
      객체가 생성되기전에, 클래스 내부의 데이터를 공유하는것
      클래스에서 자원의 토탈값을 정하고 그 값안으로만 활용할 수 있게 해

    # static과 객체간의 관계
    - static은 클래스변수
      클래스 하나하나 무한대로 객체를 생성할 수 없고 그러한 객체는 모양이 동일할지 모르지만, 전혀 다른 덩어리

    # static의 장단점
    - 장점 : 객체를 생성하지않고도 사용할 수 있어 편리함
    - 단점 : 항상 메모리에 상주하기 떄문에 시스템속도가 느려질 수 있다.

    # static의 쓰임새
    - 주로 상수(주로 대문자로 사용)

    # final
    - 데이터의 변경을 방지하기위해 사용하는 변수(절대불변)

*/
public class HelloJava {
    public static void main(String[] args) {
        Wallet wallet = new Wallet();
        Wallet wallet1 = new Wallet();
        Wallet wallet2 = new Wallet();
        System.out.println(wallet.printtotal()+"원 이 있습니다.");
        wallet.withdraw(100);
        wallet1.withdraw(150);
        wallet2.withdraw(200);
        System.out.println(wallet.printtotal()+"원 이 있습니다.");

    }
}
