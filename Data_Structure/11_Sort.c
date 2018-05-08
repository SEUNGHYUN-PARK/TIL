#include <stdio.h>

int arr1[10] = { -1,-3,4,5,1,0,9,7,8,6 };
int arr2[10] = { 3,2,4,5,1,0,9,7,8,6 };
int arr3[10] = { 3,2,4,5,1,0,9,7,8,6 };
int arr4[10] = { 3,2,4,5,1,0,9,7,8,6 };
int arr5[10] = { 3,2,4,5,1,0,9,7,8,6 };
int arr6[10] = { 3,2,4,5,1,0,9,7,8,6 };

void print_array(int *arr)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void selection_sort() // ���� ���� ���� ã�� �� �տ� �ִ� ����
{
	for (int i = 0; i < 10; i++)
	{
		int minidx = i;
		for (int j = i; j < 10; j++)
		{
			if (arr1[j] < arr1[minidx])
			{
				minidx = j;
			}
		}
		swap(&arr1[i], &arr1[minidx]);
	}
}
void insertion_sort() // i��° ���ڸ� �̰�, i��° ���ڰ� i-1���� 0��°���� ���ǿ� �´� �ڸ� ã�� ����, �̰� ���ǿ� ���������� ���� �׵��� �ڷδٹ̷�� �� ��ġ�� �ִ� �˰���
{
	for (int i = 1; i < 10; i++)
	{
		int temp = arr2[i];
		int j;
		for (j = i-1; j >= 0 && temp<arr2[j]; j--)
		{
			arr2[j + 1] = arr2[j];
		}
		arr2[j + 1] = temp;
	}
}
void bubble_sort()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr4[j] > arr4[j + 1])
				swap(&arr4[j], &arr4[j + 1]);
		}
	}
}
void go_shall_sort(int start, int last, int gap)
{
	for (int i = start + gap; i <= last; i = i + gap)// i�������� Ư�� ���� ������ ������ ��� ������ ���� �����鼭
	{
		int temp = arr3[i];
		int j;
		for (j = i - gap; j >= start && arr3[j] > temp; j -= gap)//�տ� �ִ� �͵��� �ڷ� ���ʷ� ä������
		{
			arr3[j + gap] = arr3[j];
		}
		arr3[j + gap] = temp;
	}
}
void go_setting_gap()
{
	int arrsize = sizeof(arr3) / 4;
	for (int gap = arrsize / 2; gap > 0; gap /= 2)
	{
		if (gap % 2 == 0)gap++; // ���Ŀ� ���� 1�� ����������ϱ⶧����
		for (int i = 0; i < gap; i++)
		{
			go_shall_sort(i,arrsize-1,gap);
		}
	}
}
void shall_sort()
{
	go_setting_gap();
}
void merge(int start, int mid, int end) // ��ġ�� ����
{
	int i = start;
	int j = mid + 1;
	int cursor = start;
	int temp[10];
	while (i <= mid&&j <= end) // �� �κ����� ���� ������ �迭 2������ ���� �������鼭 �ӽù迭�� ����
	{
		if (arr5[i] > arr5[j])
		{
			temp[cursor++] = arr5[j++];
		}
		else
		{
			temp[cursor++] = arr5[i++];
		}
	}
	if (i > mid) // ��� �� ������ �迭�� ���������� ���� �����͵��� �״�� �Ű��ָ�ȴ�.
	{
		for(int l=j;l<=end;l++)
			temp[cursor++] = arr5[l];
	}
	else
	{
		for(int l=i;l<=mid;l++)
			temp[cursor++] = arr5[l];
	}
	for (int l = start; l<= end; l++) // ��ŸƮ���� ���������� �ӽù迭�� ���� �Ű��ش�.
	{
		arr5[l] = temp[l];
	}
}
void merge_sort(int start, int end) //��� ������ �ɰ����鼭 ��������
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge_sort(start, mid);
		merge_sort(mid + 1, end);
		merge(start, mid, end);

	}
}
int partition(int start, int end)
{
	int pivot=arr6[start], low=start, high=end;
	while (low < high)
	{
		while (arr6[low] < pivot)
			low++;
		while (arr6[high] > pivot)
			high--;
		if (low < high) swap(&arr6[low], &arr6[high]);

	}
	arr6[low] = arr6[high];
	arr6[high] = pivot;
	return high;

}
void quick_sort(int start, int end)
{
	if (start < end)
	{
		int pivot = partition(start, end);
		quick_sort(start, pivot);
		quick_sort(pivot + 1, end);
	}
}
int main(void)
{
	selection_sort();
	insertion_sort();
	shall_sort();
	bubble_sort();
	merge_sort(0,sizeof(arr5)/4-1);
	quick_sort(0,sizeof(arr6)/4-1);

	print_array(arr1);
	print_array(arr2);
	print_array(arr3);
	print_array(arr4);
	print_array(arr5);
	print_array(arr6);

}