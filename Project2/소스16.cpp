#include <stdio.h>
#include <stdlib.h>

int combination(int n, int r)
{
	int denominator = 1, numerator = 1;
	for (int i = 0; i < r; i++)
	{
		numerator *= (n - i); //분자
		denominator *= (r - i); //분모
	}
	return numerator / denominator;
}

int main()
{
	int n = 0, m = 0, ** index, l = 1;

	do
	{
		scanf("%d %d", &n, &m);
	} while (m<1 && m>n && n>9);
	
	index = (int**)malloc(sizeof(int) * combination(n, m));
	for (int i = 0; i < combination(n, m); i++)
	{
		index[i] = (int*)malloc(sizeof(int) * m);
	}
	
	for (int i = 0; i < combination(n,m); i++)
	{
		for (int k = 1; k < n + 1; k++)
		{
			for (int j = 0; j < m; j++)
			{
				index[i][j] = k;
				if (l != k )
				{
					index[i][j] = l;
				}
				l++;
				printf("%d ", index[i][j]);
			}
			l = 1;
		}
	}
}