#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void)
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;

	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;

	cout << "v2 : ";
	for (vector<int>::size_type i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;

	//구간[v1.being(),v1.end())와 구간 [v2.begin(),v2.begin()+2)을 비교
	if (equal(v1.begin(), v1.end(), v2.begin()))
		cout << "두 순차열은 같습니다." << endl;
	return 0;



}