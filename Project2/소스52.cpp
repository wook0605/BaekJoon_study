//11653 소인수 분해
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N = 0, num = 2;
	vector<int>ss;
	cin >> N;
	if (N == 1) return 0;

	while (N > 1)
	{
		if (N%num == 0)
		{
			N /= num;
			cout << num << "\n";
		}
		else
		{
			num++;
		}
	}
}