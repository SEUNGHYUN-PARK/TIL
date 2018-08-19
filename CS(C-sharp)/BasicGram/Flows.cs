using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
namespace BasicGram
{
    class Flows
    {
        static void Main(string[] args)
        {
            /*
             * Loop
             * for,while,foreach
             * 
             * break, continue, return, goto등과 쓸수있음
             */

            WriteLine("for example");
            for (int i = 0; i < 5; i++)
            {
                Write(i + " ");
            }

            WriteLine("\nwhile example");
            int loopcnt = 5;
            while (loopcnt > 0)
            {
                Write(loopcnt + " ");
                loopcnt--;
            }

            WriteLine("\nforeach example");
            int[] LoopArray = { 1, 2, 3, 4, 5 };
            foreach (int idx in LoopArray)
                Write(idx + " ");

            /*
             * Condition
             * if,else,else if
             * switch -> case에 문자열도 가능
             */

            int conditionNumber;
            Write("숫자를 입력해주세요 : ");
            conditionNumber = Convert.ToInt32(Console.ReadLine());

            if (conditionNumber > 10)
            {
                Console.WriteLine("10보다 큽니다");
            }
            else
                Console.WriteLine("10보다 작습니다");

            switch (conditionNumber % 3)
            {
                case 0:
                    WriteLine("3의 배수입니다");
                    break;
                case 1:
                    WriteLine("나머지가 1입니다");
                    break;
                case 2:
                    WriteLine("나머지가 2입니다");
                    break;
            }

            /*
             * Exception
             */
            int[] ExceptiontestArray = { 1, 2, 3, 3, 4 };

            int index = 6;
            try
            {
                ExceptiontestArray[index] = 5;
            }
            catch (Exception e)
            {
                WriteLine(e.Message); // 에러메세지를 띄어주고
            }
            finally
            {
                WriteLine("모든 연산을 다 마쳤습니다."); // 다음연산으로 넘어가는데
            }

            if (index > 5)
                throw new IndexOutOfRangeException(); //throw는 던지면 다음 플로우로 넘어가질 않는다

            WriteLine("프로그램을 종료합니다");
        }
    }
}
