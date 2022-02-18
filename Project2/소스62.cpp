 //11652 Ä«µå
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<long long, int> arr;
	long long N = 0, temp = 0, value = 0;
	pair<long long, int> max = { 0, 0 };

	cin >> N;

	for (long long i = 0; i < N; i++)
	{
		cin >> temp;
		arr[temp]++;
	}

	for (auto i : arr)
	{
		if (i.second > max.second)
		{
			max.second = i.second;
			max.first = i.first;
		}
	}
	cout << max.first;
}