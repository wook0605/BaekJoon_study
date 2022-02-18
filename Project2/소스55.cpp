// 15651 N과M(3) 백트래킹

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

void back(vector<pair<int, bool>> arr, int x)
{
	if (x == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i].first << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < N; i++)
	{
		if (!arr[i].second)
		{
			arr[x].first = i + 1;
			arr[i].second = true;
			back(arr, x + 1);
		}
	}
}

int main()
{
	cin >> N >> M;
	vector<pair<int, bool>>arr(N);
	back(arr, 0);
}