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
	cout << "���� : " << n << endl;
}
int main()
{
	int arr[5] = { 10,20,30,40,50 };

	for_each(arr, arr + 5, print1); // ��������,������,�Լ������Ұ�
	cout << endl << endl;
	for_each(arr, arr + 5, print2);
	cout << endl << endl;
	for_each(arr, arr + 5, print3); //������������, ���������� ���� �Լ��� ��������� �̷�����?
	cout << endl << endl;

}