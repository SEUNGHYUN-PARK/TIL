package impl;

import Enums.EnemyStatus;
import Interfaces.Heroes;
import Interfaces.Observer;
import Interfaces.Subject;

public class Hulk implements Observer, Heroes {

    public Hulk(Subject team)
    {
        System.out.println("헐크 합류");
        team.add(this);
    }

    @Override
    public void update(EnemyStatus stat) {
        this.behavior(stat);
    }

    @Override
    public void behavior(EnemyStatus stat) {
        switch(stat){
            case NONE: System.out.println("헐크 : 브루스 배너 상태"); break;
            case APPEAR: System.out.println("헐크 : 헐크로 변신"); break;
            case ATTACK: System.out.println("헐크 : 무시함"); break;
            case DISAPPEAR: System.out.println("헐크 : 변신 해제"); break;
        }
    }
}
