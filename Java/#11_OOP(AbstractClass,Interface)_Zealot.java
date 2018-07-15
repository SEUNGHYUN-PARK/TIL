public class Zealot extends Unit {
    Zealot()
    {
        this.HP=100;
        this.attackPoint=8;
        this.armor=1;
        System.out.println("My life for Aiur.");
    }
    @Override
    public void go() {
        System.out.println("질럿이 움직입니다.");
        System.out.println("포 아둔!");
    }

    @Override
    public void stop() {
        System.out.println("질럿이 정지합니다");
    }

    @Override
    public void hold() {
        System.out.println("질럿이 위치를 고수합니다");
    }

    @Override
    public void patroll() {
        System.out.println("질럿이 특정지역을 정찰합니다");
    }

    @Override
    public void attack(Unit unit) {
        System.out.println("zealot이 "+ unit.getClass().getName() + "을 공격합니다");
        unit.HP -=this.attackPoint;
    }
}
