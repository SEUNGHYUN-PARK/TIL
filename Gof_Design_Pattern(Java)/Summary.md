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
