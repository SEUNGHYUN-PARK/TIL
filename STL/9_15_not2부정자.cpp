#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main(void)
{
	less<int> oLess;
	binary_negate<less<int>> negate = not2(less<int>());
	cout << negate(5, 10) << ":" << not2(oLess)(5, 10) << ":" << not2(less<int>())(5, 10) << endl; // ��� ����.
	cout << negate(10, 10) << ":" << not2(oLess)(10, 10) << ":" << not2(less<int>())(10, 10) << endl;// ��ΰ���
	cout << negate(20, 10) << ":" << not2(oLess)(20, 10) << ":" << not2(less<int>())(20, 10) << endl; //��� ����

	//å���� ���Ҹ�ó�� ���Դµ�
	//�״ϱ� ������ 5�� 10���� �۴�? -> true ->1���ݾ�
	//�ٵ� �� ��ü�� negate �� �����ϸ� false ���ǹǷ� 0�̵ȴ� �����ϸ��
}