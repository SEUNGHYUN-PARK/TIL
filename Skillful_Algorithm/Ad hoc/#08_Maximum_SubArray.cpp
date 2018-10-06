//A[i]에서 끝나는 가장 큰 합을 안다면
//A[i+1]에서 끝나는 가장 큰 합을 알 수 있다
//단 합이 음수이면 잘 정리가 안된다

#include <iostream>
using namespace std;

int main(void)
{
	int A[] = { 1,-3,2,4,-1,5,-3 };
	int S[7] = { 0, }; //A[i]에서 끝나는 가장 큰 합, S[0] = 0
	for (int i = 1; i < 7; i++)
	{
		if (S[i - 1] + A[i] <= 0)
			S[i] = 0;
		else if (S[i - 1] + A[i] > 0)
			S[i] = S[i - 1] + A[i];
	}
}
