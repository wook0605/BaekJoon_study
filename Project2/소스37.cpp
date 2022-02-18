//1193 ºĞ¼öÃ£±â

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N = 0, count = 1, x = 1, y = 1, sum = 0, sum_count = 0;
//	
//	cin >> N;
//
//	while (N > sum)
//	{
//		sum_count++;
//		sum += sum_count;
//	}
//
//	count = sum - sum_count + 1;
//
//	if (sum_count % 2 == 1) //È¦¼ö
//	{
//		x = sum_count;
//		while (x > 1 && count < N)
//		{
//			x--;
//			y++;
//			count++;
//			if (count == N) break;
//		}
//	}
//	
//	else //Â¦¼ö
//	{
//		y = sum_count;
//		while (y > 1 && count < N)
//		{
//			x++;
//			y--;
//			count++;
//			if (count == N) break;
//		}
//	}
//	cout << x << '/' << y;
//}

#include <iostream>
using namespace std;

int main()
{
	int N = 0, count = 1, x = 1, y = 1;
	bool check = false;

	cin >> N;
	while (count < N)
	{
		if (check)
		{
			x++;
			count++;
			while (x > 1 && count < N)
			{
				x--;
				y++;
				count++;
				if (count == N) break;
				check = false;
			}
		}
		else if (!check)
		{
			y++;
			count++;
			while (y > 1 && count < N)
			{
				y--;
				x++;
				count++;
				if (count == N) break;
				check = true;
			}
		}
	}

	cout << x << '/' << y;
}