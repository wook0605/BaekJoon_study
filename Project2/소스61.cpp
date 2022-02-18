// 1932 Á¤¼ö »ï°¢Çü

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	vector<vector<int>> tri(N, vector<int>(N, 0));
	vector<vector<int>> sum(N, vector<int>(N, 0));
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> tri[i][j];
			sum[i][j] = tri[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (i != 0)
		{
			sum[i][0] += sum[i - 1][0];
		}
		for (int j = 1; j <= i; j++)
		{
			sum[i][j] += max(sum[i - 1][j - 1], sum[i - 1][j]);
		}
	}

	cout << *max_element(sum[N-1].begin(), sum[N-1].end());
}
