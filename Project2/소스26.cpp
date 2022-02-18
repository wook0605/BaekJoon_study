#include <iostream>
using namespace std;

int path(int N, int before, int d)
{
	int max_value = 1, count = 1;
	while (N>max_value)
	{
		max_value += count * d;
		count++;
	}
	return count;
}

int main()
{
	int N = 0, path_count = 0;

	while (true)
	{
		cin >> N;
		if (1 <= N <= 1000000000) break;
	}	
	path_count = path(N, 1, 6);
	cout << path_count;
}