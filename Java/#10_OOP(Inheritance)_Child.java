public class ChildClass extends ParentClass {
    /*

        # 상속이 필요한 이유
        1. 모든 개발을 처음부터 할 필요는 없다. 따라서 이미 완벽히 구현한 프로그램이 있다면 상속을 통해 휼룽한 결과물을 빠른 시간 내에 만들 수 있게됨
        2. 다양한 객체를 상속을 통해 하나의 타입으로 묶을 수 있다
           서로 다른 클래스들이 하나의 클래스로부터 상속되었다면 서로 다른 클래스들이 생성한 객체들을 하나로 묶어줌.

        # 상속을 하는 방법
        public class ChildClass extends ParentClass
        {

        }

        ******* Java에서는 다중상속이 불가능하다 ********

    */
    ChildClass()
    {
        setFatherName("가나다");
        setMotherName("라마바");
    }
    ChildClass(String _str, String _str2) // 오버로딩
    {
        setMotherName(_str2);
        setFatherName(_str);
    }
    public void makecook() //오버라이딩
    {
        //오버라이딩을 하게되면 재선언한 메소드만을 사용할수있다. 하지만
        super.makecook(); // 이렇게 부모클래스의 메소드도 사용이 가능하다.
        //아는 super 키워드를 활용해 부모클래스에 접근해 선언할 수 있다.
        System.out.println("자식은 라면을 만들수있어요");
    }

    public static void main(String[] args) {
        ParentClass parentClass = new ParentClass();
        parentClass.makecook();
        ChildClass child = new ChildClass("홍길동","홍길자");
        child.makecook();
        ChildClass child2 = new ChildClass();

        child.num= 50;// protected라면 사용가능
        //child.Fathername="홍길동"// private라서 불가능
        System.out.println(child.getFatherName()+" " + child.getMotherName()); //비록 Child에 없지만 상속이 되었기때문에 사용이 가능하다. 물론 데이터에는 접근 불가능
        System.out.println(child2.getFatherName()+" "+ child2.getMotherName());

    }
}
