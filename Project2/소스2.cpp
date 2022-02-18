#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>poly(42);
	vector<int>num(10);
	int count = 0;
	while (count<10)
	{
		cin >> num[count];
		if (0 < num[count] <= 1000) count++;
	}
	count = 0;
	for (int i = 0; i < poly.size(); i++)
	{
		for (int j = 0; j < num.size(); j++)
		{
			if (num[j] % 42 == i)
			{
				poly[i]++;
				break;
			}
		}
	}

	for (int i = 0; i < poly.size(); i++)
	{
		if (poly[i] != 0)
		{
			count++;
		}
	}
	cout << count;
}