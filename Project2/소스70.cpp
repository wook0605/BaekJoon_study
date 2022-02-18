// 4949 ±ÕÇüÀâÈù¼¼»ó
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	stack<pair<char, int>> big_stk;
	stack<pair<char, int>> small_stk;
	bool NVSP = false;
	bool only_string = true;
	getline(cin, s);
	while (s[0] != '.')
	{
		for (int iter = 0; iter < s.size(); iter++)
		{
			if (s[iter] == '(')
			{
				small_stk.push(pair<char, int>(s[iter], iter));
				only_string = false;
			}
			else if (s[iter] == ')')
			{
				if (small_stk.size() == 0)
				{
					NVSP = true;
					only_string = false;
					break;
				}
				if (big_stk.size() == 0)
				{
					only_string = false;
					small_stk.pop();
				}
				else
				{
					if (big_stk.top().second > small_stk.top().second)
					{
						only_string = false;
						NVSP = true;
						break;
					}
					only_string = false;
					small_stk.pop();
				}
				
			}
			else if (s[iter] == '[') 
			{
				big_stk.push(pair<char, int>(s[iter], iter));
				only_string = false;
			}
			else if (s[iter] == ']')
			{
				if (big_stk.size() == 0)
				{
					NVSP = true;
					only_string = false;
					break;
				}
				if (small_stk.size() == 0)
				{
					only_string = false;
					big_stk.pop();
				}
				else
				{
					if (small_stk.top().second > big_stk.top().second)
					{
						only_string = false;
						NVSP = true;
						break;
					}
					only_string = false;
					big_stk.pop();
				}
				
			}
		}
		if (small_stk.size() != 0 || big_stk.size() != 0) NVSP = true;
		if (only_string || !NVSP) cout << "yes" << "\n";
		else cout << "no" << "\n";
		NVSP = false;
		only_string = true;
		while (big_stk.size())
		{
			big_stk.pop();
		}
		while (small_stk.size())
		{
			small_stk.pop();
		}
		getline(cin, s);
	}
}