#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	vector<int>::iterator iter;
	//구간 v.begin(),v.end()에서 현재원소와 다음 원소가 같아지는 첫 원소 반복자를 반환
	iter = adjacent_find(v.begin(), v.end());
	if (iter != v.end())
		cout << *iter << endl;

	for (; iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;

}