#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int range = 0, sum = 0;
	while (true)
	{
		cin >> range;
		if (0 < range < 101) break;
	}
	vector<char>temp(range);
	for (int i = 0; i < temp.size(); i++)
	{
		cin >> temp[i];
		sum += temp[i] - '0';
	}
	cout << sum << endl;
}