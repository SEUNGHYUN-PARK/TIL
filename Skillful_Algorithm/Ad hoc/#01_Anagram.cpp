//letter counter array �̿�
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2;
	cin >> s1 >> s2;
	int alphabet[26] = {0,};
	bool flag = true;
	for (int i = 0; i < s1.size(); i++)
	{
		alphabet[s1[i] - 'a']++;
	}
	for (int i = 0; i < s2.size(); i++)
	{
		if (alphabet[s2[i] - 'a'] <= 0)
		{
			flag = false;
			break;
		}
		else
		{
			alphabet[s2[i] - 'a']--;
		}
	}
	if (flag)
		cout << "�� �ܾ�� Anagram�����Դϴ�\n";
	else
		cout << "�� �ܾ�� Anagram���谡 �ƴմϴ�\n";

}