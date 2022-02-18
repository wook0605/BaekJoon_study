// 11047 동전0 그리디 알고리즘

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0, K = 0, temp = 0, sum = 0;
	vector<int>arr;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	for (int i = arr.size()-1; i > -1; i--)
	{
		if (K / arr[i] != 0)
		{
			sum += K / arr[i];
			K %= arr[i];
		}
	}
	cout << sum;
	
}