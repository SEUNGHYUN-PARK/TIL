public class Explain {
        /*

        *** 추상클래스 ***
        # 추상클래스의 이해
        - 추상적으로 정의할테니 사용자가 꼭 재정의하세요를 의미

        # 문법
        - 추상클래스 선언
        public abstarct class AbC{

            public abstract void method();
            public abstract void method2();
            public abstract void method3();
            public abstract void method4();
            // 위 처럼 메소드 선언만하고

        }
        public class ClassName extends Abc
        {
            //메소드 재정의
        }

        # 추상클래스 상속과 일반적인 상속의 차이
        - 추상클래스에서는 접근지정자를 public,protected만 사용가능하다
        - 정답은 없다. 초기 설계 단계에서 어느정도 일반 클래스를 분리하기는하지만, 프로젝트 개발 도중 언제든지 변경이 가능
        - 부모 클래스의 메소드를 자식클래스에서 변경할 일이 없다면, 일반 클래스를 이용한 상속이 좋다.
        - 하지만 이전 예제처럼 자식클래스에서 꼭 재정의해야하는 부분이 있다면, 추상클래스를 이용하여 강제로 재정의할 수 있음
        - 불필요한 메소드를 불러오는것을 방지할 수 있어서 프로그램의 에러방지에 도움이 된다...?


        인터페이스

        # 인터페이스의 이해
        - 인터페이스란 객체와 객체의 소통 수단
        - 작업명세서 : 앞으로 이렇게 만들어요
        - 다형성 : Java에서 다형성을 가능하게 함
        - 어렵지 않아요 : 사용법은 어렵지 않지만, 실제 개발에 적용ㅇ시키기는 쉽지 않음
        - 디자인 패턴이나 프레임웍을 통해 습득하는 것이 최선
        - 객체를 부속품화 : 다양한 객체를 제품의 부속품처럼 개발자 마음대로 변경할 수 있음

        # 인터페이스의 사용
        - 실제 기능은 없다. 구현된 기능은 없고, 추상메소드랑 상수만이 존재
        - private는 안된다.
        - 추상화 : 메소드는 무조건 추상 메소드만 존재
        - 객체타입 : 인터페이스는 객체가 아님, 다만 객체 타입으로만 사용
        - 구현은 실행되는 객체의 메소드에서한다.
        - 인터페이스는 다중으로 상속이 가능하다.


        #인터페이스의 문법
         - 인터페이스 선언
         public interfaces InterfaceEx
         {
            public void method();여기서는 선언만
         }
         - 인터페이스 링크
         public class InterfaceClass implements InterfaceEx
         {
            public static int CONSTANT_NUM=1000;
            public void method() // 세부적인 구현
            {
            }
         }


         이번실습에서는 초간단 스타크래프트를 만들어볼 것이다.
    */
}
