//4948 베르트랑 공준
#include <iostream>

using namespace std;
int arr[300000];

int N;
long long result;

void solution()
{
	arr[0] = 0;
	arr[1] = 0;
	for (int i = 2; i <= 246912; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i * i <= 246912; i++)
	{
		if (arr[i] > 0)
		{
			for (int j = i * i; j <= 246912; j += i)
			{
				arr[j] = 0;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	result = 0;
	solution();
	while (true)
	{
		cin >> N;
		if (N == 0) break;
		for (int i = N+1; i <= 2 * N; i++)
		{
			if (arr[i] != 0) result++;
		}
		cout << result << "\n";
		result = 0;
	}
}