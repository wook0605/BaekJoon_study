//2447 º°Âï±â
#include <iostream>
using namespace std;

void star(int N, int x, int y)
{
	if ((x/N) % 3 == 1 && (y/N) % 3 == 1)
	{
		cout << ' ';
	}
	else
	{
		if (N/3 == 0)
		{
			cout << '*';
		}
		else
		{
			star(N / 3, x, y);
		}
	}
}

int main()
{
	int N = 0;
	cin >> N;
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			star(N, x, y);
		}
		cout << "\n";
	}
}