#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int> v2(v.begin(), v.end());
	//순차열 [v.begin(),v.end());로 v2를 초기화.

	vector<int>::iterator iter;
	for (iter = v2.begin(); iter != v2.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	vector<int> v3;
	v3.assign(v.begin(), v.end());
	for (vector<int>::iterator iter2 = v3.begin(); iter2 != v3.end(); iter2++)
		cout << *iter2 << " ";
	cout << endl;
}