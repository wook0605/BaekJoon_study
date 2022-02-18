// 2581 ¼Ò¼ö

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N = 0, M = 0, min = 0, sum = 0;
	vector<int>arr;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && j < i) break;
			else if (i == j) arr.push_back(j);
		}
	}
	if (arr.size() == 0) cout << -1;
	else
	{
		min = *min_element(arr.begin(), arr.end());
		for (int i = 0; i < arr.size(); i++)
		{
			sum += arr[i];
		}
		cout << sum << "\n" << min;
	}

}