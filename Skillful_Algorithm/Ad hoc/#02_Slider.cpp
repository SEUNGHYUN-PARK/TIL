// O(N)�˰��� �ð��� Ÿ��ã��

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
			cout << "�μ��� ������ �� �Է��� ���� ��������� �� ���� ã�ҽ��ϴ�. : " << arr1[i] << ", " << arr2[j] << "\n";
			break;
		}
		else if (i >= (sizeof(arr1)/4 - 1) || j<=0)
		{
			cout << "�μ��� ������ �� �Է��� ���� ������ ���� ã�� �� �����ϴ�.\n";
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
