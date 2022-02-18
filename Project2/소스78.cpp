//거스름돈 (그리디 알고리즘)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> yen = { 500, 100, 50, 10, 5, 1 };
	int money = 0, count = 0;
	cin >> money;
	money = 1000 - money;
	for (int idx = 0; idx < 6; idx++)
	{
		count += (money / yen[idx]);
		money %= yen[idx];

	}
	cout << count;
}