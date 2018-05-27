#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main(void)
{
	less<int> oLess;
	binary_negate<less<int>> negate = not2(less<int>());
	cout << negate(5, 10) << ":" << not2(oLess)(5, 10) << ":" << not2(less<int>())(5, 10) << endl; // 모두 같다.
	cout << negate(10, 10) << ":" << not2(oLess)(10, 10) << ":" << not2(less<int>())(10, 10) << endl;// 모두같다
	cout << negate(20, 10) << ":" << not2(oLess)(20, 10) << ":" << not2(less<int>())(20, 10) << endl; //모두 같다

	//책에는 개소리처럼 나왔는데
	//그니까 원래는 5가 10보다 작니? -> true ->1이잖아
	//근데 이 자체를 negate 즉 부정하면 false 가되므로 0이된다 생각하면되
}