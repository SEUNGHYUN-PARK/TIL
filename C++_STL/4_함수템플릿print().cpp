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
	For_each(sarr, sarr + 3, print<string>); // 출력함수의 템플릿 매개변수를 컴파일러가 유추할 수 없기때문에 명시적으로 매개변수 인지 지정
	cout << endl;
}