#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);

	cout << "v���� : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//���� ���� ���� less ��� 
	sort(v.begin(), v.end());
	//sort(v.begin(), v.end(), less<int>());
	cout << " [v: less ����] : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout<<v[i]<<" ";
	cout << endl;

	//�� ������ ����(�Ϲ� ���� binary_search()���� )
	cout << "�� less ã�� : " << binary_search(v.begin(), v.end(), 20, less<int>()) << endl;

	//���� ���� greater���� 
	sort(v.begin(), v.end(), greater<int>());
	cout << "[v:greater ����] : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	//������ ���� ���� greater ����
	cout << "�� greater ã�� : " << binary_search(v.begin(), v.end(), 20, greater<int>()) << endl;

	return 0;

}