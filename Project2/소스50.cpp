 // 15649 N 과 M (1) 백트래킹 (사용했는지 사용하지 않았는지의 상태가 중요함)

#include <iostream>
#include <vector>

using namespace std;
int N, M;

void back(vector<pair<int, bool>> &arr, int x)
{
	if (x == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i].first << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (!arr[i].second)
		{
			arr[x].first = i+1;
			arr[i].second = true;
			back(arr, x + 1);
			arr[i].second = false;
		}
	}
}

int main()
{
	N = 0; M = 0;
	cin >> N >> M;
	vector<pair<int, bool>> arr(N);
	back(arr, 0);
}