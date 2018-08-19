using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace BasicGram
{
    class Operators
    {
        static void Main(string[] args)
        {
            /*
             * 단항연산자(+ - ! ~ ++ --)
             * !은 bool형에서만 사용
             */
            bool bFlag = false;
            WriteLine("{0} {1} {2}", !bFlag, !true, !false);

            /*
             * 산술연산자(* / * % - +)
             * string에서는 + 문자열 연결
             * 정수/부동 + "문자열" = "문자열"
             */
            string s1 = "3";
            string s2 = ".14";
            string s3 = s1 + s2;
            WriteLine(s3);
            int number = 3;
            float fnumber = 0.14f;
            string s4 = number + s2;
            string s5 = s1 + fnumber;
            WriteLine(s4+" "+s4.GetType());
            WriteLine(s5+" "+s5.GetType());

            /*
             * 시프트연산자(<< >>)와 
             * 비교연산자(>= <= > < == !=) -> return true/false;
             */
            int num = 1;
            num <<= 5;
            WriteLine(num);
            num >>= 3;
            WriteLine(num);

            if (num==4)
                WriteLine("true");
            else
                WriteLine("false");

            /*
             * is연산자
             * 형식호환을 조사하는 연산자
             * '변수' is 클래스형 or 데이터형
             * return true/false;
             * 박싱,언박싱변환,참조변환애서 사용
             */

            int a = 1000;
            if (a is int)
            {
                WriteLine("int");
            }
            else
                WriteLine("not int");

            if (a is Object)
            {
                WriteLine("Object");
            }
            else
                WriteLine("not Object");

            Object obj = a;
            if (obj is int)
            {
                WriteLine("obj has int data");
            }

            /*
             * 비트연산자(&,^,|)와
             * 논리연산자(&&,||,? :)
             */

            bool logic=true;
            int temp;
            temp = logic == true ? 100 : 0;
            WriteLine(temp);

            int i = 2;
            WriteLine(i);
            i &= 1;
            WriteLine(i);

            /*
             *  null 병합 연산자
             *  ?? (null 조사)
             *  C = A ?? B
             *  A가 null이 아니면 A를 C에 대입
             *  A가 null이면 B를 C에 대입
             */
            int? x = null;
            int y = x ?? 1;
            WriteLine(y);
            x = 10;
            y = x ?? 1;
            WriteLine(y);

        } 
    }
}
