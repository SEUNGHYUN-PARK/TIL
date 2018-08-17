using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks; 
// using 부분의 의미 = #include ,import 이런느낌...
// 클래스의 네임스페이스를 선언하는 역할
// 네임스페이스 명시 없이 클래스 사용 -> 하지만 이름자체가 중복이 될 수 있다 => 네임스페이스로 구분해준다. 
// 프롤로그(prologue/prolog)라고 칭함

namespace HelloCS // 프로그램 몸체
{
    class Program // 해당 프로그램 클래스는 HelloCS에 속한다
    {
        static void Main(string[] args) // 프로그램의 시작점
        {
            /*
             * 표준출력
             * Console.Write()  =>  System.out.print()
             * Console.WriteLine() => System.out.println()
             */

            /*
             * 출력 형식문자
             * C : 통화($,\ 등) 표시
             * D : 10진수 정수
             * E : 지수형태
             * F : 부동소수점
             * G : 기본출력
             * 
             * 출력시, 강제로 형변환을 원한다면 {출력index : 출력형식문자} 의 형태를 이용해 출력한다
             */
            
            Console.Write("HelloC#!!!\n"); //
            System.Console.Write("Hello~~\n"); // 위와 아래의 소스코드는 같다
            int a = 10;

            float b = 3.14f;
            double d = 2.9;

            Console.WriteLine("a의 값은 " + a + " 입니다");
            Console.WriteLine("{0}\n{1}", b, d);
            Console.WriteLine("{0:C} {1:P} {0:X}",123,123.45);
            Console.WriteLine("{0:c} {1:x} {2:p}", 012, 345, 678);
            

        }
    }
}
