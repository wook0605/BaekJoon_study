// 9012 °ýÈ£

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T = 0, left = 0, right = 0;
//	string s;
//	
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> s;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == '(') left++;
//			else right++;
//			if (left != 0 && right)
//			{
//				left -= 1;
//				right--;
//			}
//			if (!left && right) break;
//		}
//		if (left == right) cout << "YES" << "\n";
//		else cout << "NO" << "\n";
//		left = 0; right = 0;
//	}
//}

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	stack<char>stk;
	string s;
	int testcase = 0;
	bool VSP = false;

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		cin >> s;

		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '(')
			{
				stk.push(s[j]);
			}
			else if (s[j] == ')')
			{
				if (stk.size() == 0)
				{
					VSP = true;
					break;
				}
				stk.pop();
			}
		}
		if (stk.size() != 0 || VSP) cout << "NO" << "\n";
		else cout << "YES" << "\n";
		VSP = false;
		while (stk.size())
		{
			stk.pop();
		}
	}

}