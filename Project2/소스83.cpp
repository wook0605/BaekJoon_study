#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;

	for (int i = 0; i < 3; i++)
	{
		int cnt = 0;
		getline(cin, str);
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '0')
			{
				cnt--;
			}
			else if (str[i] == '1')
			{
				cnt++;
			}
		}
		if (cnt == 4)
		{
			cout << "E\n";
		}
		else if (cnt == 2)
		{
			cout << "A\n";
		}
		else if (cnt == 0)
		{
			cout << "B\n";
		}
		else if (cnt == -2)
		{
			cout << "C\n";
		}
		else
		{
			cout << "D\n";
		}
	}

}