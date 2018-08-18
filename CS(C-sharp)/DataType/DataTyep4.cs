using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;


namespace DataType
{
    enum Condition : int{Good,bad};

    public struct Node // 구조체는 값형식
    {
        // public 접근지정자
        // 구조체 안에 선언할 수 있는 생성자는 매개변수가 반드시 있어야함

        // 멤버변수,메서드
        // 구조체에 선언된 const, static 변수만 초기화 가능
        public const float PI = 3.14f;
        public static int Age = 12;

        private int age;
 
        public Node(int _age)
        {
            age = _age;
        }
        public int getage()
        {
            return age;
        }
        public void setage(int _age)
        {
            this.age = _age;
        }

    };

    public class MyClass 
    {
        //클래스는 참조형태
        private int age;
        public MyClass(int _age)
        {
            setage(_age);
        }
        public int getage()
        {
            return this.age;
        }
        public void setage(int _age)
        {
            this.age = _age;
        }

    }

    class DataTyep4
    {
        static void Main(string[] args)
        {
            WriteLine("{0} {1}", Node.Age, Node.PI);

            Node temp = new Node(2);
            WriteLine(temp.getage());

            Node node = new Node();
            WriteLine(node.getage());
            node.setage(5);
            WriteLine(node.getage());




            Node test1 = new Node();
            test1.setage(10);
            Node test2 = test1;
            test2.setage(20);
            WriteLine(test1.getage() + " " + test2.getage());

            
            MyClass test3 = new MyClass(10);
            MyClass test4 = test3;
            WriteLine(test3.getage() + " " + test4.getage());
            test4.setage(50);
            WriteLine(test3.getage() + " " + test4.getage());
            WriteLine(test3.GetHashCode()+ " " + test4.GetHashCode());

            WriteLine();
            int a = Convert.ToInt32(ReadLine());
            switch (a)
            {
                case (int)Condition.Good:
                    WriteLine("좋습니다.");
                    break;
                case (int)Condition.bad:
                    WriteLine("괜찮아요");
                    break;
            }

        }
    }
}
