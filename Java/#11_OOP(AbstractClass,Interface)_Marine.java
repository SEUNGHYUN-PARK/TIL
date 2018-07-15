public class Marine extends Unit implements Bionic {


    public Marine(){
        this.HP=40;
        this.attackPoint=6;
        this.armor=0;
        System.out.println("You wanna piece of me boy?");
    }

    @Override
    public void go() {
        System.out.println("마린이 움직입니다.");
        System.out.println("자 가자가자!");
    }

    @Override
    public void stop() {
        System.out.println("마린이 정지합니다");
    }

    @Override
    public void hold() {
        System.out.println("마린이 위치를 고수합니다");
    }

    @Override
    public void patroll() {
       System.out.println("마린이 특정지역을 정찰합니다");
    }

    @Override
    public void attack(Unit unit) {
        System.out.println("Marine이 "+ unit.getClass().getName() + "을 공격합니다");
        unit.HP -=this.attackPoint;
    }

    @Override
    public void Steampack() {
        this.HP-=damage;
        System.out.println("Ah yeah!");
        System.out.println("현재 HP : "+this.HP);

    }

}
