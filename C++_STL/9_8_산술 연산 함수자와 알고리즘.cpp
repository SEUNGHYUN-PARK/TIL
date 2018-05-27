#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	vector<int> v3(5);//size:5인 vector생성

	transform(v.begin(), v.end(), v2.begin(), v3.begin(), plus<int>());
	cout << "v3(v1+v2) : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	transform(v.begin(), v.end(), v2.begin(), v3.begin(), multiplies<int>());
	cout << "v3(v1*v2) : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	transform(v.begin(), v.end(), v3.begin(), negate<int>());
	cout << "v3(-v1) : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	adjacent_difference(v.begin(), v.end(), v3.begin(), minus<int>());
	cout << "v3(v1 인접 원소와의 차) : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	partial_sum(v.begin(), v.end(), v3.begin(), multiplies<int>());
	cout << "v3(v1인접원소와의 차) : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	cout << "v1 모든 원소의 곱 : " << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;

	return 0;
}