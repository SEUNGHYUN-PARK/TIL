#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
	//queue <int, list<int>> q;
	
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);

	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}