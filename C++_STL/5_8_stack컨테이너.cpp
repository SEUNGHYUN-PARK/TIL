#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty())
		cout << "stack이 비었습니다\n";
	return 0;
}