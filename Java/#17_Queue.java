import javafx.util.Pair;

import java.util.LinkedList;
import java.util.Queue;


class Pairs
{
    int x;
    int y;
    Pairs(int _x, int _y)
    {
        this.x = _x;
        this.y = _y;
    }
}

public class QueueMain {

    /*
        Queue

        선언
        Queue<Wrapper> queue = new LinkedList<Integer>();

        메소드
        add(object); // 객체 추가
        remove(); // 객체 리턴 + 큐로부터의 삭제;

    */

    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<Integer>();
        Queue<Pairs> q = new LinkedList<Pairs>(); // Pair를 활용한
        q.offer(new Pairs(10,20));
        Pairs p = q.remove();
        int x=p.x;
        int y=p.y;
        System.out.println(p.x+" "+p.y);

        for (int i = 0; i < 5; i++) {
            queue.offer(i);
        }
        System.out.println(queue);

        queue.remove();
        queue.offer(10);
        System.out.println(queue.poll()); // 맨앞 데이터를 추출한다. 더불어 데이터도 삭제한다
        System.out.println(queue.peek()); // 맨앞 데이터를 추출한다. 하지만 맨앞의 데이터는 삭제되지않는다.

    }
}
