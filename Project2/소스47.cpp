// 1181 �ܾ�����
//ª����, ������
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length()) return a < b; // a �� b �� ���ڿ� ���̰� ���� ��, a �� b�� ���������� ���� ���� return (True or False)
	else return a.length() < b.length(); //���ڿ� ���̰� ���� ������, ���ڿ� ���̰� ª������ ������
}

int main()
{
	int N = 0;
	cin >> N;
	vector<string>str;
	string s;


	for (int i = 0; i < N; i++)
	{
		cin >> s;
		str.push_back(s);
	}
	stable_sort(str.begin(), str.end(), cmp);

	for (int i = 0; i <N; i++)
	{
		for (int j = i+1; j <N; j++)
		{
			if (str[i].compare(str[j]) == 0)
			{
				str[i] = "#";
				break;
			}
			else
			{
				break;
			}
		}
	}

	for (int i = 0; i <N; i++)
	{
		if (str[i] == "#") continue;
		else cout << str[i] << "\n";
	}
}