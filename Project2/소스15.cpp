#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int num = 0, max = 0;
	cin >> num;
	vector<int>weight(num);
	vector<int>height(num);
	vector<int>rate(num);
	rate.assign(num, rate.size());
	for (int i = 0; i < num; i++)
	{
		cin >> weight[i] >> height[i];
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (i != j)
			{
				if (weight[j] > weight[i] && height[j] > height[i])
				{
					rate[j]--;
				}
				else if ((weight[j] >= weight[i] && height[j] <= height[i]) || (weight[j] <= weight[i] && height[j] >= height[i]))
				{
					rate[j]--;
				}
				
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << rate[i] << " ";
	}

}