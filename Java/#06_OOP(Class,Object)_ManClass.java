package com.javalec.ex;

/*
    ## 객체
    객체란 동일한 성질의 데이터와 메소드를 한곳에 모아두고 필요한 곳에서 언제든지 이용할 수 있게 만들어놓은 덩어리
    쉽게생각하면 현실세계의 사람, 자동차, 자전거, 비행기처럼 각자가 갖고있는 데이터와 행위들에 대해서 하나의 덩어리로 만든 것
    자동차 엔진등 여러 부픔으로 이뤄져있고(데이터), 이를 통해 전진 후진 정지 등의 행위(메소드)를 할 수 있는 것이다.
    객체는 클래스로부터 생성되는것이며, 생성된 객체들은 완전한 독립체
    예를들면 자동차에 대한 기본적인 정보를 담고있는 설계도를 클래스라 칭하면, 설계도를 통해 생성된 자동차는 객체라한다. => 현실세계 반영
    색상이 결정되지않은 자동차(클래스) -> 객체생성(클래스복사) -> 빨간색 자동차: 객체1, 파란색 자동차: 객체2
    객체 생성은 생성자를 통해 이뤄진다.
    객체의 자료형은 int이런형이 아닌 객체자료형이 따로 존재하기때문에 이는 메모리상에서 직접적으로 데이터가 들어가 있는게 아닌, 메모리상에는 해당객체의 주소가 들어가있다.
    객체선언은 다음과 같은 형태로 이뤄진다.
    ClassName Java = new ClassName();

    ## this
    this 키워드는 생성된 객체 자신을 가리키는데 쓰인다.
*/


public class ManClass {

    //데이터들 클래스 안의 변수들을 인스턴스 변수라고한다
    //클래스변수에 대한 무분별한 접근을 막기위해 private,public등이 있다.
    //public은 접근이 가능하지만 private는 접근이 불가능함을 의미한다.

    private int age;
    private int height;
    private int weight;
    private String phoneNum;

    //없어도 컴파일러가 알아서 추가함, 빈공간이어도 됨
    //객체가 생성될때 초기설정을 해주는 공간
    //생성자는 여러형태로 선언이 가능(생성자 오버로딩)

    public ManClass()
    {
        System.out.println("Hello_man!");
    }

    public ManClass(int ag, int hei, int wei, String pNum)
    {

        this.age = ag;
        this.height = hei;
        this.weight = wei;
        this.phoneNum = pNum;
    }
    ///////////////////////////////// 메소드

    public double calculateBMI()
    {
        double ret  =(height-100)*0.9;
        return ret;
    }
    //////////////////////////////////////

    /////////////////////////////////////////////////////////////
    //getter,setter도 private로 인해 데이터를 접근할 수 없기때문에 만들어졌다
    //getter : 인스턴스 변수 값을 가져오는 메소드
    //setter : 인스턴스 변수 값을 설정하는 메소드

    public int getAge() {
        return age;
        //return this.age; 이런식의 접근도 가능하다
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public String getPhoneNum() {
        return phoneNum;
    }

    public void setPhoneNum(String phoneNum) {
        this.phoneNum = phoneNum;
    }
    ///////////////////////////////////////////
}
