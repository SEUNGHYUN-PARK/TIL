using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//using static System.Console; 이거 알아두자

namespace DataType
{
    class DataType3
    {
        static void Main(string[] args)
        {
            /*
             *  박싱과 언박싱 -> 자주 사용하지는 않지만 이런게 있다
             *  박싱
             *  데이터형을 최상위 Object 형으로 변환하여 힙에 저장
             *  int m = 123;
             *  Object obj = m;
             *  
             *  언박싱
             *  힙에 저장된 형식을 다시 원래의 형식으로 변환
             *  int n = (int)obj;
             */

            int temp = 123;
            Object obj = temp;

            Console.WriteLine(temp);
            Console.WriteLine((int)obj);

            obj = 456; 
            Console.WriteLine(temp); //123
            Console.WriteLine((int)obj); //456
            // 결국은 박싱을 할때는 Object라는 객체가 기존의 temp형을 참조하는것이 아닌 객체에 따로 복사해서 저장해놓는것을 알 수 있음

            Console.WriteLine();
            Console.WriteLine("표준입력연습");
            Console.WriteLine("=================");



            //ConsoleKeyInfo keyInfo; // 키를 눌렀을때 값을 저장하는 객체를 선언해주고
            //do
            //{
            //    // keyInfo = Console.ReadKey(); // 실질적인 입력받는 명령어
            //    keyInfo = Console.ReadKey(true); // 입력받은 값을 출력하지는 않음
            //    //Console.Write(keyInfo.KeyChar); // true로 해놓은 상태에서 입력받은 값을 출력하면 false로한거나 마찬가지 false로하니 두개가 출력
            //    if (keyInfo.KeyChar == 'a')
            //         Console.WriteLine("a가 눌렸습니다");

            //}
            //while (keyInfo.Key != ConsoleKey.Escape) ; // ESC를 누를때까지 계속 입력을 받는다

            Console.WriteLine("국 영 수 점수를 입력해 주세요");

            var numbers = Console.ReadLine();
            var numberList = numbers.Split();

            int kor, eng, math, total;
            float average;
            kor = int.Parse(numberList[0]);
            eng = int.Parse(numberList[1]);
            math = int.Parse(numberList[2]);
            
            total = kor + eng + math;
            average = total / 3.0f;
            Console.WriteLine("{0} {1} {2} {3} {4:f1}", kor, eng, math, total, average);
            

            // 아래방법보다는 위방법이 알고리즘 문제풀이나 그런데서 더 많이 쓰일거같으니 알아두자.
            int soc, sci, info;
            Console.WriteLine("사회점수를 입력해주세요");
            soc = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("과학점수를 입력해주세요");
            sci = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("정보점수를 입력해주세요");
            info = Convert.ToInt32(Console.ReadLine());

           


        }
    }
}
