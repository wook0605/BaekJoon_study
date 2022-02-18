//1149 RGB 거리

#include <iostream>
#include <algorithm>
using namespace std;
int cost[3];
int color[1001][3];

int main()
{
	int N = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> cost[0] >> cost[1] >> cost[2];

		color[i][0] = min(color[i - 1][1], color[i - 1][2]) + cost[0]; // 이전 결과에서 Red가 들어간 부분을 제외한 최소값 + RedCost
		color[i][1] = min(color[i - 1][0], color[i - 1][2]) + cost[1]; // 이전 결과에서 Green가 들어간 부분을 제외한 최소값 + BlueCost
		color[i][2] = min(color[i - 1][0], color[i - 1][1]) + cost[2]; // 이전 결과에서 Blue가 들어간 부분을 제외한 최소값 + GreenCost
	}
	
	cout << min(min(color[N][0], color[N][1]), color[N][2]);
}