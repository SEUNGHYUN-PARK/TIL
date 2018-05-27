#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10); // 같고
	v1.push_back(20); // 같고
	v1.push_back(30); // 같고
	v1.push_back(40); // 다르네
	v1.push_back(50); // 여기도

	vector<int> v2;
	v2.push_back(10); // 같고
	v2.push_back(20); // 같고
	v2.push_back(30); // 같고
	v2.push_back(80); //다른데
	v2.push_back(90); // 야기더

	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin(), v2.end());

	cout << "v1: " << *iter_pair.first << ", " << "v2 : " << *iter_pair.second << endl;

	return 0;
}