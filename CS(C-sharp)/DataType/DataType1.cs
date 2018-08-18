using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataType
{
    class DataType1
    {
        static bool Boolvar; // false의 값을 가짐
        static void Main(string[] args)
        {
            /*
             *  기본 데이터 형
             *    C#의 모든 데이터형은 Object로부터 파생된 객체
             *    System.object == object
             *    데이터형은 CTS(Common Type System)에서 정의된 객체
             *    
             *   bool    / System.Boolean / 1 byte -> 오로지 true, false 만 가능
             *   char    / System.Char    / 2 byte // Java에서 2바이트였던걸 물려받은듯 && Unicode
             *   byte    / System.Byte    / 1 byte // 0~255
             *   sbyte   / System.SByte   / 1 byte // signed byte -128 ~ 127
             *   short   / System.Int16   / 2 byte // -32768 ~ 32767
             *   ushort  / System.UInt16  / 2 byte // unsigned short 0~65535
             *   int     / System.Int32   / 4 byte
             *   uint    / System.UInt32  / 4 byte // unsigned
             *   long    / System.Int64   / 8 byte
             *   ulong   / System.UInt64  / 8 byte
             *   float   / System.Single  / 4 byte // 3.14f
             *   double  / System.Double  / 8 byte // 3.14
             *   decimal / System.Decimal / 16 byte
             *   string  / System.String
             */
            bool LocalBoolVar = true;
            Console.WriteLine("{0} \n{1}", Boolvar, LocalBoolVar);

            int number = '7';
            Console.WriteLine(number + 1);
            Console.WriteLine((char)(number + 1));

            int res;
            byte x = 1, y = 2;
            res = x + y;
            Console.WriteLine(res);

            Console.WriteLine("{0} {1}", short.MinValue, short.MaxValue);
            Console.WriteLine("{0} {1}", ushort.MinValue, ushort.MaxValue);

            string str1 = "Hello ";
            string str2 = "world!";
            string str3 = str1 + str2;
            string str4 = "program" + "ming";
            Console.WriteLine("{0} {1}", str3, str4);
            Console.WriteLine(str3[4]);
            Console.WriteLine(str3.Length);

            if (str3 == "Hello world!")
                Console.WriteLine("같음");
            else
                Console.WriteLine("다름");

            string path1 = "C:\\temp\\test.txt";
            string path2 = @"C:\temp\test.txt"; // 경로를 입력할때는 @"경로"를 이용하자
            Console.WriteLine(path1);
            Console.WriteLine(path2);

        }
    }
}
