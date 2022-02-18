//1904 01≈∏¿œ
#include <iostream>
#include <vector>
using namespace std;

vector <long long> memo(1000001, -1);
int arr[3] = { 0,1,2 };
int w(int N)
{
	if (N < 2) return 1;
	
	for (int i = 0; i < 3; i++)
	{
		memo[i] = arr[i];
	}

	for (int i = 3; i <= N; i++)
	{
		memo[i] = (memo[i - 2] + memo[i - 1]) % 15746;
	}
	return memo[N];
}

int main()
{
	int N = 0;

	cin >> N;

	cout << w(N);
}