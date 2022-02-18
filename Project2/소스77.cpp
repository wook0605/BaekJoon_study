#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int ans = 0, sq = 0;
	int arr[5] = { 0, };
	cin >> ans >> sq; //ют╥б
	ans = ans * sq;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		arr[i] -= ans;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	
}