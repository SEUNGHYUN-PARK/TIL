#include <iostream>
using namespace std;

template <typename T, int size>
void printArray(T*arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "]" << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	int arr1[5] = { 10,20,30,40,50 };
	printArray<int, 5>(arr1);


	double arr2[3] = { 1.1,2.2,3.3 };
	printArray<double, 3>(arr2);

	return 0;
}