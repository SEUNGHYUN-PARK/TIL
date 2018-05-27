#include <iostream>
#include <functional>
using namespace std;

int main(void)
{
	//less�� �ι�° ���ڸ� 10���� ������ ���� ������ binder����
	//bind1st�� bind2nd�� ù��° ���� ������ ������, �ι�° ���� ������ �������� �ٸ��� ��� ����� ����.
	binder2nd<less<int>> binder = bind2nd(less<int>(), 10);

	//binder�� �� ��° ���ڸ� 10���� ������ less
	cout << binder(5) << ":" << less<int>()(5, 10) << endl;
	//�� ������ ����.
	cout << binder(10) << ":" << less<int>()(10, 10) << endl;
	//�� ������ ����.
	cout << binder(20) << ":" << less<int>()(20, 10) << endl;
	//�� ������ ����.
	cout << "=====���� ����=====" << endl;
	//�ӽð�ü���
	cout << bind2nd(less<int>(), 10)(5) << ":" << less<int>()(5, 10) << endl;
	cout << bind2nd(less<int>(), 10)(10) << ":" << less<int>()(10, 10) << endl;
	cout << bind2nd(less<int>(), 10)(20) << ":" << less<int>()(20, 10) << endl;
	return 0;

}