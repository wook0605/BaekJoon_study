//15652 N°ú M(4)
#include <iostream>
#include <vector>
using namespace std;
int N, M;
vector<pair<int, bool>> vec(9);

void Solution(int x)
{
	if (x == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << vec[i].first << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!vec[i].second)
		{
			vec[i].second = true;
			vec[x].first = i;
			Solution(x + 1);
			vec[i].second = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	Solution(0);
}