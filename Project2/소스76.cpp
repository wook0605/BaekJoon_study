#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	float a = 0;
	vector<float>data;

	for (int i = 0; i < num; i++)
	{
		cin >> a;
		data.push_back(a);
	}
	sort(data.begin(), data.end());

	printf("%.2f", data[1]);
}