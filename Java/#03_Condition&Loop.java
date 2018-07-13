package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

/*
    제어문과 반복
    #제어문
    어떤 상황을 판단하여 조건에 맞춰 진행하는 일을 달리하는 구문
    if / if, else / if, else if, else

    #반복문
    반복적인 작업을 보다 효율적으로 처리하는 구문
*/

import java.util.Scanner;

public class HelloJava {
    public static void main(String[] args) {
        System.out.print("점수를 입력해주세요 : "); // print 개행안함, println 개행
        Scanner sc = new Scanner(System.in); // 입력을 위한 객체 선언
        int score = sc.nextInt();

        if (90 <= score && score <= 100)
            System.out.println("1등급입니다.");
        else if (80 <= score && score < 90)
            System.out.println("2등급입니다.");
        else if (70 <= score && score < 80)
            System.out.println("3등급입니다.");
        else if (60 <= score && score < 70)
            System.out.println("4등급입니다.");
        else
            System.out.println("등급외입니다.");

        System.out.println();

        System.out.print("숫자를 입력해주세요 : ");
        int num = sc.nextInt();
        int judge = num%2;
        switch (judge)
        {
            case 0:
                System.out.println("짝수 입니다.");
                break; // break 필수 안하면 짝수입력시 홀수로도 넘어감
            case 1:
                System.out.println("홀수 입니다.");
                break; // break 필수 안하면 홀수,짝수 둘다 아닌것도 출력
            default:
                System.out.println("홀수,짝수 둘다 아닙니다.");
                break;

        }

        System.out.println();

        System.out.print("숫자를 입력해주세요 : ");
        int des = sc.nextInt();
        int sum=0;
        for (int i = 0; i <= des; i++) {
            if(i%3==0)
                sum+=i;
        }
        System.out.println("0부터 "+des+"까지 3의 배수인 수들의 합은 "+ sum + "입니다");

        System.out.println();
        System.out.print("숫자를 입력해주세요 : ");
        int d = sc.nextInt();
        int i=1;
        System.out.println(d+"의 약수들 집합");
        while(i<=d)
        {
            if(d%i==0)
                System.out.print(i+" ");
            i++;
        }
    }
}
