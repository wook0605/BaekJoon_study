//10250 ACMÈ£ÅÚ

#include <iostream>
#include <string>
using namespace std;

int apt[100][100];
int N, H, W, T;
void solution()
{
	string str;
	int cnt = 1;
	for (int i = 1; i <= W; i++)
	{
		for (int j = 1; j <= H; j++)
		{
			apt[i - 1][j - 1] = cnt++;
			if (apt[i-1][j-1] == N)
			{
				if (i > 9) cout << j << i << "\n";
				else cout << j << "0" << i << "\n";
				break;
			}
		}
	}
}

int main()
{
	cin >> T;

	while (T--)
	{
		cin >> H >> W >> N;
		solution();
	}
}