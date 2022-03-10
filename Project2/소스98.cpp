#include <iostream>
#include <vector>

using namespace std;

int nums[4] = { 2,3,5,7 };
int N, temp, cnt;
vector<int> vec;

void solution()
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 2; j <= vec[i]; j++)
		{
			if (vec[i] % j == 0 && j < vec[i]) break; //나누어 떨어지는 수가 존재하면 안됨
			else if (vec[i] == j) cnt++;
		}
	}
	cout << cnt;
}

int main()
{
	cin >> N;

	while (N--)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	solution();
}