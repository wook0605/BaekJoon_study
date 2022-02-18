//2579 계단오르기

#include <iostream>
#include <algorithm>
using namespace std;

int DP[301];
int res[301];
int main()
{
	int cnt = 0, idx = 1, step = 1;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> DP[i];
	}
	res[0] = DP[0];
	for (idx; idx < cnt - 2; idx++)
	{

	}

	cout << *max_element(res, res + cnt);
	
}