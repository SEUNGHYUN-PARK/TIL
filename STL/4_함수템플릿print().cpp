#include <iostream>
#include <string>
using namespace std;

template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf)
{
	while (begin != end)
	{
		pf(*begin++);
	}
}
template<typename T>
void print(T data)
{
	cout << data << " ";
}
int main()
{
	int arr[5] = { 10,20,30,40,50 };
	For_each(arr, arr + 5, print<int>);
	cout << endl;

	string sarr[3] = { "abc","ABC","Hello!" };
	For_each(sarr, sarr + 3, print<string>); // ����Լ��� ���ø� �Ű������� �����Ϸ��� ������ �� ���⶧���� ��������� �Ű����� ���� ����
	cout << endl;
}