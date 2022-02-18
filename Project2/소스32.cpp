// 2231 ºÐÇØÇÕ
#include <iostream>

using namespace std;

int main()
{
	int N = 0, M = 0, sum = 0;
	cin >> N;
	while (true)
	{
		M++;
		sum = M;
		for (int i = 1; M / i > 0; i *= 10)
		{
			sum += (M / i) % 10;
		}
		if (sum == N || M > N) break;
	}
	if (M > N) M = 0;
	cout << M;
}