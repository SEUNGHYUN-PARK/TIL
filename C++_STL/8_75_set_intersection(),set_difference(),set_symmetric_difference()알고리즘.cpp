#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(60);

	vector<int> v3(10); // size 10인 vector 생성
	vector<int>::iterator iter_intersection;
	vector<int>::iterator iter_difference;
	vector<int>::iterator iter_sym_difference;

	iter_intersection = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	cout << "교집합[v3.begin(),iter) : ";
	for (vector<int>::iterator iter = v3.begin(); iter != iter_intersection; iter++)
		cout << *iter << " ";
	cout << endl;

	iter_difference = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	cout << "차집합[v3,begin(),iter_dif)";
	for (vector<int>::iterator iter = v3.begin(); iter != iter_difference; iter++)
		cout << *iter << " ";
	cout << endl;

	iter_sym_difference = set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	cout << "대칭차집합[v3.begin(),iter_sym)";
	for (vector<int>::iterator iter = v3.begin(); iter != iter_sym_difference; iter++)
		cout << *iter << " ";
	cout << endl;

}