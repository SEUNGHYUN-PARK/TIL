#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 20); //[begin,end)에서 20찾기
	cout << *iter << endl;

	iter = find(v.begin(), v.end(), 100); // [begin,end)에서 100찾기
	if (iter == v.end()) // 100이없으면, iter==v.end();
		cout << "100이없음" << endl;

	return 0;


}