Gof_Design_Pattern Summary
====================
목차
----------------------------
* [Strategy Pattern](#strategy-pattern)  
* [Adapter Pattern](#adapter-pattern)  
* [Template Method Pattern](#template-method-pattern)
* [Factory Method Pattern](#factory-method-pattern)
* [Singleton Pattern](#singleton-pattern)
* [Prototype Pattern](#prototype-pattern)
* [Abstract Factory Pattern](#abstract-factory-pattern)
* [Bridge Pattern](#bridge-pattern)
* [Composite Pattern](#composite-pattern)
* [Decorator Pattern](#decorator-pattern)
* [Visitor Pattern](#visitor-pattern)
* [Chain of Responsibility Pattern](#chain-of-responsibility)
* [Facade Pattern](#facade-pattern)
* [Observer Pattern](#observer-pattern)



#### 공부하는데 이용한 자료들  
* [Youtube - 자바 디자인 패턴 이해](https://youtu.be/UEjsbd3IZvA)  
* UML과 GoF 디자인 패턴 핵심 10가지로 배우는 Java 객체 지향 디자인 패턴 - 한빛미디어  

# 개요
### 목적
* ***구조와 구현의 분리*** 를 통해, 보다 <U>효율적인 코드의 생산성을 증진시킨다.</U>

### 인터페이스와 델리게이트
##### 인터페이스  
* 사전적인 의미  
  * 키보드나 디스플레이 따위처럼 사람과 컴퓨터를 연결하는 장치  
* Java에서의 의미  
  * 기능에 대한 선언과 구현 분리  
    * 기능에 대한 선언은 인터페이스에서 선언하고, 구현은 클래스에서 implements를 이용해 상속받은 후 구현해준다.  
  * 기능의 사용 통로  
##### 델리게이트  
* 사전적인 의미  
  * 위임하다  
* Java에서의 의미  
  * 특정 객체의 기능을 사용하기 위해 다른 객체의 기능을 호출하는 기능  


## Strategy Pattern  
#### Strategy Pattern의 정의  
* 전략(어떤 목적을 달성하기 위해 일을 수행하는 방식,비즈니스 규칙,문제를 해결하는 알고리즘등을 의미)을 쉽게 바꿀 수 있도록 해주는 디자인 패턴  
* 여러 알고리즘을 하나의 추상적인 접근점을 만들어 접근점에서 서로 교환 가능하도록 하는 패턴  
#### Strategy Pattern의 구현 예  
* Strategy pattern은 대표적으로 게임을 구현하는데 사용  
* 대표적으로 케릭터의 고유의 특성을 하나의 클래스로 작성해 케릭터 안의 객체로서 작용하게 하는 방식  
![](http://ufx.kr/blog/wp-content/uploads/2009/05/strategypattern_actionadventuregame.png)  


## Adapter Pattern  
#### Adapter Pattern의 정의  
* 한 클래스의 인터페이스를 클라이언트에서 사용하고자하는 다른 인터페이스로 변환  
* 어뎁터를 이용하면 인터페이스 호환성 문제 때문에 같이 쓸 수 없는 클래스들을 연결해서 쓸 수 있음  
#### Adapter Pattern의 구현 예  
* 기존의 클래스의 메소드를 그대로 사용하는데 지장이 있을 때, 어뎁터와 인터페이스를 활용해 현재 상황에 맞게 알고리즘을 재조정하는 방식  
![](https://t1.daumcdn.net/cfile/tistory/24231F4C575EACA210)  

## Template Method Pattern
#### Template Method Pattern의 정의
* 전체적으로는 동일하면서 부분적으로는 다른 구문으로 구성된, **메서드의 코드 중복을 최소화할 때 유용**  
* 다른관점에서 보면 동일한 기능을 **상위클래스에서 정의하면서 확장/변화가 필요한 부분만 서브 클래스에서 구현** 할 수 있도록 한다.
#### Template Pattern의 구현 예
* ***전체적인 알고리즘을 상위 클래스에서 구현하면서 다른 부분은 하위 클래스에서 구현할 수 있도록 하는 디자인 패턴, 전체적인 알고리즘 코드를 재사용하는데 유용***  
![](https://sourcemaking.com/files/v2/content/patterns/Template_method_example.png)  


## Factory Method Pattern  
#### Factory Method Pattern의 정의  
* 객체를 만들어내는 부분을 서브 클래스(Sub-Class)에 위임하는 패턴  
#### Factory Method Pattern의 구현 예  
* 공장에서 로봇을 찍어내듯이 따로 ***new를 활용하지않고 종류에 따라 리턴해줄 수 있음***  
![](https://t1.daumcdn.net/cfile/tistory/143D533C5074FCC225)  

## Singleton Pattern
#### Singleton Pattern의 정의
* 단 하나의 유일한 객체를 만들기 위한 디자인 패턴
#### Singleton Pattern의 구조
* 하나의 인스턴스만을 생성하는 책임이 있으며, static 키워드를 활용한 클래스 메소드인 getInstance 메소드를 통해 모든 클라이언트에게 동일한 인스턴스를 반환하는 작업을 수행  
![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fb/Singleton_UML_class_diagram.svg/1200px-Singleton_UML_class_diagram.svg.png)
#### Singleton Pattern의 주의점
* **멀티 스레드 환경에서는 객체가 두개 이상 만들어질 수 있음**
* 해결책으로 다음과 같이 여러 방법들이 있다.
  * Add synchronized keyword
    * 간단하게 getInstance() 메소드 앞에 synchronized 를 붙여줌  
    * 그럼 해당 클래스를 그대로 활용할 수 있음
    * 하지만 성능저하 됨
    * 소스코드
    ```
    public class Singleton {
      private static Singleton instance;

      private Singleton(){}

      public static synchronized Singleton getInstance(){
          if( instance == null ){
              instance = new Singleton();
          }
          return instance;
      }
    }
    ```
  * Eager initialization
    * 객체를 프로그램 시작과 동시에 초기화
    * 소스코드
    ```
    public class Singleton {
      private static Singleton instance = new Singleton();

      private Singleton(){}

      public static Singleton getInstance(){
          return instance;
      }
    }
    ```


## Prototype Pattern  
#### Prototype Pattern의 정의  
* 생산 비용이 높은 인스턴스를 복사를 통해서 쉽게 생성 할 수 있도록 하는 패턴  
#### Prototype Pattern의 구조  
* Clone()을 활용하여, 깊은 복사를 구현  
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQa7U7oGm5Z70xbFpwqMyBC3WTXdFzYgM8B0ZukjyiK9MJLVv0E)
### 깊은 복사와 얕은 복사
* 깊은 복사는 동일한 성질의 객체자체를 생성 하는 것, 두 객체가 각기 다른 주소를 가짐
* 얕은 복사는 두 객체가 하나의 주소 값을 갖는 것


## Builder Pattern  
#### Builder Pattern의 정의  
* 복합 객체의 생성 과정과 표현 방법을 분석하여 동일한 생성 절차에서 서로 다른 표현 결과를 만들 수 있게 하는 패턴  
#### Builder Pattern의 구조
* 객체 생성시 객체 내 변수, 즉 인스턴스 변수들을 설정할때 set메소드를 활용하여 설정해준다.  
* set메소드들을 사용해 객체 내 인스턴스 변수들을 설정해주면, 기존의 패러미터에 대한 엄격했던 생성을 막을 수 있고, 그만큼 객체설정에 대해 유연성을 갖는다

![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Builder_UML_class_diagram.svg/700px-Builder_UML_class_diagram.svg.png)  

## Abstract Factory Pattern  
#### Abstract Factory Pattern의 정의  
* 많은 수의 연관된 서브 클래스를 특정 그룹으로 묶어 한번에 교체할 수 있도록 만든 디자인 패턴  
#### Abstract Factory Pattern의 구조
* 추상클래스가 아닌 인터페이스를 활용해 상위 계층을 만들어줌
![](https://t1.daumcdn.net/cfile/tistory/217F4A3A5934D31A28)  
#### Abstract Factory Pattern vs Factory pattern의 차이점  
1. 전자는 인터페이스를 활용했고, 후자는 추상클래스를 사용함  
2. 객체안에 객체들을 설정하는 과정이 전자, 그냥 단순히 객체만을 생성하는 조건을 추가한게 후자  
3. 전자는 템플릿 메소드랑 팩토리 메소드 패턴을 결합할 수 있음  

## Bridge Pattern
#### Bridge Pattern의 정의
* 구현부와 추상부를 분리하여 각각 독립적으로 개발할 수 있게 하는 패턴
* 기능과 구현을 별도의 클래스로 정의하여 서로를 분리하는 패턴
* 확장설계에 용이
#### Bridge Pattern의 구조
* Abstraction 클래스의 Hierarchy 구조와 Implementation 클래스의 Hierarchy 구조를 분리  
![](https://t1.daumcdn.net/cfile/tistory/2171BB4B557B898D2F)  
## Composite Pattern
#### Composite Pattern의 정의
* 단일객체든, 객체집합이든 같은 방법으로 취급하는 패턴  
* 객체들의 관계를 트리 구조로 구성하여 부분-전체 계층을 표현하는 패턴
#### Composite Pattern의 구조
* 인터페이스를 implement한 복수객체,그리고 단수객체를 하위클래스로 선언해줌
![](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5a/Composite_UML_class_diagram_%28fixed%29.svg/960px-Composite_UML_class_diagram_%28fixed%29.svg.png)  

## Decorator Pattern
#### Decorator Pattern의 정의
* 주어진 상황 및 용도에 따라 어떤 객체에 책임을 덧붙이는 패턴으로, 기능 확장이 필요할 때 서브클래싱 대신 쓸 수 있는 유연한 대안  
#### Decorator Pattern의 구조  
* 클래스다이어그램 최상단엔 인터페이스/(추상)클래스가 존재하고, 그 아래에는 최상단 인터페이스의 메소드를 오버라이드하는 컴퍼넌트와 데커레이터가 있다. 그리고 그 데커레이터 아래엔 이를 물려받는 하위 클래스들이 존재한다.  
![](https://t1.daumcdn.net/cfile/tistory/2545B4385733308E39)  

## Visitor Pattern
#### Visitor Pattern의 정의
* 알고리즘을 객체 구조에서 분리 시키는 패턴
#### Visitor Pattern의 구조
* 멤버변수와 메서드를 다른 클래스로 분리하여,서로를 호출하게 함으로써,
**추후 메소드 추가를 용이하게 하는 장점** 이 있다.  

![](http://img1.daumcdn.net/thumb/R1920x0/?fname=http%3A%2F%2Fcfile5.uf.tistory.com%2Fimage%2F2446D8435834EE5D3396E8)

## Chain of Responsibility Pattern  
#### Chain of Responsibility Pattern의 정의  
* 명령객체와 일련의 처리 객체를 포함하는 패턴  
* 결합을 느슨하게 하기 위해 고안된 패턴  
* 한 개의 요청에 대하여 여러 객체에게 처리할 수 있는 기회를 주도록 한 디자인패턴  
#### Chain of Responsibility Pattern의 구조
* 대표적으로 try-catch-finally구문을 예로 들 수 있음
  * try 영역에서 처리하지 못할 시, catch영역에서 처리를 위한 시도를하며, 결국은 finally로 접근하는 흐름을 가지듯이 **순차적인 처리를 수행하는 구조**  

![](http://img1.daumcdn.net/thumb/R1920x0/?fname=http%3A%2F%2Fcfile3.uf.tistory.com%2Fimage%2F241B444858355668383804)

## Facade Pattern
#### Facade Pattern의 정의
* 어떤 서브시스템의 일련의 인터페이스에 대한 통합된 인터페이스를 제공  
* 퍼사드에서 고수준의 인터페이스를 정의하여 서브시스템을 좀 더 쉽게 사용 가능  
#### Facade Pattern의 구조
* 부속에 해당하는 객체들을 상위 객체안에 할당하고 거기서 일련의 과정을 처리해주는 구조  

![](https://upload.wikimedia.org/wikipedia/commons/a/ac/FacadeDesignPattern.png)

## Observer Pattern
#### Observer Pattern의 정의
* 옵저버들의 목록을 객체에 등록하여 상태 변화가 있을 때마다 메서드 등을 통해 객체가 직접 목록의 각 옵저버들에게 통지하도록 하는 디자인 패턴  
#### Observer Pattern의 구조
* 옵저버 또는 리스너(listener)라 불리는 하나 이상의 객체를 관찰 대상이 되는 객체에 등록시킨다. 그리고 각각의 옵저버들은 관찰 대상인 객체가 발생시키는 이벤트를 받아 처리  

![](http://img1.daumcdn.net/thumb/R1920x0/?fname=http%3A%2F%2Fcfile8.uf.tistory.com%2Fimage%2F273E2B4E58381D651FB5C8)
