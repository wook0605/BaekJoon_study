//최대공약수 구하기

#include <stdio.h>

int Euclid(int N, int M)
{
	if (M == 0) return N;
	return Euclid(M, N % M);
}

int main()
{
	int N = 0, M = 0;

	scanf("%d %d", &N, &M);

	printf("%d", Euclid(N, M));
}