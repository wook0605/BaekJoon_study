//1003 피보나치 (DP)
#include <iostream>

using namespace std;

int memo[100];
int z_cnt[100];
int o_cnt[100];
int fibo(int x)
{
	if (x == 0)
	{
		z_cnt[0] = 1;
		return 1;
	}
		
	else if (x == 1) 
	{
		o_cnt[1] = 1;
		return 1;
	}

	else
	{
		z_cnt[0] = 1;
		o_cnt[1] = 1;
		for (int i = 2; i <= x; i++)
		{
			z_cnt[i] = z_cnt[i - 2] + z_cnt[i - 1];
			o_cnt[i] = o_cnt[i - 2] + o_cnt[i - 1];
		}
	}
	return memo[x - 1] + memo[x - 2];
}

int main()
{
	memo[0] = 1;
	memo[1] = 1;

	int tc = 0;
	int N = 0;
	scanf("%d", &tc);

	for (int i = 0; i < tc; i++)
	{
		scanf("%d", &N);
		fibo(N);
		printf("%d %d\n", z_cnt[N], o_cnt[N]);
	}
}