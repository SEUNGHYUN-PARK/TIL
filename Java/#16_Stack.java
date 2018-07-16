import java.util.Stack;

public class StackMain {

    /*
        Stack

        push(object)
        스택에 객체를 적재함

        pop();
        스택의 최상단 객체를 제거함

        peek();
        스택의 최상단 데이터를 칭할때 씀

        int search(Object)
        해당 스택에서 전달된 객체가 존재하는 위치의 인덱스를 반환함.
        이때 인덱스는 제일 상단에 있는(제일 마지막으로 저장된) 요소의 위치부터 0이 아닌 1부터 시작함.
    */


    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < 5; i++) {
            stack.push(i);
        }
        System.out.println(stack);
        System.out.println(stack.search(3));


        while(!stack.empty())
        {
            System.out.print(stack.peek()+" ");
            stack.pop();
        }
    }
}
