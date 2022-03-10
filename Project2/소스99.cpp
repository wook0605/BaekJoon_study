//에라토스테네스의 채

#include <iostream>

using namespace std;

int arr[1000001];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;

	cin >> M >> N;

	for (int i = 2; i <= N; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i * i <= N; i++)
	{
		if (arr[i] > 0)
		{
			for (int j = i * i; j <= N; j += i)
			{
				arr[j] = 0;
			}
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << "\n";
		}
	}

}