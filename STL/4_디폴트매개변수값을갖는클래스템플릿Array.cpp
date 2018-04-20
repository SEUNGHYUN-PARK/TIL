#include <iostream>
#include <string>
using namespace std;

template<typename T=int, int capT = 100>//int,100 디폴트 매개변수 값 지정
class Array
{
	T *buf;
	int size;
	int capacity;
public:
	explicit Array(int cap = capT) :buf(0), size(0), capacity(cap)
	{
		buf = new T[capacity];
	}
	~Array()
	{
		delete[] buf;
	}
	void Add(T data)
	{
		buf[size++] = data;
	}
	T operator[](int idx)
	{
		return buf[idx];
	}
	int GetSize()
	{
		return size;
	}
};

int main()
{
	Array<>iarr;
	iarr.Add(10);
	iarr.Add(20);
	iarr.Add(30);

	for (int i = 0; i < iarr.GetSize(); i++)
		cout << iarr[i] << " ";
	cout << endl;

	Array<double> darr;
	darr.Add(10.12);
	darr.Add(20.12);
	darr.Add(30.12);

	for (int i = 0; i < darr.GetSize(); i++)
	{
		cout << darr[i] << " ";
	}
	cout << endl;

	Array<string, 10> sarr;
	sarr.Add("abc");
	sarr.Add("ABC");
	sarr.Add("Hello");

	for (int i = 0; i < sarr.GetSize(); i++)
	{
		cout << sarr[i] << " ";
	}
	cout << endl;
}