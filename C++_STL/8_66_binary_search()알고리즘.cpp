#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	if (binary_search(v.begin(), v.end(), 20))
		cout << "20 찾음!! " << endl;
	else
		cout << "못 찾음 !" << endl;

	return 0;

}