Gof_Design_Pattern
====================
목차
----------------------------
1. [Strategy Pattern](#strategy-pattern)  
2. [Adapter Pattern](#adapter-pattern)  
3. [Template Method Pattern](#template-method-pattern)

#### 공부하는데 이용한 자료들  
* [Youtube - 자바 디자인 패턴 이해](https://youtu.be/UEjsbd3IZvA)  
* UML과 GoF 디자인 패턴 핵심 10가지로 배우는 Java 객체 지향 디자인 패턴 - 한빛미디어  

## Strategy Pattern  

#### 학습목표  
1. 인터페이스 개념을 이해한다  
2. 델리게이트 개념을 이해한다  
3. 전략 패턴 개념을 이해한다  


#### 인터페이스  
* 사전적인 의미  
  * 키보드나 디스플레이 따위처럼 사람과 컴퓨터를 연결하는 장치  

* Java에서의 의미  
  * 기능에 대한 선언과 구현 분리  
    * 기능에 대한 선언은 인터페이스에서 선언하고, 구현은 클래스에서 implements를 이용해 상속받은 후 구현해준다.  
  * 기능의 사용 통로  


#### 델리게이트  
* 사전적인 의미  
  * 위임하다  

* Java에서의 의미  
  * 특정 객체의 기능을 사용하기 위해 다른 객체의 기능을 호출하는 기능  

#### Strategy Pattern의 정의  
* 전략(어떤 목적을 달성하기 위해 일을 수행하는 방식,비즈니스 규칙,문제를 해결하는 알고리즘등을 의미)을 쉽게 바꿀 수 있도록 해주는 디자인 패턴  
* 여러 알고리즘을 하나의 추상적인 접근점을 만들어 접근점에서 서로 교환 가능하도록 하는 패턴  

#### Strategy Pattern의 설계 예  
* Strategy pattern은 대표적으로 게임을 구현하는데 사용이 된다  
* 대표적으로 케릭터의 고유의 특성을 하나의 클래스로 작성해 케릭터 안의 객체로서 작용하게 하는 방식

![](http://ufx.kr/blog/wp-content/uploads/2009/05/strategypattern_actionadventuregame.png)  



## Adapter Pattern  

#### 학습목표  
알고리즘을 요구사항에 맞춰 사용할 수 있다.  

#### Adapter Pattern의 정의  
* 한 클래스의 인터페이스를 클라이언트에서 사용하고자하는 다른 인터페이스로 변환
* 어뎁터를 이용하면 인터페이스 호환성 문제 때문에 같이 쓸 수 없는 클래스들을 연결해서 쓸 수 있음  

#### Adapter Pattern의 설계의 예
* 기존의 클래스의 메소드를 그대로 사용하는데 지장이 있을때, 어뎁터와 인터페이스를 활용해 현재 상황에 맞게 알고리즘을 재조정하는 방식

![](https://t1.daumcdn.net/cfile/tistory/24231F4C575EACA210)
