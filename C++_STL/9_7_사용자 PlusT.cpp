#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template<typename T>
struct Plus :public binary_function<T, T, T> // 어뎁터 적용이 가능하게
{
	T operator()(const T& left, const T& right)
	{
		return left + right;
	}
};
int main(void)
{
	Plus<int> oPlus;
	cout << oPlus(10, 20) << endl;
	cout << oPlus.operator()(10, 20) << endl;

	cout << Plus<int>()(10, 20) << endl;
	cout << Plus<int>().operator()(10, 20) << endl;
}