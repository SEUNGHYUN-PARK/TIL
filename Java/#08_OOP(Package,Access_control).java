package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

import java.util.Scanner;

/*
   패키지 및 접근 제한

   #패키지의 이해
    - 프로그래밍을 하면서 계속적으로 .java 파일들을 만들것이다. 저절로 규모가 큰 프로그램을 만들수록 .java파일이 많이 만들게 될 것이다.
      하지만 체계적인 관리가 없으면 규모가 커졌을때 감당하기 힘들다.
      따라서 프로그램을 이루는 소스코드의 효율적인 관리를 위해 패키지라는 구조를 사용한다.
      한마디로 패키자는 관련있는 클래스들을 모아놓은 공간

   #정답은 없지만, 효율적으로 해야하는 패키지의 일반적인 설계 방식
    - 패키지 이름은 유일할수록 좋다. 클래스의 재사용을 위해 특정소스들을 이식시켜야하는데, 그때 패키지명이 중복되면 곤란한상황이 생기기떄문이다.
      따라서 주로 패키지 이름은 유니크한 도메인 주소를 역방향으로 해서 만듦
      Ex) 회사 도메인이 www.helloJava.com 이라면 com.hellojava.라고 하고 뒤에 기능별 또는 개발팀에서 정한 규칙에 의해 패키지를 만듦

   #import의 이해
    - 서로 다른 패키지의 클래스를 사용하려고 할때는 반드시 import 키워드를 사용해서 해당 클래스를 임포트해줘야한다.
      Ex) 상단의 import java.util.Scanner;
      만약 패키지의 모든 클래스를 이용하고싶다 => * 사용
      Ex) import java.util.*;

   #접근제한이란?
    - 클래스의 데이터 또는 메소드에 대해 다른 클래스로부터 접근을 제한하는 것
      즉, 다른 클래스의 어떤 데이터가 접근하고 있다면, 그 데이터는 외부 다른 클래스에서 사용할 수 없음을 의미함

   #접근 제한의 종류
    - public : 접근 제한을 하지않음, 즉 다른 모든 클래스에서 사용 가능
    - private : 자신의 클래스에서만 사용 가능, 외부에서는 사용불가
    - protected : 해당 클래스와 동일한 패키지에 있거나, 추후에 배울 상속받은 클래스일 경우에만 사용 가능
    - default : 해당 클래스와 동일한 패키지에서만 사용 가능

    => public,private위주로 사용
*/
public class HelloJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int res = sc.nextInt();
        System.out.println(res);
    }
}
