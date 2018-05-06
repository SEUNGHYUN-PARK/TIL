#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int *pi;
	pi = (int *)malloc(sizeof(int));

	*pi = 7; // *변수안에는 주소가 들어있고 해당주소의 데이터값을 포인터를 통해 바꾸고 싶으면 *를 이용한다.
	printf("%d\n", *pi);
	free (pi);
}