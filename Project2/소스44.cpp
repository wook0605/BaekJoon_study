//1427 소트인사이드
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N = 0, arr[10] = { 0, }, count = 0;
	cin >> N;

	while (N > 0)
	{
		arr[count] = N %10;
		N /= 10;
		count++;
	}
	sort(arr, arr + count);
	for(int i = count-1; i >= 0; i--)
	{
		cout << arr[i];
	}
}