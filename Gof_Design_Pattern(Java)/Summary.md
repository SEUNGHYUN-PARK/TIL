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
* [Chain of Responsibility Pattern](#chain-of-responsibility-pattern)
* [Facade Pattern](#facade-pattern)
* [Observer Pattern](#observer-pattern)
* [Mediator Pattern](#mediator-pattern)
* [State Pattern](#state-pattern)
* [Memento Pattern](#memento-pattern)
* [Flyweight Pattern](#flyweight-pattern)
* [Proxy Pattern](#proxy-pattern)
* [Command Pattern](#command-pattern)


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

## Mediator Pattern
#### Mediator Pattern의 정의
* 객체간의 상호 작용을 세트로 묶어 캡슐화하는 객체를 정의하는 패턴
#### Mediator Pattern의 구조
* 추상클래스로 상속받은 중재자에 클라이언트 둘 이상의 중간에서 데이터를 처리해주는 구조  
* 얼핏 보면 파사드 패턴과 유사하지만 다르다
  * 중재자 패턴은 행위 패턴 (in-run-time의 행위들을 묶어준다)
  * 객체간의 의존성을 낮추고 소스 리딩성을 올리고 유지보수를 편하게 하는것이 주 사용 목적

![](https://t1.daumcdn.net/cfile/tistory/2575954E53F35F5D12)  
## State Pattern
#### State Pattern의 정의
* 객체의 상태에 따라 각각의 행위를 변경할 수 있게 캡슐화하는 구조
* 동적으로 행동을 교체할 수 있음
#### State Pattern의 구조
* 전략패턴마냥, 자기 자신을 상태객체들로 두고 그 상태를 바꿀 수 있는 메소드들을 선언과 적용을 통해 객체의 상태변화를 가능케하는 구조

![](https://upload.wikimedia.org/wikipedia/de/7/70/StatePattern_Classdiagramm.png)

## Memento Pattern
#### Memento Pattern 정의
* 객체의 상태 정보를 저장하고 사용자의 필요에 의하여 원하는 시점의 데이터를 복원 할 수 있는 패턴
#### Memento Pattern 구조
* Originator는 원조 객체를 뜻함. Originator의 내부 정보를 저장하는 객체가 Memento
Originator는 자신의 내부 상태를 저장하는 CreateMemento 함수를 가지고 있고 다시 Memento로 내부 상태를 복원하는 SetMemento 함수가 있음
앞서 말했듯이 메멘토 패턴을 이용하여 캡슐화를 지키면서 내부상태를 공유할 수 있습니다. 하지만 자주 메멘토를 반환해야 하는 때라면 상당한 오베헤드를 가져올 수 있습니다. 또한 메멘토를 관리하는 비용도 존재  

![](https://img1.daumcdn.net/thumb/R720x0.q80/?scode=mtistory&fname=http%3A%2F%2Fcfile6.uf.tistory.com%2Fimage%2F9933BA3E5A366FAE0AE7E3)


## Flyweight Pattern
#### Flyweight Pattern 정의
* 비용이 큰 자원을 공통으로 사용할 수 있도록 만드는 패턴
  * 비용이 크다 == 중복 생성될 가능성이 높은경우
  * 자원 생상 비용은 큰데 사용 빈도가 낮은 경우

#### Flyweight Pattern 구조
* FlyweightFactory에서 플라이급 객체들을 관리
사용자가 객체를 요청하면, FlyweightFactory는 이미 존재하는 인스턴스를 제공하거나 없다면 새로 만들어 전달

![](https://img1.daumcdn.net/thumb/R720x0.q80/?scode=mtistory&fname=http%3A%2F%2Fcfile2.uf.tistory.com%2Fimage%2F99C3C0335A13799B2A1DC2)

## Proxy Pattern
#### 정의
* 대리자,대변인의 뜻 처럼 프로그램이 프록시에게 어떤 일을 대신 시키는 패턴
#### 구조
* 구체적으로 인터페이스를 사용하고 실행시킬 클래스에 대한 객체가 들어갈 자리에 대리자 객체를 다시 투입

![](https://img1.daumcdn.net/thumb/R720x0.q80/?scode=mtistory&fname=http%3A%2F%2Fcfile4.uf.tistory.com%2Fimage%2F993319415A2EAD5F10074A)

## Command Pattern
#### 정의
* 요청 자체를 캡슐화, 이를 통해 요청이 서로 다른 사용자를 매개변수로 만들고, 요청을 대기시키거나 로깅하며, 되돌릴 수 있는 연사을 지원
#### 구조
* Command에서 연산 수행에 필요한 인터페이스를 선언하고 ConcreteCommand에서 Receiver 객체와 액션 간 연결성을 정의  
Invoker는 Command에 요청하는 객체  
Receiver는 실제 수행해야할 연산 방법을 알고 있는 객체  

![](https://img1.daumcdn.net/thumb/R720x0.q80/?scode=mtistory&fname=http%3A%2F%2Fcfile10.uf.tistory.com%2Fimage%2F998CE84A5A35D21119DC5D)
