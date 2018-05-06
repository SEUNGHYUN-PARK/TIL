#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int a = 10; // int형 데이터 값을 a에 저정한다.
	int b = 20;
	printf("%d %x\n%d %x\n", a, &a, b, &b);
	int* p = &a; // int형 데이터의 주소를 저장하는 공간
	p = &b; // 데이터의 주소가 b로 바뀜
	*p = 10; // 현재 포인터변수가 b를 가리켰는데 가리킨 b의 변수값을 10으로 바꾼다.
	printf("%d %x\n%d %x\n", a, &a, b, &b);
	p = &a;
	*p = 20;
	printf("%d %x\n%d %x\n", a, &a, b, &b);

}