package com.javalec.ex; // helloJava 프로젝트안에 com\javalec\ex의 경로를 거치면 해당파일이있다.

import java.util.Scanner;
/*
    배열
    하나의 데이터만 가지고 있던 변수와 달리,
    여러 개의 데이터를 가지고 있는 요술주머니. 즉 여러 개의 변수를 모아놓은 또 하나의 요술주머니

    배열의 선언
    변수 선언과 거의 비슷, 여러 개의 데이터가 모여있어 {}를 이용
    배열의 크기는 최초에 한번 설정되면 변경이 불가
    변수 선언 : int i= 10;
    배열 선언
    #1. int[] arr = {10,20,30,40,50};
    #2. int[] arr = new int[5];

    배열의 메모리 구조 이해
    메모리에는 배열을 위한 공간이 만들어진다 하지만, 그 공간에는 데이터가 들어있지않다.
    대신 객체자료형처럼 데이터의 주소가들어있다. -> 레퍼런스라고 칭함
    다차원 배열역시 선언시 똑같이 진행해준다.
    int [][] marr =
*/

public class HelloJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {10,20,30,40,50};
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        int iArr[] = new int[5];
        for (int i = 0; i < iArr.length; i++) {
            iArr[i]=sc.nextInt();
        }

        for (int i = 0; i < iArr.length; i++) {
            System.out.print(iArr[i]+" ");
        }
        System.out.println();



        int[] test ={10,20,30,40,50};
        int[] test2= test;
        //지금 test2랑 test는 같은 주소를 공유하고있다.
        //따라서 한쪽의 변화가 일어나면 다른한쪽에도 변화가일어난다.

        for (int i = 0; i < test.length; i++) {
            System.out.print(test[i]+" ");
        }
        System.out.println();
        for (int i = 0; i < test2.length; i++) {
            System.out.print(test2[i]+" ");
        }
        // test,test2 둘다 10 20 30 40 50의 결과를 확인할 수 있음

        System.out.println();

        for (int i = 0; i < test.length; i++) {
            test[i]=i;
        } //test배열값을 0,1,2,3,4로 바꿔줌


        for (int i = 0; i < test.length; i++) {
            System.out.print(test[i]+" ");
        }
        System.out.println();
        for (int i = 0; i < test2.length; i++) {
            System.out.print(test2[i]+" ");
        }
        //하지만 두 배열 모두 같이 변함을 확인할 수 있음

        System.out.println();

        for (int i = 0; i < test2.length; i++) {
            test2[i]=10-i;
        }//그럼 이번에는 반대로 test2를 바꿔줌 10 9 8 7 6

        for (int i = 0; i < test.length; i++) {
            System.out.print(test[i]+" ");
        }
        System.out.println();
        for (int i = 0; i < test2.length; i++) {
            System.out.print(test2[i]+" ");
        }
        System.out.println();
        //하지만 두 배열 모두 10 9 8 7 6 으로 값이 변경

        int [][]marr = new int[3][];
        for (int i = 0; i < marr.length; i++) {
            marr[i]=new int[i+1];
        }

        for (int i = 0; i < marr.length; i++) {
            for (int j = 0; j < marr[i].length; j++) {
                marr[i][j]=i+j;
            }
        }

        for (int i = 0; i < marr.length; i++) {
            for (int j = 0; j < marr[i].length; j++) {
                System.out.print(marr[i][j]+" ");
            }
            System.out.println();
        }

        // 이러면 3개의 행이 있는 배열이 만들어지고 0행의 경우 1열 1행의 경우 2열 3행의 경우 3열이 동적으로 할당된다.

        int mmarr[][] = new int[3][5];
        for (int i = 0; i < mmarr.length; i++) {
            for (int j = 0; j < mmarr[i].length; j++) {
                mmarr[i][j]=i+j;
            }
        }
        for (int i = 0; i < mmarr.length; i++) {
            for (int j = 0; j < mmarr[i].length; j++) {
                System.out.print(mmarr[i][j]+" ");
            }
            System.out.println();
        }
    }

}
