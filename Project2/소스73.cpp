// 1874 ¼ö¿­

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	stack<int> stk;
	vector<int>arr;
	vector<char> c;
	int T = 0, temp = 0, count = 1;
	bool possible = true;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	for (int i = 0; i < arr.size(); i++)
	{
		if (!stk.empty())
		{
			if (stk.top() > arr[i])
			{
				possible = false;
				break;
			}
		}
		else
		{
			stk.push(count++);
			c.push_back('+');
		}
		while (stk.top() != arr[i])
		{
			stk.push(count++);
			c.push_back('+');
		}
		if (stk.top() == arr[i])
		{
			stk.pop();
			c.push_back('-');
		}
	}

	if (possible)
	{
		for (int i = 0; i < c.size(); i++)
		{
			cout << c[i] << "\n";
		}
	}
	
	else
	{
		cout << "NO" << "\n";
	}
}