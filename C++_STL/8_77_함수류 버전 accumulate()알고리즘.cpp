#include <iostream>
#include <vector>
#include <numeric>
//#include <functional>
using namespace std;

template <typename T>
struct Plus
{
	T operator()(const T& left, const T& right)
	{
		return left + right;
	}
};
int main(void)
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//사용자 함수자 합 연산자 0+1+2+3+4+5
	cout << accumulate(v.begin(), v.end(), 0, Plus<int>()) << endl;
	//plus합 연산  0+1+2+3+4+5
	cout << accumulate(v.begin(), v.end(), 0, plus<int>())<<endl;
	//multiplies 곱 연산 1*2*3*4*5
	cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;
	//누적한다는거지 이거를 무조건 더하는게 아니구나! 곱하기를 하려면 저렇게  multiplies<int>()를 패러미터로 넘기면되는구나

	return 0;


}