// 18870 좌표 압축 (못풀었음)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 0, temp = 0, cnt = 0;
	cin >> N;
	vector<int> arr;
	vector<int> count;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr.push_back(temp);
		count.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	arr.resize(unique(arr.begin(), arr.end()) - arr.begin());

	for (int iter : count)
	{
		int position = lower_bound(arr.begin(), arr.end(), iter) - arr.begin();
		cout << position << " ";
	}
}