//2775 부녀회장이 될테야

#include <iostream>

using namespace std;

int main()
{
	int test = 0, k = 0, n = 0, sum = 0;
	int apt[15][15] = { 0, };
	cin >> test;

	for (int i = 0; i < 15; i++)
	{
		apt[0][i] = i;
	}

	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
		}
	}

	for (int i = 0; i < test; i++)
	{
		cin >> k;
		cin >> n;

		cout << apt[k][n] << "\n";
	}
}