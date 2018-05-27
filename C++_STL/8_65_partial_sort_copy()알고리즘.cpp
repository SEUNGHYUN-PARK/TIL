#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void) 
{
	vector<int> v1;
	for (int i = 0; i < 100; i++)
		v1.push_back(rand() % 1000);
	cout << "v1 정렬 전 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;

	vector<int> v2(20); //size : 20의 vector생성

	partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end());
	cout << "v2 정렬 후 less : ";
	for (vector<int>::size_type i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;

	partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>());
	cout << "v2 정렬후 greater : ";
	for (vector<int>::size_type i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;

	return 0;
}