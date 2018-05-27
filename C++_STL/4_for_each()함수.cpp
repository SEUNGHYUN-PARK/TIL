#include <iostream>
using namespace std;

//begin은 배열의 시작주소, end는 배열의 끝주소
//void(*pf)(int)는 클라이언트 함수 포인터입니다.

void for_each(int *begin, int *end, void(*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++);
	}
}
void printint(int n)
{
	cout << n << " ";
}
int main()
{
	int arr[5] = { 10,20,30,40,50 };
	for_each(arr, (arr + 5), printint);
	cout << endl;
}