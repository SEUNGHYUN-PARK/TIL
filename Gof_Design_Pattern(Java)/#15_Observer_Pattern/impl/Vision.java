package impl;

import Enums.EnemyStatus;
import Interfaces.Heroes;
import Interfaces.Observer;
import Interfaces.Subject;

public class Vision implements Observer, Heroes {

    public Vision(){};
    public Vision(Subject team){
        System.out.println("비전 합류");
        team.add(this);
    }

    @Override
    public void update(EnemyStatus stat) {
        this.behavior(stat);
    }

    @Override
    public void behavior(EnemyStatus stat) {
        switch(stat){
            case NONE: System.out.println("비전 : 대기중"); break;
            case APPEAR: System.out.println("비전 : 전투준비"); break;
            case ATTACK: System.out.println("비전 : 효과없음"); break;
            case DISAPPEAR: System.out.println("비전 : 전투상태 해제"); break;
        }
    }
}