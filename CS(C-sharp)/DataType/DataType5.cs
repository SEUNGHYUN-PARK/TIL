using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
namespace DataType
{
    class DataType5
    {
        /*
         * 초간단 값 형식과 참조 형식의 차이점
         * 값형식 -> 복사
         * 참조형식 -> 지정
         * 
         * 값형식 : 기본데이터형, struct, enum;
         * 참조형식 : class, interface, delegate,배열,string
         * 
         * 
         */
        static void Main(string[] args)
        {
            int[] arr = {1,2,3,4,5}; // 배열은 참조 형식형이다.
            int[] temp = arr;
           
            for (int i = 0; i < arr.Length; i++)
            {
                Write(arr[i]+" ");
            }
            WriteLine();
            for (int i = 0; i < temp.Length; i++)
            {
                Write(temp[i]+" ");
            }
            WriteLine();


            temp[3] = 7;

            for (int i = 0; i < arr.Length; i++)
            {
                Write(arr[i] + " ");
            }
            WriteLine();
            for (int i = 0; i < temp.Length; i++)
            {
                Write(temp[i] + " ");
            }
            WriteLine();


        }

    }
}
