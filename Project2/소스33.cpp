// 5622 ´ÙÀÌ¾ó

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int sec = 0;

	for (int i = 0; S[i]; i++)
	{
		if ((S[i] % 'A') < 3)
		{
			sec += 3;
		}

		else if((S[i] % 'P') < 4)
		{
			sec += 8;
		}

		else if ((S[i] % 'T') < 3)
		{
			sec += 9;
		}

		else if ((S[i] % 'W') < 4)
		{
			sec += 10;
		}
		else
		{
			sec += ((S[i] % 'A') / 3) + 3;
		}
	}

	cout << sec;
}