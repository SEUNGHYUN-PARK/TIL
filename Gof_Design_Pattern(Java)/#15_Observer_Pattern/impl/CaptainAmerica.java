package impl;

import Enums.EnemyStatus;
import Interfaces.Heroes;
import Interfaces.Observer;
import Interfaces.Subject;

public class CaptainAmerica implements Observer, Heroes {

    public CaptainAmerica(Subject team)
    {
        System.out.println("캡틴 아메리카 합류");
        team.add(this);
    }
    @Override
    public void behavior(EnemyStatus stat) {
        switch (stat)
        {
            case NONE:
                System.out.println("캡틴아메리카 : 대기중");
                break;
            case APPEAR:
                System.out.println("캡틴아메리카 : 장비착용 완료");
                break;
            case ATTACK:
                System.out.println("캡틴아메리카 : 공격 중");
                break;
            case DISAPPEAR:
                System.out.println("캡틴아메리카 : 장비해제");
                break;
        }
    }

    @Override
    public void update(EnemyStatus stat) {
        this.behavior(stat);
    }
}
