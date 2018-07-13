package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

import java.util.Scanner;



public class HelloJava {
    public static void main(String[] args) {
        ManClass mc = new ManClass(); // ManClass.java파일로 부터 객체를 형성했다
        //그리고 생성자를 통해 hello_man이라는 스트링이 출력
        ManClass mc2 = new ManClass();

        System.out.println(mc.equals(mc2)); // 두 객체가 각각 독립되었음을 의미
        ManClass mc3 = new ManClass(1,200,3,"010-0000-0000");

        System.out.println(mc3.getHeight());
        System.out.println(mc3.getWeight());
        System.out.println(mc3.getPhoneNum());

        System.out.println(mc3.getAge());
        mc3.setAge(27);
        System.out.println(mc3.getAge());

        System.out.println(mc3.calculateBMI());
    }
}
