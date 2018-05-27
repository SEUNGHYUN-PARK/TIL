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
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//vector<int>::iterator iter_upper, iter_lower;
	pair<vector<int>::iterator, vector<int>::iterator> pr;

	pr = equal_range(v.begin(), v.end(), 30);

	cout << "30원소의 순차열 [iter_lower,iter_upper) : ";
	for (vector<int>::iterator iter = pr.first; iter != pr.second; iter++)
		cout << *iter << " ";
	cout << endl;
	return 0;
}