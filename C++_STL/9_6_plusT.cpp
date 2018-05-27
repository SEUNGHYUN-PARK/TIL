#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	plus<int> oPlus;
	//1. oplus객체로 10,20더하기 ,암묵적 호출
	cout << oPlus(10, 20) << endl;
	//2.oPlus객체로 10,20 더하기 , 명시적 호출
	cout << oPlus.operator()(10, 20) << endl;
	//3. 임시 객체로 10, 20더하기 암묵적 호출(일반적인 사용)
	cout << plus<int>()(10, 20) << endl;
	//4. 임시 객체로 10, 20 더하기 명시적 호출
	cout << plus<int>().operator()(10, 20) << endl;

}