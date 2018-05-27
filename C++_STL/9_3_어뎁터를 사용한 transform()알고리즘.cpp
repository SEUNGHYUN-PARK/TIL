#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template <typename T>
struct Plus
{
	T operator()(const T& left, const T& right) const
	{
		return left + right;
	}
};

int main(void)
{
	vector < int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int>v3(3); // size: 3인 vector생성
	//STL조건자 plus<int>()사용
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int>>(plus<int>(), 100));
	//사용자 정의 조건자 Plus<int> 사용
	//transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int>>(Plus<int>(), 100));
	//거의 대동소이하다
	//v1원소들을 binder1st에 넣어서 즉, 어뎁터가 바로 이런거일까..?
	//binder1st<plus<int>>(plus<int>(),100)

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