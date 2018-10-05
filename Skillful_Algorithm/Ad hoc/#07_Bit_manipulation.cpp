//1�� ��Ʈ�� ����
//��Ʈ���� ���ϸ鼭 ���� ������ ���
//�� �������� ���� ���� ��Ʈ ���ϱ� ���� ���� ���ÿ� �� �� �ִ�.
//
#include <iostream>
#define endl '\n';
using namespace std;

int HammingWeight_slow(unsigned x) // 32*5���� ��������� ��ġ�� ������ ������
{
	unsigned total = 0, mask = 1;
	while (mask != 0)
	{
		if ((x& mask) != 0)
		{
			total++;
		}
		mask <<= 1;
	}
	return total;
}

int HammingWeight_nice(unsigned x)
{
	int total = 0;
	while (x != 0)
	{
		x &= x - 1;
		total++;
	}
	return total;
}




unsigned int unoptimized_HammingWeight(unsigned x) //
{
	x = (x & 0x55555555) + ((x >> 1) & 0x55555555);
	x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
	x = (x & 0x0f0f0f0f) + ((x >> 4) & 0x0f0f0f0f);
	x = (x & 0x00ff00ff) + ((x >> 8) & 0x00ff00ff);
	x = (x & 0x0000ffff) + ((x >> 16) & 0x0000ffff);
	return x;

}

unsigned int HammingWeight(unsigned x) // ���ذ� �ȵȴ�... �Ф̤� ���� �ڸ�Ʈ�� �޾��ּ���
{
	x -= ((x >> 1) & 0x55555555); // 2�� ������ �̿��� ���� ���̱� -> 0101 0101 0101 0101 0101 0101 0101 0101
	x = (((x >> 2) & 0x33333333) + (x & 0x33333333)); // 0011 0011 0011 0011 0011 0011 0011 0011
	x = (((x >> 4) + x) & 0x0f0f0f0f); // 0000 1111 0000 1111 0000 1111 0000 1111
	x += (x >> 8);
	x += (x >> 16);
	return (x & 0x0000003f);
}

int main(void)
{
	unsigned int n;
	ios_base::sync_with_stdio(false);
	cin >> n;
	cout << HammingWeight_slow(n) << endl;
	cout << HammingWeight_nice(n) << endl;
	cout << HammingWeight(n)<< endl;
	cout << unoptimized_HammingWeight(n) << endl;
}