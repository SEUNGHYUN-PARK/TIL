public class Main {

    public static void main(String[] args) {

        Marine marine = new Marine();

        marine.go();
        marine.hold();
        marine.patroll();
        marine.stop();

        System.out.println("마린의 체력은 "+ marine.HP+"입니다");

        Zealot zealot = new Zealot();
        zealot.go();
        zealot.hold();
        zealot.patroll();
        zealot.stop();

        System.out.println("질럿의 체력은 "+ zealot.HP+"입니다");

        marine.attack(zealot);
        zealot.attack(marine);

        System.out.println("마린의 체력은 "+ marine.HP+"입니다");
        System.out.println("질럿의 체력은 "+ zealot.HP+"입니다");

        Bionic marin3 = new Marine();
        Bionic marin2 = new Marine(); // 인터페이스는 그냥 다른이름으로도 호환되게 다형성을 지원하는것
        // 파이어벳을 만약 Firebat Class를 선언했다. 근데 일괄적인 처리를 하고싶은데  마린과 파이어벳은 클래스가 달라서 불가능하다
        // 이를 Interface가 하나의 또다른 형태로 군집해주기떄문에 다형성을 유지하면서 보다 원할한 데이터처리를 돕는다.
        marin3.Steampack();
        marin3.Steampack();

        ((Marine) marin2).go(); // 하지만 인터페이스를 통해 클래스의 메소드를 사용하고싶으면 형변환을해줘야한다.
        marin2.Steampack();
        ((Marine) marin2).go();
    }
}
