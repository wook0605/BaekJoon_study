// 11279¹ø ÃÖ´ë Èü
#include <iostream>
#include <queue>
#include <algorithm>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N = 0, temp = 0, index = 0;
	priority_queue<int> arr;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr.push(temp);
		if (temp == 0)
		{
			cout << arr.top() << "\n";
			arr.pop();
		}
	}
}