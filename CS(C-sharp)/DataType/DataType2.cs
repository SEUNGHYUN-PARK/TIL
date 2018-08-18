using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataType_2
{
    //static var a = 100; -> 지역으로만 사용이 가능하다
    class DataType2
    {
        static void Main(string[] args)
        {
            /*
             * 암시적 데이터 형 Var
             * 대입되는 데이터에 따라 데이터형 결정
             * 잘 쓰는 사람이 있고 없는 사람이 있다
             * 
             * var를 사용할 수 없는 예
             * 1) null값으로 초기화, 매개변수로는 사용불가
             * 2) var는 지역변수로만 사용, 클래스 멤버로는 사용 못함
             * 3) 연속적으로 초기화하는 경우 ex) var m = 10, n= 20;
             * 
             */

            //var a = null; ->null로도 초기화 불가능
            var value = 3.14f;
            float value2 = 10.12f;
            float sum = value + value2;
            Console.WriteLine("{0} {1:f1} {2:f2}", value, value2, sum);
            // {출력인덱스 : 출력형식문자(숫자)}
            // 숫자만큼 출력


            /*
             *  nullable형
             *  null을 허용하지 않는 데이터형에 null을 허용하게하는 형
             *  데이터형+? 로 선언해주면 가능하다.
             *  메소드
             *  .HasvValue; -> true / false 리턴
             *  .Value; -> 값 읽기전용
             */
            int? var1 = null;
            Console.WriteLine(var1.HasValue);
            //Console.WriteLine(var1.Value); // null값은 출력을 하지못한다.
            var1 = 10;
            Console.WriteLine(var1.HasValue);
            Console.WriteLine(var1.Value);
            Console.WriteLine(var1); // 이렇게 해도 값은 출력된다.


            /*
             * 데이터 변환
             * ToString()
             * 기본자료형.ToXXX() <XXX는 임의의 자료형>
             */
            int temp = 123;
            string s = temp.ToString();
            Console.WriteLine(s.GetType());
            Console.WriteLine(s);
            Console.WriteLine(temp.GetType());
            Console.WriteLine(temp);

            Console.WriteLine();
            int temp2 = Convert.ToInt32(s);
            Console.WriteLine(temp2.GetType());
            Console.WriteLine(temp2);

            Console.WriteLine();
            string str2 = "3.14";
            float ftemp = float.Parse(str2);
            Console.WriteLine(ftemp);
            Console.WriteLine(ftemp.GetType());




        }

    }
}
