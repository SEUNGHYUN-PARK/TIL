//1인 비트를 세기
//비트들을 더하면서 접어 나가는 방법
//한 연산으로 작은 수의 비트 더하기 여러 개를 동시에 할 수 있다.
//
#include <iostream>
#define endl '\n';
using namespace std;

int HammingWeight_slow(unsigned x) // 32*5번의 연산과정을 거치기 때문에 느리다
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

unsigned int HammingWeight(unsigned x) // 이해가 안된다... ㅠㅜㅜ 누가 코멘트좀 달아주세여
{
	x -= ((x >> 1) & 0x55555555); // 2의 보수를 이용한 연산 줄이기 -> 0101 0101 0101 0101 0101 0101 0101 0101
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