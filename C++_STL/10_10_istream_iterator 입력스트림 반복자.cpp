#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void)
{
	vector<int> v;
	//표준입력 스트림에서 정수를 입력받아 v에 저장
	//copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int>>(v)); //벡터라서 뒤만가능
/*
	cout << "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
*/
	//정수의 스트림 끝(Ctrl_D)까지 입력받아 화면에 출력
	copy(istream_iterator<int>(cin),istream_iterator<int>(),ostream_iterator<int>(cout," "));

	return 0;
}
