#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool Pred(int n)
{
	return 30 <= n&&n <= 40;
}
int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v: ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	cout << "30이상 40이하인 원소개수 : " << count_if(v.begin(), v.end(), Pred);
	//다음은 에러다. not1은 어뎁터로 함수 객체에 argument_type,result_type가 정의되어있어야함!
	cout << "30이상 40이하가 아닌 원소 갯수 : " << count_if(v.begin(), v.end(), not1(Pred)) << endl;

	return 0;
}