#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v1(5);

	v1.push_back(10); //0으로 초기화된 size가 5인 컨테이너
	v1.push_back(20); //10 추가
	v1.push_back(30); //20 추가
	v1.push_back(40); //30 추가
	v1.push_back(50); //40 추가

	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;

	vector<int> v2(5); //0으로 초기화된 size가 5인 컨테이너
	v2[0] = 10; //0에서 10으로 수정
	v2[1] = 20; //0에서 20으로 수정
	v2[2] = 30; //0에서 30으로 수정
	v2[3] = 40; //0에서 40으로 수정
	v2[4] = 50; //0에서 50으로 수정

	for (vector<int>::size_type i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;

	return 0;


}
