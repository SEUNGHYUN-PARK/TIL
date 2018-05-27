#include <iostream>
#include <functional>
using namespace std;

template<typename T>
struct Logical_and : public binary_function<T, T, bool> // 어뎁터 적용이 가능하게
{
	bool operator()(const T& left, const T& right)
	{
		return left + right;
	}
};

int main(void)
{
	int n = 30;
	logical_and<bool> oAnd;
	//1.oAnd객체로 10<n<50인가? true 암묵적 호출
	cout << oAnd(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	//2, oAnd객체로 10 <n < 50인가? true. 명시적호출
	cout << oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	//3. 임시객체로 10<n<50인가?true,암묵적호출(일반적인사용)
	cout << logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	//4. 임시객체로 10<n<50인가? true. 명시적 호출
	cout << logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;

}