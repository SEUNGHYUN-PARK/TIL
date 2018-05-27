#include <iostream>
#include <algorithm>
using namespace std;

void print1(int n)
{
	cout << n << ' ';
}
void print2(int n)
{
	cout << n*n << " ";
}
void print3(int n)
{
	cout << "정수 : " << n << endl;
}
int main()
{
	int arr[5] = { 10,20,30,40,50 };

	for_each(arr, arr + 5, print1); // 시작지점,끝지점,함수적용할거
	cout << endl << endl;
	for_each(arr, arr + 5, print2);
	cout << endl << endl;
	for_each(arr, arr + 5, print3); //시작지점부터, 끝지점까지 각각 함수를 적용시켜줘 이런느낌?
	cout << endl << endl;

}