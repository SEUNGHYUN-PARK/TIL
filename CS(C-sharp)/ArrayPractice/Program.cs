using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace ArrayPractice
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             * 일차원 배열의 선언
             */

            int[] Arr = { 6, 7, 8, 9, 10 };
            int[] inputArr = new int[6];
            var temp1 = ReadLine();
            var temp2 = temp1.Split(' ');
            for (int i = 0; i < 6; i++)
            {
                inputArr[i] = int.Parse(temp2[i]);
                Write(inputArr[i] + " ");
            }
            for (int i = 0; i < Arr.Length; i++)
            {
                Write(Arr[i] + " ");
            }
            WriteLine(" ");
            /*
             * 이차원 배열의 선언
             * int[,] arr2 ...
             * 그 이후로도 같다
             * int [,,] arr3 , int[,,,] arr4
             * 결국 ','의 갯수 + 1이 배열의 차원을 의미
             */

            int[,] Arr2 = { { 0, 0, 0, 0 },
                            { 0, 0, 0, 0 },
                            { 0, 0, 0, 0}};

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    Write(Arr2[i, j] + " "); // 와 레알 끔찍한 혼종...
                }
                WriteLine();
            }

            int row = 4, col = 4;
            int[,] makeArr2 = new int[row, col];
            int k = 0;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    makeArr2[row, col] = k++;
                }
            }


            /*
             * 행마다 크기가 다른 배열의 선언
             */

            int[][] jongteukArr = new int[3][];
            //int start = 1;
            for (int i = 0; i < jongteukArr.Length; i++)
            {
                jongteukArr[i] = new int[3];
                //jongteukArr[i] = new int[start++]; 이러면 크기가 점점 증가함
            } // 이러면 3*3


            /*
             * 배열의 깊은 복사
             */
            int[] originalArr = { 1, 2, 3, 4, 5 };
            int[] cloneArr = (int [])originalArr.Clone(); // 일반적인 =로 복사를 해주면 그냥 같은 배열을 참조하게 되는 얕은복사의 개념이 적용되기때문에
                                                          // 깊은복사를 위해선 형변환과 함께 .Clone()를 이용해준다


        }
    }
}
