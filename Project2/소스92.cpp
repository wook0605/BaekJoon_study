//9461 파도반 수열
#include <iostream>

using namespace std;

long long DP[102] = { 0,1,1,1 };

long long w(int x)
{
	if (x < 4) return 1;

	for (int i = 4; i <= x; i++)
	{
		DP[i] = DP[i - 3] + DP[i - 2];
	}
	return DP[x];
}

int main()
{
	int T = 0, N = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << w(N) << "\n";
	}
}