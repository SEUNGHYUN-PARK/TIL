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
	v2.push_back(40);

	vector<int> v3(10);//size 10인 vector생성

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	cout << "v2 : ";
	for (vector<int>::size_type i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;
	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

	cout << "===========================================" << endl;
	vector<int>::iterator iter;

	//v1순차열과 v2의 순차열을 합병하여 [v3.begin(),v3.end())의 순차열에 저장
	iter =  merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	cout << "v2 : ";
	for (vector<int>::size_type i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;
	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	cout << endl;

}