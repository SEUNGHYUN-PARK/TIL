#include <stdio.h>

int arr[10] = { 0,1,2,3,4,5,6,7,8,9 }; // If you want to find target data using binary_search, Dataset must be sorted.
int target;
void recursion_go(int first, int last)
{
	int mid = (first + last) / 2;
	if (arr[mid] == target) // target find
	{
		printf("Target %d Find!, Target Index %d\n", arr[mid], mid);
		return;
	}
	else if (first == last && arr[mid] != target)
	{
		printf("Target %d couldn't Find!\n", target);
		return;
	}
	if (arr[mid] > target) recursion_go(first, mid - 1);
	else recursion_go(mid + 1, last);
}
void loop_go(int first, int last)
{
	while (first <= last)
	{
		int mid = (first + last) / 2;
		if (arr[mid] == target)
		{
			printf("Target %d Find!, Target Index %d\n", arr[mid], mid);
			break;
		}
		else if (first == last && arr[mid] != target)
		{
			printf("Target %d couldn't Find!\n", target);
			break;
		}
		if (arr[mid] > target) last = mid - 1;
		else first = mid + 1;

	}
}
int main(void)
{
	
	scanf("%d", &target);

	recursion_go(0, sizeof(arr)/4-1); // recursion;
	loop_go(0, sizeof(arr) / 4 - 1);

}
