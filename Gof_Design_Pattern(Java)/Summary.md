Gof_Design_Pattern
====================
목차
----------------------------
1. [Strategy Pattern](#strategy-pattern)  
2. [Adapter Pattern](#adapter-pattern)  
3. [Template Method Pattern](#template-method-pattern)
4. [Factory Method Pattern](#factory-method-pattern)
5. [Singleton Pattern](#singleton-pattern)

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

#### Singleton Pattern의 구현 예
* 하나의 인스턴스만을 생성하는 책임이 있으며, getInstance 메소드를 통해 모든 클라이언트에게 동일한 인스턴스를 반환하는 작업을 수행  

![](data:image/png;base64,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)

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
