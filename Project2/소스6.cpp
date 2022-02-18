#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int>param)
{
	int sum = 0;
	for (int i = 0; i < param.size(); i++)
	{
		sum += param[i];
	}
	return sum;
}

int main()
{
	vector<int>num;
}