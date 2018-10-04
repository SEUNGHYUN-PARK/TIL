// O(N)알고리즘 시간에 타겟찾기

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr1[] = { 1,3,5,9,12,13,15,20 };
	int arr2[] = { 2,7,8,10,11,14,16,17 };

	int n;

	cin >> n;
	int i = 0, j = sizeof(arr2)/4 - 1;

	while (true)
	{
		if (arr1[i] + arr2[j] == n)
		{
			cout << "두수를 더했을 때 입력한 값이 만들어지는 두 수를 찾았습니다. : " << arr1[i] << ", " << arr2[j] << "\n";
			break;
		}
		else if (i >= (sizeof(arr1)/4 - 1) || j<=0)
		{
			cout << "두수를 더했을 때 입력한 값이 나오는 값을 찾을 수 없습니다.\n";
			break;
		}
		else
		{
			if (arr1[i] + arr2[j] > n)
			{
				j--;
			}
			else if (arr1[i] + arr2[j] < n)
			{
				i++;
			}
		}
			
	}
}
