// 1181 단어정렬
//짧은순, 사전순
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length()) return a < b; // a 와 b 의 문자열 길이가 같을 때, a 와 b를 사전순으로 비교한 값을 return (True or False)
	else return a.length() < b.length(); //문자열 길이가 같지 않으면, 문자열 길이가 짧은것이 앞으로
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