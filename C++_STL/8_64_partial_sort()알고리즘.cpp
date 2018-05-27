#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	for (int i = 0; i < 100; i++)
		v.push_back(rand() % 1000);

	partial_sort(v.begin(), v.begin() + 20, v.end()); // 중간에서 끊어주는것이 포인트

	cout << "상위 20개 : ";
	for (vector<int>::size_type i = 0; i < 20; i++)
		cout << v[i] << " ";
	cout << endl;
	cout << "하위 80개 : ";
	for (vector<int>::size_type i = 20; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

}