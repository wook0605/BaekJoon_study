//11651 좌표 정렬하기2
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second && a.first < b.first) return a.first < b.first;
	else return a.second < b.second;
}

int main()
{
	int N = 0, temp_x = 0, temp_y = 0;
	cin >> N;
	vector<pair<int, int>> point;
	
	for(int i = 0; i<N; i++)
	{
		cin >> temp_x >> temp_y;
		point.push_back(pair<int, int>(temp_x, temp_y));
	}

	sort(point.begin(), point.end(), cmp);
	
	for (int i = 0; i < N; i++)
	{
		cout << point[i].first << " " << point[i].second << "\n";
	}
}