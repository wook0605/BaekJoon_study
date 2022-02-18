// 피보나치 수 (재귀)

//#include <iostream>
//
//using namespace std;
//
//int fibonacci(int num)
//{
//	if (num == 0) return 0;
//	else if (num == 1) return 1;
//	else
//	{
//		return fibonacci(num - 1) + fibonacci(num - 2);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	cout << fibonacci(num);
//}

#include <iostream>
using namespace std;
int fibonacci(int A, int B, int num)
{
	int x = 0;
	if (num == 0) return A;
	x = fibonacci(B, A + B, num - 1);
}

int main()
{
	int num = 0;
	cin >> num;
	cout << fibonacci(0, 1, num);
}