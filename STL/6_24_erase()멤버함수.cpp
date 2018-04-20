#include <iostream>
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

	vector<int>::iterator iter;
	vector<int>::iterator iter2;

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl; // 10 20 30 40 50

	iter = v.begin() + 2; // 30
	//iter가 가리키는 위치의 원소를 제거, iter2는 다음원소 40
	iter2 = v.erase(iter); //10 20 40 50

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;// 10 20 40 50

	//v.begin()+1, v.end() 구간의 원소를 제거
	iter2 = v.erase(v.begin() + 1, v.end()); // iter2는 다음원소 v.end()
	//[20,50)까지 원소 삭제

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	//10;
	return 0;
}
