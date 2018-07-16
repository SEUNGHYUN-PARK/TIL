import java.util.ArrayDeque;
import java.util.Deque;

public class DequeMain {

    /*
        Deque

        선언
        Deque<Object> deque = new ArrayDeque<>();

        메소드
        addFirst(Object) : 덱의 맨 앞에 데이터 추가
        addLast(Object) : 덱의 맨 뒤에 데이터 추가
        peekFirst() : 덱의 맨 앞 데이터 리턴
        peekLast() : 덱의 맨 뒤 데이터 리턴
        removeFirst() : 덱의 맨 앞 데이터 삭제
        removeLast() : 덱의 맨 뒤 데이터 삭제

    */


    public static void main(String[] args) {
        Deque<Integer> deque = new ArrayDeque<>();
        deque.addFirst(10);
        deque.addLast(50);
        deque.addFirst(40);
        deque.addLast(30);
        deque.addFirst(20);

        System.out.println(deque);


        while(!deque.isEmpty())
        {
            System.out.println(deque.peekFirst());
            deque.removeFirst();
        }

        System.out.println();

        deque.addFirst(10);
        deque.addLast(50);
        deque.addFirst(40);
        deque.addLast(30);
        deque.addFirst(20);

        while(!deque.isEmpty())
        {
            System.out.println(deque.peekLast());
            deque.removeLast();
        }



    }

}
