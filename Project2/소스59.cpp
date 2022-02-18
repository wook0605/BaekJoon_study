// ÀÌÁøÅ½»ö 10816
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int M = 0, N = 0, input = 0;
	vector<int>arr;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		arr.push_back(input);
	}
	sort(arr.begin(), arr.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		cout << upper_bound(arr.begin(), arr.end(), input) - lower_bound(arr.begin(), arr.end(), input) << " ";
		
	}
}