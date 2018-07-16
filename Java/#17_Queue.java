import java.util.LinkedList;
import java.util.Queue;

class Pair
{
    int x,y;
    Pair(int _x,int _y)
    {
        this.x=_x;
        this.y=_y;
    }
}

public class QueueMain {

    /*
        Queue

        선언
        Queue<Object> queue = new LinkedList<>();

        메소드
        add(object) : 큐에 데이터 추가
        peek(object) : 최전방에 있는 데이터 리턴
        remove(object) : 큐의 최전방의 데이터 삭제

        Pair같은 경우는 직접 만들어줘야한다... C++에만 있는 기능

        Class Pair
        {
            int x,y;
            Pair(int _x. int _y)
            {
                this.x=_x;
                this.y=_y;
            }
        }
    */

    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();
        for(int i=0;i<5;i++)
        {
            queue.add(i);
        }
        while(!queue.isEmpty())
        {
            int temp = queue.peek();
            queue.remove();
            System.out.println(temp);
        }

        Queue<Pair> queuepair = new LinkedList<Pair>();
        queuepair.add(new Pair(10,20));
        queuepair.add(new Pair(20,30));
        queuepair.add(new Pair(30,40));
        queuepair.add(new Pair(40,50));
        queuepair.add(new Pair(50,60));
        queuepair.add(new Pair(60,70));

        while(!queuepair.isEmpty())
        {
            int nx = queuepair.peek().x;
            int ny = queuepair.peek().y;
            queuepair.remove();
            System.out.println(nx+" "+ny);
        }

    }
}
