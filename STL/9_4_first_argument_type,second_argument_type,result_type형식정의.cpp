#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template <typename T>
struct Plus 
{
	typedef T first_argument_type;
	typedef T second_argument_type;
	typedef T result_type;

	T operator()(const T& left, const T& right) const
	{
		return left + right;
	}
};

int main(void)
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v3(3);//size 3인 vector생성
	//STL조건자 plus<int> 사용
	//transform(v1.begin(), v1.end(), v3.begin(),binder1st<plus<int>>(plust<int>(),100);
	//사용자 정의 조건자 Plus<int> 사용
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int>>(Plus<int>(), 100));
	//바꿔줄거면 그냥 통쨰로 바꿔야하네
	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	return 0;
}