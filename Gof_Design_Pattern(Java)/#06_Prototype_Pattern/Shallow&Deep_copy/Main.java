public class Main {
    public static void main(String[] args) throws CloneNotSupportedException {
        Cat navi = new Cat();
        navi.setName("navi");
        navi.setCatNameCard(new CatNameCard(2000,19));

        System.out.println("============얕은복사================");
        Cat yo = navi; // 얕은복사, 같은 주소값을 참조하게 설정했기때문에 객체의 어느 한쪽만 값이 변경되도 값이 변경됨
        yo.setName("yo");
        yo.setCatNameCard(new CatNameCard(2013,6));
        System.out.println(navi.getName());
        System.out.println(yo.getName());
        System.out.println(navi.getCatNameCard().getYear());
        System.out.println(navi.getCatNameCard().getAge());
        System.out.println(yo.getCatNameCard().getYear());
        System.out.println(yo.getCatNameCard().getAge());
        yo.getCatNameCard().setYear(2012);
        yo.getCatNameCard().setAge(7);
        System.out.println(navi.getCatNameCard().getYear());
        System.out.println(navi.getCatNameCard().getAge());
        System.out.println(yo.getCatNameCard().getYear());
        System.out.println(yo.getCatNameCard().getAge());
        System.out.println("=============얕은복사끝================\n");

        System.out.println("=============깊은복사==================");
        Cat A = navi.copy();
        System.out.println(A.getName());
        System.out.println(A.getCatNameCard().getYear());
        System.out.println(A.getCatNameCard().getAge());
        A.setName("B");
        A.getCatNameCard().setYear(2018);
        A.getCatNameCard().setAge(1);
        System.out.println(A.getName());
        System.out.println(A.getCatNameCard().getYear());
        System.out.println(A.getCatNameCard().getAge());
    }
}
