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
void selection_sort() // 가장 작은 값을 찾아 맨 앞에 넣는 정렬
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
void insertion_sort() // i번째 숫자를 뽑고, i번째 숫자가 i-1부터 0번째까지 조건에 맞는 자릴 찾는 정렬, 뽑고 조건에 맞을때까지 앞의 항들을 뒤로다미루고 그 위치에 넣는 알고리즘
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
	for (int i = start + gap; i <= last; i = i + gap)// i번쨰에서 특정 갭을 더해준 값부터 계속 갭들을 더해 나가면서
	{
		int temp = arr3[i];
		int j;
		for (j = i - gap; j >= start && arr3[j] > temp; j -= gap)//앞에 있는 것들을 뒤로 차례로 채워간다
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
		if (gap % 2 == 0)gap++; // 최후엔 간격 1씩 정렬해줘야하기때문에
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
void merge(int start, int mid, int end) // 합치는 과정
{
	int i = start;
	int j = mid + 1;
	int cursor = start;
	int temp[10];
	while (i <= mid&&j <= end) // 두 부분으로 나뉜 가상의 배열 2개에서 서로 따져가면서 임시배열에 저장
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
	if (i > mid) // 어느 한 가상의 배열이 끝까지가면 남은 데이터들을 그대로 옮겨주면된다.
	{
		for(int l=j;l<=end;l++)
			temp[cursor++] = arr5[l];
	}
	else
	{
		for(int l=i;l<=mid;l++)
			temp[cursor++] = arr5[l];
	}
	for (int l = start; l<= end; l++) // 스타트부터 끝지점까지 임시배열의 값을 옮겨준다.
	{
		arr5[l] = temp[l];
	}
}
void merge_sort(int start, int end) //계속 반으로 쪼개가면서 정렬해줌
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