#include <iostream>
using namespace std;

//begin�� �迭�� �����ּ�, end�� �迭�� ���ּ�
//void(*pf)(int)�� Ŭ���̾�Ʈ �Լ� �������Դϴ�.

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