//11729 하노이 타워

//#include <stdio.h>
//
//void hanoi(int disk_n, char Source, char Assist, char Goal) //Move disk disk_n, from -> to
//{
//	if (disk_n == 1) //disk has left 1
//	{
//		printf("%d disk Moved from %c to %c\n", disk_n, Source, Goal);
//	}
//
//	else //other case
//	{
//		hanoi(disk_n - 1, Source, Goal, Assist);
//		printf("%d disk Moved from %c to %c\n ", disk_n, Source, Goal);
//		hanoi(disk_n - 1, Assist, Source, Goal);
//	}
//}
//
//
//int main()
//{
//	hanoi(3, 'A', 'B', 'C'); // three disk from A to C bypass B
//	return 0;
//}

#include <iostream>

using namespace std;

void hanoi(int num, int source, int Assist, int goal)
{
	if (num == 1)
	{
		cout << source << " " << goal << "\n";
	}
	else
	{
		hanoi(num - 1, source, goal, Assist);
		cout << source << " " << goal << "\n";
		hanoi(num - 1, Assist, source, goal);
	}
}

int main()
{
	int num = 0, sum = 1;
	cin >> num;
	for (int i = 0; i < num-1; i++)
	{
		sum = (sum * 2) + 1;
	}
	cout << sum << "\n";
	hanoi(num, 1, 2, 3);
}