//Á¤¼ö »ï°¢Çü

#include <iostream>
#include <algorithm>
using namespace std;

int memo[501][501];

int main()
{
	int N = 0, temp = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> memo[i][j];
		}
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			memo[i][j] += max(memo[i - 1][j], memo[i - 1][j - 1]);
		}
	}
	cout << *max_element(memo[N - 1], memo[N - 1] + N);
}