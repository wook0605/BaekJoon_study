// 1654 랜선자르기 (이분탐색, 매개변수 탐색)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long count = 0, need = 0, temp = 0, low = 1, high = 0, mid = 0, result = 0, cnt = 0;
	vector <long long > cable;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> count >> need;
	for (int i = 0; i < count; i++)
	{
		cin >> temp;
		cable.push_back(temp);
		high = max(high, cable[i]); //최대값
	}

	while (low <= high) //이분탐색
	{
		mid = ((low + high) / 2);
		cnt = 0;
		for (int i = 0; i < count; i++)
		{
			cnt += (cable[i] / mid);
		}
		if (cnt < need) //랜선 개수가 필요 개수보다 적을때
		{
			high = mid - 1;
		}
		else //랜선 개수가 필요 개수보다 크거나 같을때
		{
			low = mid + 1;
			if (result < mid)
			{
				result = mid;
			}
			else
			{
				result = result;
			}
		}
	}
	cout << result;
}