#include <iostream>
#include <functional>
using namespace std;

template <typename T>
struct Less :public binary_function<T, T, bool> // 어뎁터 적용이 가능하게
{
	T operator()(const T& left, const T& right)
	{
		return left + right;
	}
};

int main(void)
{
	Less<int> oLess;
	cout << oLess(10, 20) << endl;
	cout << oLess.operator()(10, 20) << endl;

	cout << Less<int>()(10, 20) << endl;
	cout << Less<int>().operator()(10, 20) << endl;
	return 0;

}