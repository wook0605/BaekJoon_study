// 2108 통계학 (계수정렬 사용)

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int middle = 0, range = 0, mode = 0, N = 0, count_ = 0, index = 0, max = 0;
	double ave = 0;

	cin >> N;
	vector<int>arr(N);
	vector<int>counting(8001, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		ave += (double)arr[i];
		counting[arr[i] + 4000]++;
	}
	ave /= N;
	ave = floor(ave + 0.5); // 평균값
	sort(arr.begin(), arr.end());
	middle = arr[N / 2]; //중앙값
	range = (*max_element(arr.begin(), arr.end())) - (*min_element(arr.begin(), arr.end())); //범위
	for (int i = 0; i < 8001; i++)
	{
		if (counting[i] == 0) continue;
		if (counting[i] == max)
		{
			if (count_)
			{
				mode = i - 4000;
				count_ = 0;
			}
		}
		if (counting[i] > max)
		{
			max = counting[i];
			mode = i - 4000;
			count_ = 1;
		}
	}

	cout << (int)ave << "\n" << middle << "\n" << mode << "\n" << range;
}