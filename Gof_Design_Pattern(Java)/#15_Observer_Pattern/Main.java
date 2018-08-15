import impl.*;
import Enums.*;

public class Main {
    public static void main(String[] args) {
        Avengers avengers = new Avengers();

        //옵저버객체 생성 및 추가
        CaptainAmerica captainAmerica = new CaptainAmerica(avengers);
        Ironman ironman = new Ironman(avengers);
        Hulk hulk = new Hulk(avengers);

        //옵저버가 아닌 객체 생성
        Vision vision = new Vision();

        //와처 객체 생성
        Watcher watcher = new Watcher(avengers);

        //0. 대기상태
        System.out.println("======= 대기상태 ========");
        avengers.setStat(EnemyStatus.NONE);

        //1. 빌런 등장
        System.out.println("======= 빌런 등장 ========");
        avengers.setStat(EnemyStatus.APPEAR);

        //2. 빌런 공격
        System.out.println("======= 빌런 공격 ========");
        avengers.setStat(EnemyStatus.ATTACK);
        // - 옵저버 제거 및 추가
        avengers.remove(ironman);
        avengers.add(vision);

        //3. 빌런 제거
        System.out.println("======= 빌런 제거 ========");
        avengers.setStat(EnemyStatus.DISAPPEAR);

        //4. 와처 상태 체크
        watcher.checkStat();
    }
}
